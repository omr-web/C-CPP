#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

//Operator overloading
/*
destructor -->release source
copy constructor --> deep copy
assignment operator function --> release source + deep copy
*/

//ex1

// class Name{
//     private:
//         char *pd;
//         int len;
//     public:
//         Name(const char* p);
//         Name(const Name &r);
//         void display()const;
//         int getlen()const;
//         char* address();
//         ~Name();

//         Name &operator=(const Name &r);
//         Name &operator+(const Name &r);
//         Name &operator<<(const Name &r);

// };

// Name& Name::operator+(const Name &r) {
//     cout<<"operator + is calling"<<endl;
//     return *this;
// }


// //HATALI
// // Name& Name::operator<<(const Name &r) {
// //     cout<<"<< operator"<<endl;
// //     return *this;
// // }
// //DOGRU
// Name& Name::operator<<(const Name &r) {
//     std::cout<<"<< operator"<<std::endl;
//     return *this;
// }



// Name::Name(const char* p){
//     len = strlen(p);
//     pd =new char[len+1];
//     strcpy(pd,p);
//     cout<<"pd ="<<pd<<endl;

// }


      
// Name::Name(const Name &r) {
//     len = r.len;
//     pd  = new char[len+1];
//     strcpy(pd,r.pd);
//     cout<<"copy constructor"<<endl;
// }

// Name::~Name(){
//     cout<<"destructor"<<endl;
//     delete [] pd;
// }

// void Name::display()const {
//     cout<<"name: "<<this->pd<<endl;
// }

// int Name::getlen()const {
//     return len;
// }

// void func(Name p) {
//     cout<<"func calling"<<endl;
//     getchar();
// }

// Name &Name::operator=(const Name &r) {
//     cout<<"operator"<<endl;
//     len = r.len;
//     delete [] pd;
//     pd =new char[len+1];
//     strcpy(pd,r.pd);
//     return *this;

// }

// int main(){
//     Name my_name("mehmet");
//    // my_name.display();
//     Name my_name_2 = "omer";  
//    // my_name_2.display();
    
//     //my_name = my_name_2;
    
//     //(my_name = my_name_2).display();
    
//     // 83 ile aynı...
//     //my_name.operator=(my_name_2)

//     //cout.operator<<("deneme").operator<<(endl);
    


//     Name name3("ali");
//     name3 = my_name + my_name_2;
//     name3.display();
//     name3<<my_name;

// }


//ex2

// class Box {
//     private:
//         double length;
//         double width;
//         double height;

//         public:
//             Box(){
//                 cout<<"constructor"<<endl;
//             }
//             ~Box(){
//                 cout<<"destructor"<<endl;
//             }

//             double getVolume(){
//                 return length * width * height;
//             }

//             Box(double l,double w,double h){
//                 length = l;
//                 width = w;
//                 height = h;
//                 cout<<"box volume:"<<l*w*h<<endl;
//             }
//             void setLength(double l) {
//                 if(l<0)
//                     cout<<"length should be greater than zero"<<endl;
//                 else
//                     length = l;
//             }

//             void setWidth(double w) {
//                 if(w<0)
//                     cout<<"width should be greater than zero"<<endl;
//                 else
//                     width = w;
//             }

//             void setHeight(double h) {
//                 if(h<0)
//                     cout<<"height should be greater than zero"<<endl;
//                 else
//                     height = h;
//             }
            
//             void display(){
//                 cout<<"lenght"<<length<<endl;
//                 cout<<"width"<<width<<endl;
//                 cout<<"height"<<height<<endl;
//                 cout<<"============="<<endl;
//             }
//             // operators
//             Box& operator=(const Box&r) {
//                 this->height = r.height;
//                 this->length = r.length;
//                 this->width  = r.width;
//                 return *this;
//             }
            
//             Box operator+(const Box&r) {
//                 Box result_box;
//                 result_box.length = this->length + r.length;
//                 result_box.height = this->height + r.height;
//                 result_box.width = this->width + r.width;
//                 return result_box;
//             }

//             bool operator==(const Box &r) {
//                 double thisVolume = this->getVolume();
//                 double referenceVolume = r.height*r.length*r.width;

//                 if(thisVolume == referenceVolume)
//                     return true;
//                 else 
//                     return false;

//             }
//             bool operator<(const Box &r) {
//                 double thisVolume = this->getVolume();
//                 double referenceVolume = r.height*r.length*r.width;

//                 if(thisVolume < referenceVolume)
//                     return true;
//                 else 
//                     return false;

//             }

//             bool operator>(const Box &r) {
//                 double thisVolume = this->getVolume();
//                 double referenceVolume = r.height*r.length*r.width;

//                 if(thisVolume > referenceVolume)
//                     return true;
//                 else 
//                     return false;

//             }





// };



// int main(){
    
//     //ex2
//     // Box box1;
//     // Box box2(4.2,3.3,2.2);
    
//     // cout<<"box2 volume:"<<box2.getVolume()<<endl;
//     // box2.setHeight(2.0);
//     // box2.setLength(2.0);
//     // box2.setWidth(2.0);
//     // cout<<"box2 volume:"<<box2.getVolume()<<endl;
//     // box1 = box2;
//     // // box1.operator=(box2);
//     // cout<<"box1 volume:"<<box1.getVolume()<<endl;

//     //ex3
//     // Box box1(4,2,3);
//     // Box box2;
    
//     // box2 = box1;

//     // Box box3;

//     // box3 = box1 + box2;
    
//     // box1.display();
//     // box2.display();
//     // box3.display();

//     // ex4

//     Box box1(4,3,2);

//     Box box2(1,1,1);
//     //box2 = box1;

//     // == operatoru
//     // if(box1 == box2)
//     //     cout<<"iki obje esittir"<<endl;
//     // else
//     //     cout<<"iki obje esit degildir"<<endl;

//     if(box1 > box2)
//         cout<<"box1 buyuktur"<<endl;
//     else
//         cout<<"box1 buyuk degildir"<<endl;

//     if(box1 < box2)
//         cout<<"box1 kucuktur"<<endl;
//     else
//         cout<<"box1 kucuk degildir"<<endl;


// }



//ex5

class ComplexNumbers {
    private:
        double real;
        double imag;
    public:
 
        ~ComplexNumbers(){
            cout<<"destructor"<<endl;
        }
        ComplexNumbers(double r = 10, double i= 10){
            real = r;
            imag = i;
            cout<<" r, i constructor"<<endl;
        }
        void display()const {
            cout<<real<<"+i"<<imag<<endl;
        }

        //operator overloading
        ComplexNumbers operator+(ComplexNumbers const &obj) {
            ComplexNumbers com1;
            com1.real = this->real + obj.real;
            com1.imag = this->imag + obj.imag;
            return com1;
        }
        
        ComplexNumbers& operator=(ComplexNumbers const &obj) {
            this->real = obj.real;
            this->imag = obj.imag;
            return *this;
        }
        ComplexNumbers operator*(int r) {
            this->real *= r;
            this->imag *= r;
            return *this;
        }
        bool operator==(ComplexNumbers const &ref) {
            double absValueThis =sqrt((this->real*this->real)*(this->imag*this->imag)); 
            double absValueRef =sqrt((ref.real*ref.real)*(ref.imag*ref.imag)); 
            
            if(absValueThis == absValueRef )
                return true;
            
            return false;
        }



};

// int main(){
//     ComplexNumbers com1(4,4);
//     ComplexNumbers com2(2,2);
//     ComplexNumbers com3;
    
//     // burada çalıştı
//     //com2 = com2 *2;
//     com3 = com1*2 + com2;
//     com3.display();
//     com1.display();
//     com2.display();



// }


int main(){
    ComplexNumbers com1(4,4);
    ComplexNumbers com2(4,4);

    if(com1 == com2)
        cout<<"com1 esittir com2"<<endl;
    else
        cout<<"com1 com2 ye esit degildir"<<endl;
}