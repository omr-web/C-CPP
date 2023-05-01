#ifndef MY_CLASS_2
#define MY_CLASS_2

class MyClass{
    private:
        static int msCounter;
        MyClass();
    public:
    static MyClass *createObject();
        ~MyClass();
        MyClass(const MyClass &r);

        static int getCounter();

};





#endif