#include <iostream>
#include <cstring>


using namespace std;


// class MyClass {
//     public:
//         void func()const; // not changing in object

// };

/*
(1) sınıf elemanlarını değiştiremiyoruz.
(2) mutable 



*/

// class MyClass {
//     mutable int mx;
//     int x;
//     const int a; // bu değişkene constructor içinde veya dışında dahi değer ataması yapamayız.
//     public:
//         void accessor()const; // not changing in object
//         MyClass(): a(0), mx(2),x(5) {
//             cout<<"constructor"<<endl;
//         }
//         ~MyClass(){
//             cout<<"destructor"<<endl;
//         }
//         void display(){
//             cout<<"mx: "<<mx<<endl;
//             cout<<"a: "<<a<<endl;
//             cout<<"x: "<<x<<endl;

//         }

// };

// void MyClass::accessor()const {
//     mx = 0; // sıkıntı yok
//     //x  = 2; // hatalı    
// } 


// // const MyClass x okuma amaçlı nesne

// /*
// (1) eğer bir nesne const ise const olmayan bir şey
// o objeye atanamaz.
// (2) 

// */

// // member initializing list 

// // ex1
// int main(){
//     MyClass m1;
//     m1.display();
// }


//ex2

class Name {
    private:
        char *pd;
        int len;
        // int number;
    
    public:
        Name(const char *p);
};

int numAssign(void){
   
    return 5;
}
Name::Name(const char *p): len(strlen(p)),pd(new char[len+1])/* ,number(numAssign()) */ {
    strcpy(pd,p);
    cout<<"name:"<<pd<<endl;
    // cout<<"number: "<<number<<endl;
}
int main(){
    Name myname("omer");
    cout<<"main start"<<endl;
}