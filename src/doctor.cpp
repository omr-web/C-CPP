#include "doctor.h"
#include <iostream>

using namespace std;


list<Doctor*>Doctor::msAdrList;
Doctor::Doctor(const std::string &rname,int age): mName(rname),mAge(age){
    Doctor::msAdrList.push_back(this);
}

string Doctor::getName()const {
    return mName;
}

int Doctor::getAge()const {
    return mAge;
}

void Doctor::display()const {
    cout<<"I am a doctor. My name is "<<this->mAge<<"My age is:"<<mAge<<endl;
    

}

Doctor::~Doctor(){
    Doctor::msAdrList.remove(this);
}

Doctor::Doctor(const Doctor &r): mName(r.mName),mAge(r.mAge) {
    Doctor::msAdrList.push_back(this);
}