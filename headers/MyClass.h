#ifndef MYCLASS
#define MYCLASS

#define PUBLIC
#define PRIVATE
#define STATIC 

class MyClass {
    
    
    private:
        int m;
    public:
        MyClass();
        int get_x();
        static int x;
        void func()const;
        static void sfunc();
        void foo();
};





#endif