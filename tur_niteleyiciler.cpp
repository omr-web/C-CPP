#include <iostream>
#include  <cstdio>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;


/* 

yer belirleyiciler
auto register extern static bunlar değişkenlerin
nerede tutulacağını belirler. 

tür niteliyiciler

const volatile typdef

*/


//ex1

// void func(){
//     int x = 10;
//     cout<<"x:"<<x++<<endl;
// }
// void foo(){
//     static int y = 10;
//     cout<<"y:"<<y++<<endl;
// }

// int main(){

//     for(int k=0;k<10;k++) {
//         func();
//         foo();
//     }
// }



//ex2

// void func(){
//    static int a[10]={0};
//    for(int i=0;i<10;i++)
//     std::cout<<a[i]<<endl;

//    for(int i=0;i<10;i++)
//         a[i]++;
//     cout<<"\n";

// }


// int main(){

//     for(int k=0;k<10;k++) {
//         func();

//     }
// }


//ex3

// void func(){
//    static int a[10]={0};
//    for(int i=0;i<10;i++)
//     std::cout<<a[i]<<endl;

//    for(int i=0;i<10;i++)
//         a[i]++;
//     cout<<"\n";

// }


// int main(){

//     for(int k=0;k<10;k++) {
//         func();

//     }
    
// }


//ex4

// char* getName(){
//     static char s[100];
//     cout<<"ismi giriniz"<<endl;
//     cin>>s;
//     return s;

// }
// int main(){
//     char *p[5];

//     for(int k=0;k<5;k++) {
//         p[k] = getName();
//     }
    
//     for(int k=0;k<5;k++) {
//         puts(p[k]);
//     }

// }

//ex5


// #define URANDMAX 100

// int myrand(){
//     static int flags[500]={0};
//     int val;
    
//     static int counter = 0;

//     if(counter == URANDMAX)
//         return -1;
    
//     while(flags[ val = (rand() % URANDMAX) ])
//         ;
//     flags[val] = 1;
//     counter++;
//     return val;
// }

// int main(){

//     srand(time(0));

//     for(int k=0;k<URANDMAX;k++) {
//         cout<<myrand()<<endl;
       
//     }
// }


//ex6

// void func() {
//     static int firstCallFlag = 0;
//     if(!firstCallFlag) {
//         cout<<"ilk kez cagirma"<<endl;
//         firstCallFlag = 1;
//     }
//     cout<<"func"<<endl;
// }

// int main(){

//     for(int k=0;k<10;k++) {
//         func();
//     }
// }



//ex7

//const 
/*
    pointer ile kullanımı 
    pointer sız kullanımı


*/



int main(){
    const int x = 56;
    // int *ptr =&x; // cpp de hata ama c de izin var tabi bu undefined behav.
    // ptr=12;

}




