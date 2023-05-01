#include "MyClass_2.h"
#include <iostream>

using namespace std;

int MyClass::msCounter = 0;

MyClass::MyClass() {
    MyClass::msCounter++;
}


MyClass::~MyClass() {
    MyClass::msCounter--;
}
MyClass::MyClass(const MyClass &r) {
    MyClass::msCounter++;
}


int MyClass::getCounter(){
    return MyClass::msCounter;
}
 MyClass * MyClass::createObject() {
    return new MyClass;
 }
