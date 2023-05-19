#include "sint.h"
// #include <iosfwd>

using namespace std;
sint::sint(int val):mval(val) {

}

std::ostream& operator<<(std::ostream &os,const sint&r){
    return os<< "(" << r.mval << ")";
}

std::istream& operator>>(std::istream &is,const sint&r){
    return is >> r.mval;
}


bool sint::operator<(const sint &r)const {
    return mval < r.mval;
}

bool sint::operator<=(const sint &r)const {
    return mval <= r.mval;
}

bool sint::operator>(const sint &r)const {
    return mval> r.mval;
}

bool sint::operator>=(const sint &r)const {
    return mval >= r.mval;

}
bool sint::operator==(const sint &r)const {
    return mval == r.mval;
}
bool sint::operator!=(const sint &r)const {
    return mval != r.mval;

}


sint sint:: operator+(const sint &r)const {
    return this->mval+r.mval;
}
sint sint:: operator-(const sint &r)const {
    return this->mval-r.mval;
}
sint sint:: operator*(const sint &r)const {
    return this->mval-r.mval;
}
sint sint:: operator/(const sint &r)const {
    return this->mval/r.mval;
}
sint sint:: operator%(const sint &r)const {
    return this->mval%r.mval;
}


sint& sint::operator +=(const sint &r){
    (this->mval = this->mval+r.mval);
    return *this;
}

sint& sint::operator -=(const sint &r) {
    this->mval = this->mval - r.mval;
    return *this;
}
sint& sint::operator *=(const sint &r) {
    this->mval = this->mval * r.mval;
    return *this;
}

sint& sint::operator %=(const sint &r) {
    this->mval = this->mval % r.mval;
    return *this;
}

sint& sint::operator /=(const sint &r) {
    this->mval = this->mval / r.mval;
    return *this;
}

sint& sint:: operator ++() {
    this->mval++;
    return *this;
}

sint& sint::operator --() {
    this->mval--;
    return *this;
}

sint sint:: operator ++(int a) {
    sint temp(*this);
    ++*this;
    return temp;
}

sint sint:: operator --(int a) {
    sint temp(*this);
    --*this;
    return temp;
}