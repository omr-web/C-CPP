#include <iostream>
#include <cstdio>


using namespace std;

/* //exmaple-1
int main(){
    int a=2;
    char b='b';
    //pointer değişkenler 
    int *aptr;
    aptr= &a;

    char* bptr;
    
    //bptr=&a; // hata 
    bptr=&b;

    cout<<"a: "<<a<<endl;
    cout<<"sizeof a: "<<sizeof(a)<<endl;
    cout<<"address of a: "<<&a<<endl;
    cout<<"address of a with pointer: "<<aptr<<endl;
    cout<<"address of aptr : "<<&aptr<<endl;

    cout<<"=============="<<endl;

    cout<<"b: "<<b<<endl;
    cout<<"sizeof b: "<<sizeof(b)<<endl;
    // aşağıdaki işlemde &b overload edildiği için tam adresi vermez bununn yerine c den faydalanacağız
    //cout<<"address of b: "<<&b<<endl;
    printf("adddress of c : %p \n",&b);

    cout<<"=============="<<endl;
    cout<<"pointer türünden degiskenlerin boyutlari"<<endl;
    cout<<" sizeof int* "<<sizeof(aptr)<<endl;
    cout<<"sizeof  char* "<<sizeof(bptr)<<endl;
}

*/

//exmaple-2

//main aslında programın başlangıç adresi

/*
int main(){
    
    int a = 2;
    int *aptr;
    aptr=&a;    
    
    cout<<"aptr value: "<<*aptr;

    return 0;
}

*/

// Example-3
//pointer artimetiği
/*
int main(){
    int a = 5; 
    double b = 6.0;

    int *aptr=&a;
    double *bptr=&b;

    cout<<"aptr: "<<aptr<<endl;
    cout<<"aptr++: "<<++aptr<<endl;

    cout<<"bptr: "<<bptr<<endl;
    cout<<"bptr++: "<<++bptr<<endl;
}

*/

//Example-4
/*
#define SIZE 3

int main(){
    int a[SIZE] = {1,2,3};

    int *aptr  =  &a[0];
    int *aptr2 =  &a[0];
    int *aptr3 =  &a[0];

    for(int i=0;i<SIZE;i++) {
        cout<<"a["<<i<<"]="<<a[i]<<endl;
        cout<<"a["<<i<<"]="<<aptr[i]<<endl;
        cout<<"a["<<i<<"]="<<*(aptr+i)<<endl;
        cout<<"a["<<i<<"]="<<*(aptr3++)<<endl;
        cout<<"==============="<<endl;
    }
   
}

*/

//Example-5

/*
const int SIZE = 3;
int main(){

    int a[SIZE] ={1000,2000,3000};
    int i=0;
    while(i++<SIZE){
        cout<<"a["<<i<<"]="<<*(a+i-1)<<endl;
    }

}

*/

//Example-6
/*
const int SIZE = 3;

int main(){
    
    int a[SIZE] ={1000,2000,3000};
    int *lastptr = &a[SIZE-1];
    int *aptr=a;
    int i=0;

    while(aptr++<lastptr) {

        cout<<"a["<<i<<"]="<<*(a+i)<<endl;
        i++;

    }
}

*/


//Example-7
/*
#define SIZE 3

int main(){
    
    int a[SIZE] ={1000,2000,3000};
    int *lastptr = &a[SIZE-1];

    //lastptr böyle de tanımlanabilir
    //int *lastptr = a+(SIZE-1);
   
    int i=0;
    for(int *aptr=a; aptr <= lastptr; aptr++) {
        cout<<"a["<<i++<<"]="<<*aptr<<endl;
    }

    //NICE
    lastptr = a +(SIZE-1); // a dizisinin son elemanının adresini atadım
    cout<<lastptr[-2]<<endl; // a dizisinin 1. elemanı (c de bu sentaks hatası)
    
}
*/


// Example-8
// Pointer to Pointer
/*
int main(){
    int a = 3;
    int *ptr;
    ptr=&a;
    
    int **ptr2= &ptr;
    int ***ptr3 = &ptr2;

    cout<<"a: "<<*ptr<<endl;
    cout<<"addres of ptr: "<<&ptr<<endl;
    cout<<"addres of ptr: "<<ptr2<<endl;

    cout<<"addres of ptr2: "<<&ptr2<<endl;
    cout<<"addres of ptr2: "<<ptr3<<endl;

    cout<<"======="<<endl;
    cout<<"a:"<<***ptr3<<endl;
    cout<<"a:"<<**ptr2<<endl;
    cout<<"a:"<<*ptr<<endl;
}

*/

// Example-9
// Operator Priority

// #define SIZE 3
// #define BARRAY b[SIZE]

// int main(){
//     int a[SIZE] = {1,5,8};
//     int BARRAY = {1,2,3};
    
//     int *ptr = a;
    
    

//     //case-1
//     //cout<<*ptr++<<endl;
//     //cout<<*(ptr)<<endl;

//     //case-2 (l value hatası)
//     //cout<<*(++&(*ptr))<<endl;
    
//     //case-3
//     //cout<<*(&*++ptr)<<endl;
//     //cout<<*ptr<<endl;

//     //case-4 l valıe hatası
//     // cout<<*(&*++(ptr-1))<<endl;
//     // cout<<*ptr<<endl;

//     //case5
//     // int *bptr = &*(&*++ptr);
//     // cout<<*(bptr-1)<<endl;



//     // for(int i = 0; i<SIZE; i++) {
//     //     cout<<"a["<<i<<"]="<<a[i]<<endl;
//     // }
// }


// Example-10
// Pointers and Functions

// void changeVariableValue(int*,int);


// int main(){
//     int a = 3;
//     cout<<"a:"<<a<<endl;
//     changeVariableValue(&a,7);
//     cout<<"a:"<<a<<endl;

// }

// void changeVariableValue(int* ptr,int value) {
//     *ptr=value;
// }


// Example-11

#define SIZE 3

void initializeArray(int*,int);
void displayArray(int*,int);
int main(){
    int a[SIZE] = {1,2,3};
    initializeArray(a,SIZE);
    displayArray(a,SIZE);

}

void initializeArray(int *ptr,int size) {
    
    for(int i=0;i<size;i++) 
        *(ptr+i)=i;
}

void  displayArray(int *ptr,int size) {
    int *lastptr= ptr+size;
    int i=0;
    
    while(ptr<lastptr) {
        cout<<"a["<<i++<<"] = "<<*(ptr++)<<endl;
        
    }
}