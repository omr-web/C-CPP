#include <iostream>

using namespace std;

/*
friend --> shared globally function

(1) global fonksiyon friend member fonksiyon olabilir
(2) class A fonksiyonu class B de tanımlanabilir
(3) bir sınıfın başka bir sınıf da tanımlanması
*/

//ex1
/*
class MyClass {
    private:
        int x;
    public:      
        friend void func(int); 
};

void func(int a){
    MyClass m2;
    m2.x = 2; // friend fonksiyonun içinde sınıfa ait bütün değerlere erişebiliriz.
    cout<<"a:"<<a<<endl;
}
int main (){
    MyClass m1;
   
    func(4);

}

*/

//ex2
/*
class Box{
    private:
        double width;
    public:
        friend void printWidth(Box box);
        void setWidth(double wid);
};
void Box::setWidth(double wid) {
    width = wid;
}

void printWidth(Box box) {
    cout<<"width:"<<box.width<<endl;
}

int main(){
    Box box;
    box.setWidth(5.0);
    printWidth(box);
}

*/


//ex3 
// operator overloading and friend

/*
(1) olmayan bir operator overload edemeyiz
(2) doğal türler için operator overloading yoktur.
(3) her operator overload edilemez (::, sizeof, . , *)
(4) bazı operatorler overload edilebilir sınıf içinde
ama global alanda edilemezler.
(5) () default arguman alabiliyor ama diğerleri alamaz
(6) operator öncelikleri değiştirilemez

MyClass operator()()
MyClass operator+()

*/


class MyClass {
    private:
        int x;
        void operator-(const MyClass &r) {
            cout<<"operator is calling"<<endl;
        }
    public:
        friend void func();
        void operator+(const MyClass &r) {
            cout<<"operator is calling"<<endl;
        }

};

void func(){
    MyClass m1,m2;
    m1-m2;
}
int main(){
    MyClass m1,m2;
    m1+m2;
    func();
}



//special int 

