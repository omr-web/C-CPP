#ifndef ARRAY_CLASS 
#define ARRAY_CLASS

class Array{
    private:
        int msize;
        int *mpd;
    public:
        const int& operator[](int index)const;
        int& operator[](int index);
        const int& at(int index)const;
        int& at(int index);

        Array(int n);
        ~Array();
        Array(const Array &r);
        void display()const;
        Array& operator=(const Array& r);

        int size()const {
            return msize;
        }
};



#endif