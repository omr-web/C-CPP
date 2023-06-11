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

// class Base {
//     public:
//         void func( )  {
//             cout<<"base func"<<endl;
//         }
// };

// class Der: public Base {
//     public:
//         void func() { // burada overload da çalışmaz ..!!!
//             cout<<"der func"<<endl;
//         }
// };


// int main(){
//     Der myder;

//     myder.func();
//     myder.Base::func(); // aynı isimde ki base de ki fonksiyonu çağırmanın yolu.

// }


//ex5


// class Base {
//     public:
//         void func(){
//             cout<<"base func"<<endl;
//         }
// };

// class Der: public Base {
//     private:
//         void func(){
//             cout<<"der func"<<endl;
//         }
// };


// int main(){
//     Der myder;
//     // myder.func(); 

// }


//ex6


// class Base {
//     public:
//         static void func(){
//             cout<<"base func"<<endl;
//         }
// };

// class Der: public Base {
//     public:
//         void func(){
//             cout<<"der func"<<endl;
//         }
// };


// int main(){
//     Der myder;
//     myder.func(); 
//     Base::func(); // STATİC Olduğu için sınıfa ait
//     //Der::func(); // fonksiyon sınıfa ait değil nesneye ait

    
// }


//ex7


// class Base {
//    int x;
//    int pri;
//     public:

//     protected:
//         int pt;
// };

// class Der: public Base {
//     int a;
//     public:
//         void func(){
//             a++;
//         }
// };


// int main(){
//     Der myder;

//     myder.func();

    
// }

//ex8


// class Base {
//    private: // türetilmiş 
//         int x;
//         int pri;
//     public:

//     protected:// türetilmiş sınıfta kullanılabilir., mainden ulaşılamaz
//         int pt;
// };

// class Der: public Base {
//     int a;
//     public:
//         void func(){
//             a++;
            
//         }
// };


// int main(){
//     Der myder;

//     myder.func();

    
// }


//ex9


// class Base {
//     public:
//         Base() {
//             cout<<"base default constructor"<<endl;
//         }
//         Base(int a) {
//             cout<<"base int constructor"<<endl;
//         }
//         ~Base() {
//             cout<<"base destructor"<<endl;
//         }

// };

// class Der: public Base {
//     public:
//         Der():Base(1) /* bu durumda default const a gerek yok */ {
//             cout<<"der constructor"<<endl;
//         }
//         ~Der() {
//             cout<<"der destructor"<<endl;
//         }
// };



// int main(){
//     Der myder;
// }


//ex10 



class Base {
    public:
        Base() {
            cout<<"base default constructor"<<endl;
        }
        Base(const Base &r) {
            cout<<"base copy constructor"<<endl;
        }
        ~Base() {
            cout<<"base destructor"<<endl;
        }
};

class Der: public Base {
    public:
        Der() {
            cout<<"der default constructor"<<endl;
        }
        Der(const Der &r): Base(r) {
            cout<<"der copy constructor"<<endl;
        }
        ~Der() {
            cout<<"der destructor"<<endl;
        }
};

int main(){
    Der myder;
    Der myder2(myder);
}