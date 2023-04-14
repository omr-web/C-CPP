#include <iostream>
#include <cstring>
/*
Farklı türden nesnelerin aynı 
yapıda bulunmasını sağlar.
*/


/*
typedef struct Student {
    char Name[20];
    int points;
    double meanAveragePoint; 
}Student;

Student* updateStudent(Student* ogrenci) {
    strcpy(ogrenci->Name,"omer");
    ogrenci->meanAveragePoint=0.0;
    ogrenci->points=0.0;
    return ogrenci;
}

using namespace std;

int main() {
    Student Mehmet;
    Mehmet.meanAveragePoint = 3.15;
    Mehmet.points = 70;
    strcpy(Mehmet.Name,"Mehmet");

    cout<<"Mehmet bilgileri:"<<endl;
    cout<<Mehmet.Name<<endl;
    cout<<Mehmet.points<<endl;
    cout<<Mehmet.meanAveragePoint<<endl;

    updateStudent(&Mehmet);

    cout<<"Mehmet bilgileri:"<<endl;
    cout<<Mehmet.Name<<endl;
    cout<<Mehmet.points<<endl;
    cout<<Mehmet.meanAveragePoint<<endl;

    cout<<&Mehmet<<endl;
    cout<<&Mehmet.Name<<endl;

    cout<<sizeof(Mehmet.Name)<<endl;
    cout<<sizeof(Mehmet.points)<<endl;
    cout<<sizeof(Mehmet.meanAveragePoint)<<endl;
    cout<<sizeof(Student)<<endl;


}

*/


//*********************************************
// using namespace std;

// typedef struct NameSurname{
//     char Name[20];
//     char Surname[20];
// }NameSurname;


// typedef struct Student {
//     NameSurname isim;
//     int points;
//     double meanAveragePoint; 
// }Student;

// Student* updateStudent(Student* ogrenci) {
//     NameSurname* ptr = &(ogrenci->isim);
//     // ptr->Name= "omer";
//     // ptr->Surname="cebeci";
//     cout<< &(ogrenci->isim.Name)<<endl;
//     ogrenci->meanAveragePoint=0.0;
//     ogrenci->points=0.0;
//     return ogrenci;
// }


// int main() {
//     Student Mehmet;
//     Mehmet.meanAveragePoint = 3.15;
//     Mehmet.points = 70;
//     strcpy(Mehmet.isim.Name,"Mehmet");
//     strcpy(Mehmet.isim.Surname,"Hasan");

//     cout<<"Mehmet bilgileri:"<<endl;
//     cout<<Mehmet.isim.Name<<endl;
//     cout<<Mehmet.isim.Surname<<endl;
//     cout<<Mehmet.points<<endl;
//     cout<<Mehmet.meanAveragePoint<<endl;

//     updateStudent(&Mehmet);

//     cout<<"Mehmet bilgileri:"<<endl;
//     cout<<Mehmet.isim.Name<<endl;
//     cout<<Mehmet.isim.Surname<<endl;
//     cout<<Mehmet.points<<endl;
//     cout<<Mehmet.meanAveragePoint<<endl;

//     cout<<&(Mehmet.isim.Name)<<endl;

// }

//****************************

/*
using namespace std;

typedef struct student {
    char Name[50];
    char Surname[50];
    double point;

}student;

int main(){
    student stud[5];
    
    char tempName[50];
    char tempSurname[50];

    for(int i=0;i<5;i++) {
        cout<<"Student Name:"<<endl;
        cin>>tempName;
        strcpy(stud[i].Name,tempName);

        cout<<"Student Surname:"<<endl;
        cin>>tempSurname;
        strcpy(stud[i].Surname,tempSurname);

        cout<<"point"<<endl;
        cin>>stud[i].point;
    }

    cout<<"============="<<endl;
    for(int i=0;i<5;i++){
        cout<<i<<"inci kisi bilgileri"<<endl;
        cout<<stud[i].Name<<endl;
        cout<<stud[i].Surname<<endl;
        cout<<stud[i].point<<endl;

    }
}

*/


/*
// ex3
using namespace std;
typedef struct student {
    char Name[20];
    char Surname[20];
    double point;
}student;

enum Choices {
    Continue = 0,
    AddStudentChoice = 1,
    DisplayStudent = 2,
    Exit = -1,
};

void inputStudentInfo(student*);
void displayStudentInfo(student*);
void displayProgramInfo(void);

static int studentNumber = 0;

int main(){

    student stud[10];
    student *ptr =stud;
    int choice = 0;
    
    while(choice != -1) {
        displayProgramInfo();
        cout<<"select the proper action"<<endl;
        cin>>choice;
        switch (choice)
        {
        case AddStudentChoice:
            inputStudentInfo(ptr);
            break;
        case DisplayStudent:
            displayStudentInfo(ptr);
            break;
        
        case Exit:
            choice=-1;
            cout<<"exit"<<endl;
            break;

        default:
            break;
        }

    }

}

void inputStudentInfo(student* ptr) {
    char intName[20];
    char intSurname[20];
    cout<<"name:"<<endl;
    cin>>intName;
    strcpy(((ptr+studentNumber))->Name,intName);

    cout<<"surname:"<<endl;
    cin>>intSurname;
    strcpy((*(ptr+studentNumber)).Surname,intSurname);

    cout<<"point:"<<endl;
    cin>>(*(ptr+studentNumber)).point;
    studentNumber++;

}

void displayStudentInfo(student *ptr) {
    for(int i=0;i<studentNumber;i++){
        cout<<"name:"<<(*(ptr+i)).Name;
        cout<<"surname:"<<(*(ptr+i)).Surname;
        cout<<"point:"<<(*(ptr+i)).point;
        cout<<"==================="<<endl;
    }
}

void displayProgramInfo(void) {
    cout<<"add student: 1"<<endl;
    cout<<"display students: 2"<<endl;
    cout<<"exit: -1"<<endl;
    cout<<endl;
}


*/

