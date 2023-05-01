// #include "string_library.h"
#include <iostream>
// #include "MyClass.h"
#include "MyClass_2.h"
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

int main(){

    //sentaks error
    //MyClass m1;

    MyClass *p = MyClass::createObject();
    cout<<"counter: "<<p->getCounter();
}