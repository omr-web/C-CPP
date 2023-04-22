#include <iostream>

using namespace std;


/*
sınıflar aslında bir yapı türü.

sınıfların bir elemanına obje denir.
obje içerisinde dğeişkenler veya fonksiyonlar bulunabilir.

sınıf 3 alana ayrılmış

(1)public => herkes erişebilir
(2)private => sadece sınıf içerisinde erişebilir
(3)protected => sadece o obje ve kalıtım aldığı nesneler erişebilir.

*/


//ex1

// class Data {
//     int x,y,z; // varsayılan olarak bu değişkenler private olur
    
//     public: // her yerden erişim var
//     int a;

//     protected: // mainden erişim yoktur.
//     int c;
// };

// int main(){
//     Data data1;
    
    
// }


//ex2

/*
class Data {
    int x,y,z; // varsayılan olarak bu değişkenler private olur
    
    public: // her yerden erişim var
    int a;
    void func();

    protected: // mainden erişim yoktur.
    int c;
};

int main(){
    Data data1;
    data1.func();
    
}

*/


//ex3

// class Data {
//     private:
//         int x,y,z;
    
//     public:
//         // Function overloading
//         void func() {

//         }
//         void func(int a) {

//         }

// };

// int main(){
//     Data data;
//     data.func();
// }


//ex4

// private public de olması önemli değil scope lar aynı çünkü
// class Data {
//     private:
//         int x,y,z;
//         void func() {

//         }
    
//     public:

//         void func(int a) {

//         }

// };

// int main(){
//     Data data;
//     data.func();
// }


//ex5

// class Data {
//     private:
//         int x,y,z;
//         void func(int a) {
//             std::cout<<"private func"<<std::endl;
//         }
    
//     public:

//         void func() {
//             std::cout<<"public func"<<std::endl;
//             int x=5;
//             func(x);
//         }

// };

// int main(){
//     Data data;
//     data.func();
// }


//ex6


// class içinde static bir değişken olması

// class Data {
//     private:
//         int x,y,z;
//         void func(int a) {
//             std::cout<<"private func"<<std::endl;
//         }
    
//     public:
//         static int a;
//         void func() {
//             std::cout<<"public func"<<std::endl;
//             int x=5;
//             func(x);
//         }

// };

// void func(){
//     cout<<"global func";
// } 

// int main(){
//     Data data;
    
//     // data.func(); // class scope 
//     // func();     // file scope

//     // nesne olmadan bir anlamı yok.
//     // Data *dataptr;
//     // dataptr->a = 5;

//     Data *dataptr = &data;
//     dataptr->a = 5;
//     cout<<data.a<<endl;

// }
    

//ex7


// class Data {
//     private:
//         int x,y,z;
        
//     public:
//         static int a;
//         void func();
// };

// void Data::func(){
//     int x = 67;
//     x = 20;
//     cout<<"func"<<endl;
//     Data::x = 43;
//     cout<<"x:"<<x<<endl;
// }

// int main(){
//     Data data;
//     data.func();

// }

//ex8


// class Data {
//     private:
//         int x,y,z;
        
//     public:
//         static int a;
//         void func();
// };
// int x = 10;

// void Data::func(){ // class scope
//     int x = 67;
//     Data::x++;
//     ::x = 50 ; // global alandaki x i arıyor.
//     cout<<"x: "<<x<<endl;
//     cout<<" data x: "<<Data::x<<endl;


// }

// void func(){ // global scope
//     cout<<"global func"<<endl;
// }


// int main(){
//     Data data;
//     data.func();

//     // fonksiyon direkt global scope da arandığı için main e bakılmıyor
//     // bu yüzden func değişkeni tanımlayabildim. Class içerisinde bulunan
//     // func fonksiyonunda scope u farklı 

//     int func=0;
//     ::func();

//     cout<<func<<endl;
// }


//ex9


// class Data {
//     private:
//         int x,y,z;
        
//     public:
//         static int a;
//         void func();
// };

// Data g;

// void Data::func(){ // class scope
//     g.x = 5;
//     Data y;
//     y.x = 2;

// }

// void func(){
//     g.func();
// }


// int main(){
//     Data data;
//     data.func();

//     // fonksiyon direkt global scope da arandığı için main e bakılmıyor
//     // bu yüzden func değişkeni tanımlayabildim. Class içerisinde bulunan
//     // func fonksiyonunda scope u farklı 

//     int func=0;
//     ::func();

//     cout<<func<<endl;
// }


//ex10


// class Data {
//     private:
//         int x,y,z;
        
//     public:
//         static int a;
//         void func();
//         void foo()const;
// };



// void Data::func(){ // class scope
//     x = 20; //private x
// }

// void Data::foo() const {
//    // x = 5 ; // böyle bir şey yapamayız çünkü fonksiyon const
//    //func(); // syntax error bu ancak func da const ise mümkün 
//     //yani const fonksiyonlar sadece const fonk. çağırabilir.
//     //const fonksiyon sadece bilgi almak için kullanılır.

// }

// int main(){
//     Data data;
//     data.foo();
// }



//ex11  this keyword == objenin adres değeri

// class MyClass {
//     private:
//         int x;
        
//     public:
//         void foo();
// };

// void MyClass::foo(){
//     cout<<"this:"<<this<<endl;
// }
// int main(){
//     MyClass data;
//     cout<<"&data"<<&data<<endl;
//     data.foo();
// }


//ex12


class MyClass {
    private:
        int x;
        
    public:
        MyClass *foo();
        void func();

};
void MyClass::func() {

}
MyClass* MyClass::foo(){
    // cout<<"this:"<<this<<endl;
    return this;
}
int main(){

    MyClass data;
    
    data.foo()->func(); // geçerli çünkü data.foo() zaten this
}