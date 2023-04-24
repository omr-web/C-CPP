#include <iostream>
#include <cstring>

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


// class MyClass {
//     private:
//         int x;
        
//     public:
//         MyClass *foo();
//         void func();

// };
// void MyClass::func() {

// }
// MyClass* MyClass::foo(){
//     // cout<<"this:"<<this<<endl;
//     return this;
// }
// int main(){

//     MyClass data;
    
//     data.foo()->func(); // geçerli çünkü data.foo() zaten this
// }


//ex13

// cout overloading kullanımı

// int main(){
//     char *p = "mehmet";
//     int x = 2345;
//     double d = 13.23;

//     // cout<<x << p << d <<endl;
//     cout.operator<<(x).operator<<(p).operator<<(d);
// }


//ex14


// class MyClass {
//     private:
//         int x;
//     public:
//         void func();
// };

// MyClass g;

// void MyClass::func(){
//     // this = &g ; // anachronism
//     *this = g;

// }
// int main(){
//     MyClass f;
//     f.func();
//     cout<<"&f:"<<&f<<endl;
//     cout<<"&g:"<<&g<<endl;

// }


//ex15


// class MyClass {
//     private:
//         int x;
//     public:
//         void func();
// };



// void func(){
//     cout<<"global func"<<endl;
// }

// void MyClass::func(){
//     cout<<"func"<<endl;  

//     // 1. örnek 
//     // ::func(); // global scope
//     // func(); // class scope
    
//     // 2. örnek
//     this->x = 5;
//     cout<<"x:"<<x;
//     MyClass::x = 0;
//     cout<<"x:"<<x;
//     x = 10;
//     cout<<"x:"<<x;
// }



// int main(){
//     MyClass g;
//     g.func();

// }



//ex16  CONSTRUCTOR AND DESTRUCTOR

/*
Sınıfın nesneleridirler.
Constructor ==> kurucu ögedir aslında bir fonksiyon ilk değer atamaları yapar
Destructor ==> free objeyi destroy eder

(1) Class adı Constructor adıdır.
(2) Constructor const olamaz.
(3) Constructor return edemez 
(4) Birden fazla constructor olabilir
(5) Constructor private olabilir
(5) myclass.Myclass() böyle çağrılamaz.

*/


// class MyClass {
//     private:
//         int x;
//     public:
//         // bir constructor declere edildiğinde define edilmek zorundadır.
//         MyClass();
// };


// MyClass::MyClass() {
//     cout<<"constructor"<<endl;
// }

// int main(){
//     // constructor 2 kere çağrılır.
//     MyClass m1;
//     MyClass m2;


// }


//ex17

// class MyClass {
//     private:
//         int x;
//     public:
//         // bir constructor declere edildiğinde define edilmek zorundadır.
//         MyClass();
// };


// MyClass::MyClass() {
//     cout<<"constructor"<<endl;
// }

// int main(){
//     // constructor 2 kere çağrılır.
//     cout<<"main func"<<endl;
//     MyClass m1;
//     cout<<"main func"<<endl;


// }


//ex18



// class MyClass {
//     private:
//         int x;
//     public:
//         // bir constructor declere edildiğinde define edilmek zorundadır.
//         MyClass();
// };


// MyClass::MyClass() {
//     cout<<"constructor"<<endl;
//     cout<<"this"<<this<<endl;
// }

// int main(){

//     // MyClass *ptr;
//     // ptr = new MyClass;

//     // cout<<"ptr:"<<ptr<<endl;

//     int n;
//     cout<<"kac obje"<<endl;
//     cin>>n;
//     MyClass *ptr = new MyClass[n];



// }



//ex19


// class MyClass {
//     private:
//         int x;
//         MyClass();

//     public:
//         // bir constructor declere edildiğinde define edilmek zorundadır.
// };


// MyClass::MyClass() {
//     cout<<"constructor"<<endl;
// }

// int main(){
//     // constructor 2 kere çağrılır.

//     MyClass m1;// constructor private olduğu için ben burda bir nesne
//                 // yaratamıyorum.
 


// }



//ex20


// class Counter {
//     private:
//         int mval;
//     public:
//         Counter();
//         void Display()const;
//         void increment();
//         void decrement();

// };

// Counter::Counter() {
//     cout<<"constructor"<<endl;
//     mval = 0;
// }

// void Counter::Display() const {
//     cout<<"mval"<<mval<<endl;
// }

// void Counter::increment(){
//     mval++;
// }

// void Counter::decrement(){
//     mval--;
// }


// int main(){
//     Counter myCounter;

//     myCounter.Display();

//     for(int i = 0; i<10; i++) 
//         myCounter.increment();
//     myCounter.Display();

//     for(int i = 0; i<10; i++) 
//         myCounter.decrement();
//     myCounter.Display();
    

// }



//ex21 


// class MyClass{
//     private:
//         int x;
//     public:
//         MyClass(){
//             cout<<"default constructor"<<endl;
//         }
//         MyClass(int a){
//             cout<<"int contructor"<<endl;
//         }

// };

// int main(){
//     MyClass m1;

//     MyClass m2 = 5;
//     MyClass m3(5);
//     MyClass m4{5};



// }


//ex22 


/*
nesne hayatı bitince,
main sonu,
nesne free edilirse

(1) dönüş tipi yok
(2) overload yok
(3) parametre de almaz
(4) private olabilir ama dikkat edilmeli
*/


// class MyClass {
//     private:
//         int x;
//     public:
//         MyClass(){
//             cout<<"constructor"<<endl;
//         }
//         ~MyClass(){
//             cout<<"destructor"<<endl;
//         }
// };


// int main(){
//     MyClass m1;
// }


//ex23

// class MyClass {
//     private:
//         int x;
//     public:
//         MyClass(){
//             cout<<"constructor"<<endl;
//         }
//         ~MyClass(){
//             cout<<"destructor"<<endl;
//         }
//         void func(){
//             cout<<"func"<<endl;
//         }
// };

// void func(){
//     cout<<"global func"<<endl;
// }
// int main(){
    
//     MyClass m1,m2;

//     m1.~MyClass(); // elle çağırsak bile yok ediliyor anlamına gelmez
//     m1.func();
//     func();
//     cout<<"main start"<<endl;

// }


//ex23


// class MyClass {
//     private:
//         int x;
//     public:
//         MyClass(){
//             cout<<"constructor"<<endl;
//         }
//         ~MyClass(){
//             cout<<"destructor"<<endl;
//         }
//         void func(){
//             cout<<"func"<<endl;
//         }
// };

// void func(){
//     cout<<"global func"<<endl;
// }
// int main(){
//     MyClass *pd = new MyClass;
//     // destructor cagrılmaz 
//     // ancak delete fonskyionu çağrılırsa destructor çağrılır
//     delete pd;
// }



//ex24


// class MyClass {
//     private:
//         int x;
//     public:
//         MyClass(){
//             cout<<"constructor"<<endl;
//         }
//         ~MyClass(){
//             cout<<"destructor"<<endl;
//         }
//         void func(){
//             cout<<"func"<<endl;
//         }
// };

// void func(){
//     cout<<"global func"<<endl;
// }
// int main(){
//     MyClass *pd = new MyClass[5];

//     delete [] pd ; // destructor çağrılır

//     // dinamik olarak oluşturulan nesnenin destructor ı kendi
//     // çağrılmaz.

// }



//ex25



// class MyClass {
//     private:
//         int x;
//     public:
//         MyClass(){
//             cout<<"constructor"<<endl;
//         }
//         ~MyClass(){
//             cout<<"destructor"<<endl;
//         }
//         void func(){
//             cout<<"func"<<endl;
//         }
// };

// void func(){
//     static MyClass m;
//     //MyClass m;

//     cout<<"global func"<<endl;
// }

// int main(){
//     cout<<"main start"<<endl;
//     func();
//     cout<<"main end"<<endl;

// }



//ex26
// 2 kere destructor çağrılması

// class MyClass {
//     private:
//         int x;
//     public:
//         MyClass(){
//             cout<<"constructor"<<endl;
//         }
//         ~MyClass(){
//             cout<<"destructor"<<endl;
//         }
//         void func(){
//             cout<<"func"<<endl;
//         }
// };

// void func(MyClass x){
   
//     cout<<"global func"<<endl;
// }

// int main(){
//     MyClass x;
//     func(x);


// }



//ex27

/*
obje oluşturunca otomatik oluşan fonksiyonlar:

-- constructor 
-- destructor
-- copy constructor
-- assignment operator
*/

/*
Nerelerde copy constructor çağrılır:
1) Nesne oluştururken
2) call by value durumunda
3) obje yı return edersek 

*/


// class MyClass {
//     private:
//         int x;
//     public:
//         MyClass(){
//             cout<<"default constructor"<<endl;
//         }
//         MyClass(const MyClass &r){
//             cout<<"copy constructor"<<endl;
//         }
//         ~MyClass(){
//             cout<<"destructor"<<endl;
//         }

// };

// int main(){
//     MyClass m1;
//     MyClass m2(m1);

// }



//ex27


// class MyClass {
//     private:
//         int x;
//     public:
//         MyClass(){
//             cout<<"default constructor"<<endl;
//         }
//         MyClass(const MyClass &r){
//             cout<<"copy constructor"<<endl;
//         }
//         ~MyClass(){
//             cout<<"destructor"<<endl;
//         }
       

// };


// void func(MyClass x) {
//     cout<<"func"<<endl;
// }
// void func2(MyClass &x) {
//     cout<<"func2"<<endl;
// }

// int main(){
//     MyClass m1;
//     MyClass m2(m1);
//     func(m1);
//     func2(m2);

//     cout<<"main end"<<endl;
// }


//ex28


// class MyClass {
//     private:
//         int x;
//     public:
//         MyClass(){
//             cout<<"default constructor"<<endl;
//         }
//         MyClass(const MyClass &r){
//             cout<<"copy constructor"<<endl;
//         }
//         ~MyClass(){
//             cout<<"destructor"<<endl;
//         }
       

// };


// MyClass g;

// MyClass func() {
//     return g;
// }

// MyClass& func2() {
//     cout<<"func2"<<endl;
//     return g;
// }
// int main(){

//     cout<<"main basladi"<<endl;
//     func();
//     func2();
//     cout<<"main end"<<endl;
// }


//ex29




// class MyClass {
//     private:
//         int x;
//     public:
//         MyClass(){
//             cout<<"default constructor"<<endl;
//             cout<<"this:"<<this<<endl;
//         }
//         MyClass(const MyClass &r){
//             cout<<"copy constructor"<<endl;
//             cout<<"copy constructor this:"<<this<<endl;

//         }
//         ~MyClass(){
//             cout<<"destructor"<<endl;
//         }
       

// };


// MyClass g;

// void func(MyClass x) {
//     cout<<"adress  of class: "<<&x<<endl;
// }

// void func2(MyClass &x) {
//     cout<<"adress  of class in func2 : "<<&x<<endl;
// }


// int main(){

//     cout<<"main basladi"<<endl;
//     func(g);
//     cout<<"address of g"<<&g<<endl;
//     func2(g);
//     cout<<"main end"<<endl;
// }


//ex30

// class Name{
//     private:
//         char *pd;
//         int len;
//     public:
//         Name(const char* p);
//         Name(const Name &r);
//         void display()const;
//         int getlen()const;
//         char* address();
//         ~Name();

//         // we will see in next lesson
//         //Name &operator=(const Name &r);
// };

// Name::Name(const char* p){
//     len = strlen(p);
//     pd =new char[len+1];
//     strcpy(pd,p);
//     cout<<"pd ="<<pd<<endl;

// }


      
// Name::Name(const Name &r) {
//     len = r.len;
//     pd  = new char[len+1];
//     strcpy(pd,r.pd);
//     cout<<"copy constructor"<<endl;
// }

// Name::~Name(){
//     cout<<"destructor"<<endl;
//     delete [] pd;
// }

// void Name::display()const {
//     cout<<"name: "<<this->pd<<endl;
// }

// int Name::getlen()const {
//     return len;
// }

// void func(Name p) {
//     cout<<"func calling"<<endl;
//     getchar();
// }
// int main(){
//     Name my_name("mehmet");
//     Name my_name_2(my_name);
    
//     my_name.display();
//     my_name_2.display();



//     //my_name.~Name();
//     //func(my_name);
// }


//ex31

// class A{
//     private:
//         int *x;
//     public:
//         A(int *p);
//         int* getAddress()const;
//         int valueOfX()const;
//         ~A();
// };

// A::A(int *p) {
//     x = p;
//     cout<<"default constructor"<<endl;
// }

// A::~A(){
//     cout<<"destructor"<<endl;
// }
// int* A::getAddress()const{
    
//     return x;
// }

// int A::valueOfX()const {
//     return *x;
// }
// int main(){
//     int value = 5;
//     int *ptr = &value;

//     A a(ptr); // default
//     A b(a);  // copy 

//     cout<<a.getAddress()<<endl;
//     cout<<a.valueOfX()<<endl;

//     cout<<b.getAddress()<<endl;
//     cout<<b.valueOfX()<<endl;

//     value = 10;

//     cout<<a.getAddress()<<endl;
//     cout<<a.valueOfX()<<endl;

//     cout<<b.getAddress()<<endl;
//     cout<<b.valueOfX()<<endl;


// }