#include <iostream>
#include <list>
#include <set>
#include <string>

using namespace std;


//ex-1 
/*
// list aslında bir class
typedef list<int>::iterator listIter;
typedef set<int>::iterator setIter;

int main(){

    list<int>ilist;

    for(int k=0; k<20; k++) {
        ilist.push_back(k*k);
    }

    
    listIter ptr = ilist.begin();
    while(ptr != ilist.end()) {

       // cout<<*ptr<<" "<<endl;
       // ptr++; // pointer aritmetiği 

       // cout<<*ptr++<<" ";

        //burada bir şeyler yanlış ileride tartışacağız
        cout<<ptr.operator++().operator*()<<" ";

    }

    set<int> iset;
    for(int k=0;k<20;k++) {
        iset.insert(k);
    }
    setIter ptr2 = iset.begin();
    while(ptr2 != iset.end()) {
        cout<<*ptr2++<<" "<<endl;
    }

}

*/


//ex-2  NICE

/*
class MyClass{
    private:
        int mval;
    public:
        MyClass(int val):mval(val){
            cout<<"MyClass Constructor"<<endl;
        }
        void Display()const {
            cout<<"("<<mval<<")"<<endl;
        }
        void set(int val){
            mval = val;
        }
        int get()const{
            return mval;
        }
        ~MyClass(){
            cout<<" MyClass Destructor"<<endl;
        }
};

class MyClassPtr {
    private:
        MyClass *mp;
    public:
        MyClassPtr(MyClass *p): mp(p) {
            cout<<"MyClassPTR Constructor"<<endl;
        }
        MyClass &operator*() {
            cout<<"operator *"<<endl;
            return *mp;
        }
        MyClass* operator->(){
            cout<<"operator ->"<<endl;
            return mp;
        }
        ~MyClassPtr(){
            cout<<"destructor"<<endl;
            delete mp;
        }
};

void func(){

    MyClass *ptr = new MyClass(45); // adres
    MyClass x(18); // objenin kendisi
    ptr->Display();
    *ptr = x;
    ptr->Display();
    ptr->set(999);
    ptr->Display();
    delete ptr;
}

int main(){
    
    MyClassPtr ptr = new MyClass(45);
    MyClass x(18);

    *ptr = x;
    ptr->Display(); // -> Myclass
    ptr.operator->()->Display(); 
    ptr.operator*().Display();
}

*/


//ex-3 Template VERY NICEEE
/*
 class MyClass{
    
    private:
        int mval;
    public:
        MyClass(int val):mval(val){
            cout<<"MyClass Constructor"<<endl;
        }
        void Display()const {
            cout<<"("<<mval<<")"<<endl;
        }
        void set(int val){
            mval = val;
        }
        int get()const{
            return mval;
        }
        ~MyClass(){
            cout<<" MyClass Destructor"<<endl;
        }
};


template<typename T>

class SmartPtr {
    private:
        T *mp;
    public:
    SmartPtr(T *p):mp(p){
        cout<<" T constructor"<<endl;
    }
    ~SmartPtr(){
        cout<<" T Destructor"<<endl;
        delete mp;
    }
    T& operator*(){
        return *mp;
    }
    T* operator->(){
        return mp;
    }

};

int main(){
    // SmartPtr<MyClass> ptr = new  MyClass(99);
    
    //SmartPtr<int> intPtr = new int ;
    //intPtr. bunu yapamam çünkü int i overload etmedik

    SmartPtr<string> p = new string("omer cebeci");
    cout<<"length: "<<p->size()<<endl;
    cout<<"length: "<<p.operator*().size()<<endl;

}

*/

//ex-4
// fonksiyon çağrı operatörünün yüklenmesi

/*
func.operator()()
-- return type free
-- number of parameters is not restricted

*/

class MyClass {
    private:
        int mval;
    public:
        MyClass(int val):mval(val) {
            cout<<"constructor"<<endl;
        }
        ~MyClass(){
            cout<<"destructor"<<endl;
        }
        void operator()(){
            cout<<"operator () is calling"<<endl;
            for(int i=0;i<mval;i++){
                cout<<"i value:"<<i*i<<endl;
            }
        }
        void operator()(int a,int b) {
            cout<<"operator (int int) is calling"<<endl;
            cout<<"a: "<<a<<"b: "<<b<<endl;
        }
};


int main(){
    MyClass m(10);
    // ikisi de aynı 
    // m();
    // m.operator()();
    
    // m(2,3);
    // m.operator()(4,5);

    m(); // sınıflara fonksiyon gibi davranabiliyoruz.

}

