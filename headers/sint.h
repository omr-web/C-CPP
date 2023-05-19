#ifndef SINT_HPP
#define SINT_HPP

#include <iostream>

class sint {
    private:
        int mval;
    public:
        bool operator<(const sint &r)const;
        bool operator<=(const sint &r)const;
        bool operator>(const sint &r)const;
        bool operator>=(const sint &r)const;
        bool operator==(const sint &r)const;
        bool operator!=(const sint &r)const;

        sint operator+(const sint &r)const;
        sint operator-(const sint &r)const;
        sint operator*(const sint &r)const;
        sint operator/(const sint &r)const;
        sint operator%(const sint &r)const;
        
        sint(int val = 0);
        void display()const;

        friend std::ostream& operator<<(std::ostream &os,const sint&r);
        friend std::istream& operator>>(std::istream &is,const sint&r);

        sint& operator +=(const sint &r);
        sint& operator -=(const sint &r);
        sint& operator *=(const sint &r);
        sint& operator %=(const sint &r);
        sint& operator /=(const sint &r);
        
        sint& operator ++();
        sint& operator --();
        sint  operator ++(int);
        sint  operator --(int);

        operator int()const {
            return mval;        
        }
};


#endif