// #include "string_library.h"
#include <iostream>
// #include "MyClass.h"
//#include "MyClass_2.h"
using namespace std;


// int main(){
   
    
//     // 13 Nisan 2023
//     // char p[20] = "omer cebeci";
//     // int len = my_strlen(p);
//     // std::cout<<"len:"<<len;

//     // char p1[10]="omer";
//     // char p2[10]="cebeci";
//     // char p3[5];


//     // std::cout<<my_strcmp(p1,p2)<<std::endl;
//     // std::cout<<my_strcat(p1,p2);
    
//     // std::cout<<my_strchr(p1,'\0');
//     // my_strcpy(p3,p1);
//     // std::cout<<p3;

    
    


// }


// 30 nisan 2023

/*

no static member => 

static member -> class a ait degisken olur, sınıfın degiskenlerine yani 
objeye ait olmuyor.

static member ve static function olmak üzere ikiye ayrılıyor.


*/

// int MyClass::x = 0;

// int main(){
//     MyClass m1;

//     // cout<<"x:"<<m1.get_x();
//      cout<<m1.x<<endl;
    
// }


//STATIC FUNCTIONS: (1)

// int main(){
   
//    MyClass m1;
//    m1.sfunc();
//    m1.func(); 
//    //sınıfa ait fonksiyon olduğu için herhangi bir nesneye gerek olmadan 
//    // çağırabiliriz.
//    MyClass::sfunc();

// }


// 1 MAYIS 2023

// int main(){
    
//     cout<<"class member number: "<<MyClass::getCounter()<<endl;
//     MyClass m1;
//     cout<<"class member number: "<<MyClass::getCounter()<<endl;
//     MyClass m2;
//     cout<<"class member number: "<<MyClass::getCounter()<<endl;

//     MyClass x,y,z;
//     cout<<"class member number: "<<MyClass::getCounter()<<endl;

//     MyClass *ptr = new MyClass;
//     cout<<"class member number: "<<MyClass::getCounter()<<endl;

//     MyClass t = x;
//     // copy constructor initialize etmesek counter artmazdı.
//     cout<<"class member number: "<<MyClass::getCounter()<<endl;

//     cout<<"adress of x"<<&x<<endl;
//     cout<<"adress of t"<<&t<<endl;


// }


// constructor private olursa

// int main(){

//     //sentaks error
//     //MyClass m1;

//     MyClass *p = MyClass::createObject();
//     cout<<"counter: "<<p->getCounter();
// }

/*
// doctor sınıfı
#include "doctor.h"

int main(){
    Doctor d1("mehmet",29);
    Doctor d2("omer",29);
    Doctor d3("cemal",29);

    d1.display();
    d2.display();
    d3.display();
}

*/


//sint kütüphanesi
//#include "sint.h"

//ex1
// int main(){
//     sint x(10);
//     sint y(20);

//     std::cout<<"x:"<<x.operator++();
//     std::cout<<"x:"<<x;

// }


/*
 operator int()const {
    return mval
 }

it cannot create object
it must be const function
unary
*/
//ex2

// class MyClass {
//     private:
//         int x;
//     public:
//         MyClass(int val):x(val) {

//         }

//         operator int()const {
//            return x;
//         }
// };
// int main(){

//     MyClass m1(41.2);
//     MyClass m2(62.);

//     // burda m1 ve m2 önce int e dönüştürülür sonra toplanır
//     cout<<"m1+m2 = "<<m1+m2<<endl;

// }


//ex3


// class B;

// class A{
//     public:
//         A(const B &r) {

//         }
//         A() {

//         }
// };

// class B {
//     public:
//         operator A()const {
//             return  A();
//         }
// };


// int main(){
//     A a;
//     B b;
//     a = b;

// }


#include "array_class.h"

//ex1
// int main(){

//     Array a(10);
    
//     a.display();

// }

// int main(){
//     Array a(10);
//     const Array b(10);
//     a.display();
//     b.display();

//     for(int k=0;k<a.size();k++) {
//         a.at(k) = k*k;
//     }
//     a.display();

//    // b.at(4) = 9; // b const yani read only sentax hatası 
//     // array in const olması yazdığımız const fonksiyonlar 
//     // sayesinde oldu
//     a =b;
//     a.display();

// }


// linked list

#include "linked_list.h"

int main(){

    // insertElement(0,10);
    // insertElement(1,20);
    // insertElement(2,560);
    // insertElement(3,55);
    
    // printf("len of list: %d \n",length());
    
    // printList();
    // deleteElement();
    // printList();

    // deleteElement();
    // printList();
    // printf("len of list: %d \n",length());

    //ex2 for linked list
    for(int i=0;i<100;i++) {
        insertElement(i,i*i-5);
    }
    // printList();
    Node* found_data = find(10);
    
    printf("key : 10, address: %p",found_data);
    
}