#include <iostream>

using namespace std;


// inline int Max(int x, int y) {
//     return (x>y) ? x : y; 
// }


// int main(){
//     cout<<"MAX: "<<Max(1,5)<<endl;
// }


//ex2 

//Conversion Constructor

// class MyClass {
//     private:
//         int myVar;
//     public:
//         MyClass(int x) {
//             myVar = x;
//         }
//         void display()const{
//                 cout<<"myvar:"<<myVar<<endl;
//         }

//         MyClass &operator=(const MyClass &r) {
//             cout<<"operator ="<<endl;
//             return *this;
//         }
// };

// int main(){
//     MyClass m1(10);
//     m1.display();
//     cout<<&m1<<endl;
    
//     //hepsi aynı burada aynı zamanda bir kopyalama işlemi de var 
//     //m1 = 5; // sorun çıkmıyor
//     //m1 = MyClass(5);
//     //m1 = (MyClass)5;
    
//     m1.display();
//     cout<<&m1<<endl;
// }


//ex3



// class Counter {
//     private:
//         int mval;
//         int bval;
//     public:
//         Counter(int val = 0):mval(val),bval(val) {

//         }
//         void display()const {
//             cout<<"mval: "<<mval<<endl;
//             cout<<"bval: "<<bval<<endl;

//         }



// };

// int main(){

//     Counter myCounter(5);
//     myCounter.display();

//     myCounter = 80;
//     myCounter.display();


// }


//explicit constructor

//ex4

// class Counter {
//     private:
//         int mval;
//         int bval;
//     public:
//         explicit Counter(int val = 0):mval(val),bval(val) {

//         }
//         void display()const {
//             cout<<"mval: "<<mval<<endl;
//             cout<<"bval: "<<bval<<endl;

//         }



// };

// int main(){

//     Counter myCounter(5);
//     myCounter.display();

//     myCounter = 80; // constructor explicit olduğu için tür dönüşümü yapmıyoruz
//     myCounter.display();


// }



// named constructor

//ex5

class Complex {
    private:
        double mag;
        double angle;
        double real;
        double imag;
        static int flag;
        Complex(double mag,double angle,int dummy) {
                this->mag = mag;
                this->angle = angle;
                flag = 1;

        }
        Complex(double real,double imag) {
                this->real = real;
                this->imag = imag;
                flag = 2;
        }
    public:
        static Complex* createPolar(double mag,double angle) {
            return new Complex(mag,angle,0);
        }
        static Complex *createCartesian(double real,double imag) {
            return new Complex(real,imag);
        }
        void display()const {
                if(flag == 1) {
                    cout<<"mag:"<<mag<<"angle"<<angle<<endl;
                }
                else {
                    if(flag == 2) {
                        cout<<"real"<<real<<"imag"<<imag<<endl;
                    }
                }
        }


};

int Complex::flag = 0;
int main(){
    //Complex p1(1.2,2.3); // syntax error

    Complex *p1 = Complex::createPolar(1.2,0.3);
    p1->display();
    Complex *p2 = Complex::createCartesian(1.2,0.5);
    p2->display();

}