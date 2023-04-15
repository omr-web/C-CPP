#include <iostream>

using namespace std;


//ex1
// void display(int = 20, int=10, int = 40);

// int main(){

//     display(5,4,3);
//     cout<<endl;
//     display(5,4);
//     cout<<endl;
//     display(5);

//     //sentaks hatası 
//     //display(1, ,4);

// }

// void display(int x, int y, int z) {
//     cout<<"x: "<<x<<endl;
//     cout<<"y: "<<y<<endl;
//     cout<<"z: "<<z<<endl;
// }


//ex2 


// derleyici önce atomlarına ayırıp sonra sentaksı kontroll eder
// int main(){
//     int x = 1;
//     int y = 2;
//     int z = 3;

//     x = y++ + z ;
//     cout<<x<<endl;
// }

// ex3


// int func(){
//     cout<<"calling func"<<endl;
//     return 1;

// }

// int x = func();// func main den önce çalışır. Bu C de yok.


// int main(){

//     cout<<"main"<<endl;
// }


//ex4 

#include <ctime>


void processDate(int day, int mounth, int year = -1);


int main(){

    processDate(1,4,1987);
    cout<<"======="<<endl;
    processDate(1,4);


}
void processDate(int day, int mounth, int year) {
    if(year == -1) {
        time_t timer = time(0);
        tm *tptr = localtime(&timer);
        year = tptr->tm_year + 1900;

    }
    cout<<day<<"/"<<mounth<< "/"<<year<< endl;
}
