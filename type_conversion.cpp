/*
C de tür dönüşümü 
(int*)malloc(...)

int y = (int)x;

C++ da tür dönüşümü 

static_cast
const_cast
reinterpret_cast
dynamic_cast



*/


// #include <iostream>

// using namespace std;

// /*
// aşağıdaki örnekte ki cast etme işlemleri
// aslında hep aynı şuan burada static cast kullanılmasının
// özel br amacı yok.

// */
// int main(){
//     float x = 4.25;

//     int y = (int)x;

//     int z = x;

//     cout<<"x:"<<x<<endl;
//     cout<<"y:"<<y<<endl;
//     cout<<"z:"<<z<<endl;

//     int f = static_cast<int>(x);
//     cout<<"f:"<<f<<endl;

// }


//ex2

#include <iostream>

using namespace std;

// int main(){

//     const int x = 50;
//     const int * y = &x;

//     int q=20;

//     cout<<"*y:"<<*y<<endl;
    
//     //int* z;
//     //y=z;
//     //cout<<"*y:"<<*y<<endl;
    
//     // const olmak dan kurtarıyorum
//     int *z = const_cast<int*>(y);
//     *z = 100;

//     cout<<"x:"<<x<<endl;
//     cout<<"*y:"<<*y<<endl;

//     cout<<"address of x :"<<&x<<endl;
//     cout<<"address of y :"<<y<<endl;



// }


// COMPOSITION CODING 

//ex1
// class A {
//     private:
//         int a;
//     public:
//         A(){
//             cout<<"A constructor"<<endl;
//         }
//         ~A(){
//             cout<<"A destructor"<<endl;
//         }

// };

// class B {
//     private:
//         int a;
//         A aclassvar;

//     public:
//         B(){
//             cout<<"B constructor"<<endl;
//         }
//         ~B(){
//             cout<<"B destructor"<<endl;
//         }
// };


// int main(){
//     B b;
// }


//ex2


// class Engine {
//     private:
//     public:
//         Engine(){
//             cout<<"Engine constructor"<<endl;
//         }
//         ~Engine(){
//             cout<<"Engine destructor"<<endl;
//         }
//         void run(){
//             cout<<"engine strarted"<<endl;
//         }
//         int switcher;


// };

// class Car {
//     private:
//         Engine itsEngine;       


//     public:
//         Car(){
//             cout<<"Car constructor"<<endl;
//         }
//         ~Car(){
//             cout<<"Car destructor"<<endl;
//         }
//         void run(){
//             itsEngine.switcher = 5;
//             itsEngine.run();
//         }
// };


// int main(){
//    Car mycar;
//    mycar.run();
// }


//ex3

// class Member {
//     public:
//         Member(){
//             cout<<"default Member constructor"<<endl;
//         }
//         ~Member(){
//             cout<<" Member destructor"<<endl;
//         }
//         Member(int a) {
//             cout<<"overloaded Member constructor"<<endl;
//         }
// };
// class Owner {
//     private:
//         Member m;
//         int y;
//     public:
//         Owner(): m(0) {
//             cout<<"default Owner constructor"<<endl;
//         }
//         ~Owner(){
//             cout<<" Owner destructor"<<endl;

//         }
//         int getY(){
//             return y;
//         }
// };


// int main(){
//     Owner m;
//     cout<<m.getY()<<endl;
    
// }



//ex4
#include <string>

// class Person{
//     string name;
//     int age;
//     public:
//         Person(): age(20) {

//         }
//         void display()const {
//             cout<<"name"<<this->name<<endl;
//             cout<<"age"<<this->age<<endl;

//         }
//         Person(const char *p , int mAge): name(p),age(mAge) {

//         }

// };

// int main(){

//     Person per;
//     per.display();
//     Person per2("omer",24);
//     per2.display();
// }



//ex5


// class Member {
//     public:
//         Member(){
//             cout<<"default Member constructorr"<<endl;
//         }
//         ~Member(){
//             cout<<" Member destructor"<<endl;
//         }
//         Member(const Member &r) {
//             cout<<"copy constructor"<<endl;
//         }
// };

// class Owner {
//     public:
//         int x;
//         Member m;

//         Owner(){
//             cout<<"owner default constructor"<<endl;
//         }
//         ~Owner(){
//             cout<<" Owner destructor"<<endl;

//         }
//         Owner(const Owner &r) :m(r.m) {
//             cout<<"copy constructor"<<endl;
//         }
// };

// int main(){
//     Owner x;
//     Owner y = x;
    
//     // x.x =5;
//     // cout<<"y:"<<y.x<<endl;
//     // cout<<"x:"<<x.x<<endl;


// }


//ex6

class Member {
    public:
        Member(){
            cout<<"default Member constructorr"<<endl;
        }
        ~Member(){
            cout<<" Member destructor"<<endl;
        }
        Member(const Member &r) {
            cout<<"copy constructor"<<endl;
        }
        Member& operator=(const Member &r) {
            cout<<"member operator = is calling"<<endl;

        }
};

class Owner {
    int x;
    Member m;
    public:


        Owner(){
            cout<<"owner default constructor"<<endl;
        }
        ~Owner(){
            cout<<" Owner destructor"<<endl;

        }
        Owner(const Owner &r) :m(r.m) {
            cout<<"copy constructor"<<endl;
        }
        Owner &operator=(const Owner &r) {
            cout<<"operator = is calling"<<endl;
            m = r.m;
            return *this;
        }
};



int main(){
    Owner x,y;
    x = y;
    Owner z = y; // copy constructor;
}