#include <iostream>
/*
pointer ların maskelenmesi anlamına 
gelir

*/

using namespace std;


// //ex1

// int main(){
//     int x = 5;
//     cout<<x<<endl; 

//     int &r = x;
//     r++;
//     cout<<x<<endl;

// }



/*
//ex2
void func(int &a){ // call by reference
    a=99;
}
int main(){
    int x = 234;
    
    cout<<x<<endl;
    
    func(x);
    
    cout<<x<<endl;


}

*/



/*
//ex3
void swap(int &a,int &b){ // call by reference
     int temp = a ;
     a = b;
     b = temp;
}
int main(){
    int x = 234;
    int y = 100;
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    
    swap(x,y);
    
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
    



}

*/

/*
//ex4

int main(){
    int x  = 0;
    
    int &r1 = x;
    int &r2 = x;
    int &r3 = x;

    int *p1 =&x;
    int *p2 =&x;
    int *p3 =&x;

    r1++;
    r2++;
    r3++;

    // operatör önceliği önemli
    (*p1)--; 
    (*p2)--;
    (*p3)--;

    cout<<"x:"<<x<<endl;
}

*/

//ex5

/*
int main(){
    int x = 50;
    int &r1 = x;
    int &r2 =r1;
    cout<<"r2:"<<r2<<endl;
}

*/

//ex6

/*
 int main(){
    int x = 50;
    int *ptr =&x;
    int *&r = ptr;
    *r = 99;
    
    ptr++;
    r++;

    cout<<"x:"<<x<<endl;
    cout<<"r: "<<r<<endl;
    cout<<"ptr: "<<ptr<<endl;

 }

 */


//ex7


// int main(){

//     // const int x = 50;
//     // const int *ptr = &x;
//     // // hata
//     // //*ptr = 40;
//     // cout<<"ptr:"<<ptr<<endl;
//     // ptr++;
//     // cout<<"ptr:"<<ptr<<endl;

//     const int x = 50;
//     const int &r = x; 
// }

// ex8


// int main(){
//     int x = 10;

//     int &const r = x;

// }


//ex9

// typedef struct Data{
//     int a,b,c;
// }Data;

// //hata aldığımız örnek
// int main(){
    
//     Data mydata;
//     Data&r = mydata;
//     r.a =3;
//     cout<<r.a<<endl;

//     Data* &r_ptr = &mydata;
//     cout<<r_ptr->a;
// }


//ex10 GÜZEL ÖRNEK

// int g = 90;

// int& func() {
//     return g;
// }
// int* foo(){
//     return &g;
// }

// int main(){
//     cout<<func()<<endl;
    
//     func() = -1; // func() aslında burada bir değişken oluyor.!!!!
    
//     cout<<func()<<endl;

//     cout<<(*foo()=2)<<endl;


// }



//EX11
/*
pointer ve reference kavramları farkı
-- reference sadece bir adres tutabilir.
-- reference yerine geçen reference olmaz
int x=10;
int &r =x;
int &r2 =r; // r2 r yi refer etmiyor o da x i refer ediyor

-- void* var ama void& yok 
-- pointer ile array tutabiliriz ancak reference tutamaz
-- Null reference yok fakat null pointer var

*/

//pointer artimetiği vardır ama reference aritmetiği yok !!
// int main(){
//     int a[10]={0};
//     int (&r)[10] = a;
//     for(int i=0;i<10;i++)
//         cout<<r[i]<<endl;

// }


//ex12


int main(){
    
    //sentaks hatası
    //int &r1 = 10 ;

    //int *ptr = 10; // C no error but cpp error 

    const int &r = 10; // hata değil geçici değişmeyen reference o yüzden r value a kızmadı 

    int x = 20;
    const double &r2 = x;

}