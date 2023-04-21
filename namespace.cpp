#include <iostream>


/*
namespace --> ad alanı

file scope
namespace
function scope

using namespace std; std bir namespace


namespace firstSpace {

}
*/


//ex1

// namespace firstSpace {
//     int a = 5;

// }

// namespace secondSpace {
//     int a = 7;
    
// }

// int main() {
//     std::cout<<secondSpace::a<<std::endl;
//     std::cout<<firstSpace::a<<std::endl;

// }


//ex2


// namespace firstSpace {
//     int a = 5;

// }

// namespace secondSpace {
//     int a = 7;
    
// }

// using namespace firstSpace;

// int main() {
//     std::cout<<a<<std::endl;
   
// }


//ex3


// namespace firstSpace {
//     int a = 5;
//     void func(){
//         std::cout<<"first space"<<std::endl;
//     }

// }

// namespace secondSpace {
//     int a = 7;

//     void func(){
//         std::cout<<"second space"<<std::endl;
//     }
    
// }

// void func(){
//     std::cout<<"file scope"<<std::endl;
// }

// int main() {
//     func(); // file scope
//     firstSpace::func();
//     secondSpace::func();
// }


//ex4


using namespace std;

namespace fspace {
    int a = 5;
    void func(){
        cout<<"first space"<<endl;
    }

    namespace sspace {
        void func(){
            cout<<"second space"<<endl;
        }
    }
}

using namespace fspace; // second space eklenmez !!!
using namespace fspace::sspace; // second space eklenmez !!!

int main(){



}