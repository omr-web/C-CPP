#include <iostream>
#include "array_class.h"


using namespace std;


Array::Array(int n):msize(n),mpd(new int[msize]){
    
    for(int k=0;k<msize;k++) {
        mpd[k] = 0;
    }
}

Array::~Array(){
    delete [] mpd;
}

Array::Array(const Array &other):msize(other.msize),mpd(new int[msize]) {
    
    for(int k=0;k<msize;k++) {
        this->mpd[k] = other.mpd[k];
    }
}

Array& Array::operator=(const Array &other){
    
    if(this == &other)
        return *this;

    delete [] mpd;
    msize = other.msize;
    mpd = new int[msize];

    for(int k=0;k<msize;k++) {
        mpd[k] = other.mpd[k];
    }
    return *this;
}

void Array::display()const {
    cout<<"(";
    
    for(int k=0;k<msize;k++){
        
        if(k != msize-1)
            cout<<mpd[k]<<" ";
        else    
            cout<<mpd[k]<<")"<<endl;
    }
}

int & Array::at(int index) {
    return mpd[index];
} 

const int & Array::at(int index)const {
    return mpd[index];
} 


const int &Array::operator[](int index)const { // for writing
    return mpd[index];
}

int &Array::operator[](int index) { //for reading
    return mpd[index];
}