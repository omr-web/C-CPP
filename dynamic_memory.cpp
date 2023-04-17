#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>>
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


// void* getRandomNumber(int n,int low,int high) {
//     int *pd = (int*)malloc(sizeof(int)*n); // otomatik ömürlü değil 
//                                             //dinamik ömürlü çünkü !!!

//     for(int i=0;i<n;i++) {
//         pd[i] = rand()%(high-low+1)+low;
//     }

//     return pd;
// }

// void display(int* pd, int n) {
//     for(int i=0; i<n;i++) {
//         cout<<pd[i]<<endl;
//     }
// }

// #include <ctime>

// int main(){

//     int n;
//     int *pd;
//     srand(time(NULL));
    
//     cout<<"n degerini gir"<<endl;
//     cin>>n;
    
//     pd = (int*)getRandomNumber(n,700,800);
//     display(pd,n);
//     free(pd);


// }


//ex5

/*
bu kodda getName fonksiyonunda name bir kere 
tanımlanır o yüzden 5 farklı isim olmaz sadece
bir bellek blolğu kullanılır.
İsimler yazdırılmak istendiğinde ise en son hangi
isim verildiyse o bellekte bulunur

*/
// char* getName() {
//     static char name[100];
    
//     cout<<"ismi girin"<<endl;
//     cin>>name;
    
//     return name;
// }
// int main(){
//     char* p[5];
    

//     for(int i=0;i<5;i++)
//         p[i] = getName();

//     cout<<"names"<<endl;

//     for(int i=0;i<5;i++)
//         puts(p[i]);
// }

//ex5 in doğru hali 



// char* getName() {
//     char name[100];
    
//     char* pd;

//     cout<<"ismi girin"<<endl;
//     cin>>name;
    
//     pd = (char*)malloc(sizeof(char)*(strlen(name)+1));
    
//     strcpy(pd,name);
//     return pd;
// }
// int main(){
//     char* p[5];
    

//     for(int i=0;i<5;i++)
//         p[i] = getName();

//     cout<<"names"<<endl;

//     for(int i=0;i<5;i++)
//         puts(p[i]);

//     for(int i=0;i<5;i++)
//         free(p[i]);
// }


//ex6 calloc yapı olarak malloc ile farkı yok


// int main(){
//     int *pd;
//     int  n;

//     cout<<"kac eleman olacak"<<endl;
//     cin>>n;
//     pd = (int*)calloc(n,sizeof(int));

//     for(int i=0;i<n;i++)
//         pd[i] = i*i;
//     for(int i=0;i<n;i++)
//         cout<<pd[i]<<endl;
    
//     free(pd);
// }


//ex7 2 boyutlu matris


// int main(){

//     int **pd;
//     int row,col;
//     cout<<"kac satir ve sutun"<<endl;
//     cin>>row;
//     cin>>col;

//     pd = (int**)malloc(sizeof(int*)*row);

//     if(!pd) {
//         cout<<"memory ayrilamadi"<<endl;
//         exit(EXIT_FAILURE);
//     }

//     for(int i=0;i<row;i++) {
//         pd[i] = (int*)malloc(sizeof(int)*col);

//         if(!pd[i]) {
//         cout<<"memory ayrilamadi"<<endl;
//         exit(EXIT_FAILURE);
//         }
//     }

//     for(int i=0;i<row;i++) {
//         for(int j=0;j<col;j++) {
//             pd[i][j] = (i+1)*(j+1);
//         }
//     }

//     for(int i=0;i<row;i++) {
//         for(int j=0;j<col;j++) {
//             cout<< pd[i][j]<<" "; 
//         }
//         cout<<"\n";
//     }

//     for(int i=0;i<row;i++)
//         free(pd[i]);
//     free(pd);



// }
    

//realloc


// int main(){

//     int *pd;
//     int n,nplus;

//     cout<<"kac eleman olacak"<<endl;
//     cin>>n;

//     pd = (int*)malloc(sizeof(int)*n);

//     if(!pd) {
//         cout<<"memory ayrilamadi"<<endl;
//         exit(EXIT_FAILURE);
//     }

//     for(int i=0;i<n;i++)
//         pd[i] = i*i;
//     for(int i=0;i<n;i++)
//         cout<<pd[i]<<"\n";

//     cout<<"kac eleman ekstra olacak"<<endl;
//     cin>>nplus;
//     cout<<"======================"<<endl;

//     pd = (int*)realloc(pd,sizeof(int)* (nplus+n));

//     if(!pd) {
//         cout<<"memory ayrilamadi"<<endl;
//         exit(EXIT_FAILURE);
//     }
    
//     for(int i=n;i<n+nplus;i++)
//         pd[i] = i;

//     for(int i=0;i<n+nplus;i++)
//         cout<<pd[i]<<"\n";

//     free(pd);
//     //realloc(pd,0) free ile aynı 

// }


//ex9



int main(){

    int *pd = NULL;
    int n = 0;
    int ch,val;
    for(;;) {
        cout<<"yeni tam sayi gir"<<endl;
        while((ch =toupper(getchar())) != 'E' && ch != 'H') {

        }
        cout<<ch<<endl;
        if(ch == 'H')
            break;
        
        
    }

}