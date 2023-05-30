#include <iostream>

using namespace std;

//ex1

// class Base {
//     public:
//         void baseFunc1();
//         void baseFunc2();
//         void baseFunc3();


// };


// // public base, protcted base ve private base diyebiliriz.
// // bazı kısıtlamalar ile kalıtım alabileceğiz.

// class Der: public Base {
//         public:
//         void derFunc1();
//         void derFunc2();
//         void derFunc3();
// };

// int main(){
//     Der myder;
//     Base mybase;

//     //myder = mybase; // error
//     //mybase = myder; // ok

// }


//ex2

// class Base {
//     public:
//         void baseFunc1();
//         void baseFunc2();
//         void baseFunc3();


// };


// // public base, protcted base ve private base diyebiliriz.
// // bazı kısıtlamalar ile kalıtım alabileceğiz.

// class Der: public Base {
//         public:
//         void derFunc1();
//         void derFunc2();
//         void derFunc3();
// };


// int main(){
//     Der myder;
//     Base *ptr;

//     ptr = &myder;

//     Base &r = myder; // referans ataması mümkün

//     Base mybase2;
//     Der myder2;
//     myder2 = mybase2; // error

// }


//ex3

// class Car {
//     public:
//         void start() {
//             cout<<"start"<<endl;
//         }
//         void speedup() {
//             cout<<"speedup"<<endl;
//         }
//         void stop() {
//             cout<<"stop"<<endl;
//         }
//         void brake() {
//             cout<<"brake"<<endl;
//         }
// };

// void CarGame(Car &r){
//     r.start();
//     r.speedup();
//     r.brake();
//     r.stop();
// }

// class BMW: public Car {

// };

// class Nissan : public Car {

// };

// class Fiat : public Car {

// };

// int main(){
//     BMW bmw;
//     Nissan nissan;

//     // CarGame(bmw);
//     // CarGame(nissan);

//     bmw.start();
// }


//ex4

/*
Base de bulunan func fonksiyonu türetilmiş 
class a gitmez. 

*/

class Base {
    public:
        void func( )  {
            cout<<"base func"<<endl;
        }
};

class Der: public Base {
    public:
        void func() { // burada overload da çalışmaz ..!!!
            cout<<"der func"<<endl;
        }
};


int main(){
    Der myder;

    myder.func();
    myder.Base::func(); // aynı isimde ki base de ki fonksiyonu çağırmanın yolu.

}