#include <iostream>

using namespace std;

/*
constructor:
int *pd = (int*)malloc(4*10) 
        ====
int *pd = new int[10]

destructer:

free(pd)  == delete pd;
*/


// int main(){
//     int *ptr1 = NULL;
//     ptr1 = new int;

//     cout<<"*ptr"<<*ptr1;

// }


void displayMatrix() {
    int row = 4;
    int col = 4;

    int **pd = new int*[row];

    for(int i=0;i<row;i++) {
        pd[i] = new int[col];
    }

    int cnt=0;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            pd[i][j] = cnt++; 
        }
    } 

    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout<<pd[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    for(int i=0;i<row;i++) {
        delete[] pd;
    }
    delete pd;

}

int main(){
    displayMatrix();
}