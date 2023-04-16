#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

//malloc
/*
Türden bağımsız Fonksiyon
*/

// int main(){
//     int n;
//     int *pd;
    
//     cout<<"kac degisken olsun"<<endl;
//     cin>>n;
//     pd = (int*)malloc(n*sizeof(int));

//     if(pd == NULL)
//         cout<<"Hafiza ayrilamadi"<<endl,exit(EXIT_FAILURE);

//     for(int i=0;i<n;i++)
//         pd[i] = i;

//     cout<<"============="<<endl;
    
//     for(int i=0;i<n;i++)
//         cout<<pd[i]<<endl;  

//     free(pd);
// }


//ex2

/*

--free fonksiyonuna static bir adresi input olarak
veremeyiz.

--free edilmiş bir bellek bloğunu daha sonra kullanamayız.


*/

//ex3

// int main(){
//     int n;
//     int *pd;

//     cout<<"kac eleman istersin"<<endl;
//     cin>>n;

//     pd = (int*)malloc(sizeof(int)*n);

//     for(int i = 0;i<n;i++){
//         *(pd+i) = i*i;
//     }

//     for(int i = 0;i<n;i++){
//         cout<<*(pd+i)<<endl;
//     }

//     free(pd);

//     cout<<"======="<<endl;
//         for(int i = 0;i<n;i++){
//         cout<<*(pd+i)<<endl;
//     }
// }

//ex4


void* getRandomNumber(int n,int low,int high) {
    int *pd = (int*)malloc(sizeof(int)*n); // otomatik ömürlü değil 
                                            //dinamik ömürlü çünkü !!!

    for(int i=0;i<n;i++) {
        pd[i] = rand()%(high-low+1)+low;
    }

    return pd;
}

void display(int* pd, int n) {
    for(int i=0; i<n;i++) {
        cout<<pd[i]<<endl;
    }
}

#include <ctime>

int main(){

    int n;
    int *pd;
    srand(time(NULL));
    
    cout<<"n degerini gir"<<endl;
    cin>>n;
    
    pd = (int*)getRandomNumber(n,700,800);
    display(pd,n);
    free(pd);


}