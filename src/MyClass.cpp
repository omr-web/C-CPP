#include <iostream>
#include "MyClass.h"

using namespace std;

int MyClass::x = 0;

MyClass::MyClass() {
    cout<<"construtor"<<endl;
}
int MyClass::get_x() {
    return x;
}


void MyClass::func()const {
    MyClass::x = 5;

}

// fonksiyonu declere ederken zaten static diye
// belirttik onun için bir daha static yazmamıza gerek yok
void MyClass::sfunc() {
    cout<<"x degeri:"<<x<<endl;
    // static fonksiyon içerisinde, static olmayan bir fonksiyon
    // çağıramayaız. 
    // m = 5; buda olmaz...
}
void MyClass::foo(){

}


