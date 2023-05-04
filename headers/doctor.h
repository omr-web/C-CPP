#ifndef DOCTOR_CLASS
#define DOCTOR_CLASS


#include <string>
#include <list>

class Doctor {
    std::string mName;
    int mAge;
    static std::list<Doctor*>msAdrList;

    public:
        std::string getName()const;
        int getAge()const;
        void display()const;
        Doctor(const std::string &rname,int age);
        ~Doctor();
        Doctor(const Doctor &r);
};


#endif