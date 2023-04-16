#include <iostream>

/*
Birden fazla fonksiyonun aynı ismi
alabilmesi anlamına gelmektedir. Bu özellik 
C dilinde mevcut değildir.

static linking -> compiler, function + variable
dynamic linking -> run time, finding true function

** C dilinde derleyiciye fonksiyonun sadece adresi gönderilir
fakat CPP dilinde adres+imzası(inputları parametreleri) gönderilir

** Function redecleration overloading değil karıştırma...

int func(int)
int func(int =10) bu durumda redecleration

void func(int x)
void funv(const int x) bu durumda redecleration

**Farklı scope lar da aynı isimde fonksiyon tanımlamak
function overloading olmaz.

Funtion Overloading Resolution

1) Derleyici bütün fonksiyonları sıralar
2) Aday fonksiyonları seçiyor (parametre ve türlere bakar)


*/

using namespace std;

//ex1

// void sum(int,int);
// void sum(double,double);


// int main(){

//     int a = 5;
//     int b = 7;
    
    
//     sum(a,b);
//     sum((double)a,(double)b);


// }

// void sum(int a ,int b) {
//     cout<<"sum ints "<<(a+b)<<endl;
// }

// void sum(double a ,double b) {
//     cout<<"sum doubles "<<(a+b)<<endl;
// }


//integral promotion

// float --> double olur
// short char bool --> int olur. Fakat tam tersi mümkün değil.


// void sum(int,int);
// void sum(double,double);


// int main(){

//     float a = 5;
//     float b = 7;
    
    
//     sum(a,b);
//     sum((double)a,(double)b);


// }

// void sum(int a ,int b) {
//     cout<<"sum ints "<<(a+b)<<endl;
// }

// void sum(double a ,double b) {
//     cout<<"sum doubles "<<(a+b)<<endl;
// }



//ex3



void sum(int,int);
void sum(const double, const double);


int main(){

    float a = 5;
    float b = 7;
    
    
    sum(a,b);
    sum(a,b);


}

void sum(int a ,int b) {
    cout<<"sum ints "<<(a+b)<<endl;
}

void sum( const double a , const double b) {
    cout<<"sum doubles "<<(a+b)<<endl;
}
