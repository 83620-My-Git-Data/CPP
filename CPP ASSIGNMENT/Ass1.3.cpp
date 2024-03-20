#include <iostream>
using namespace std;

class Student{
    private:
    int roll_no;
    string name;
    float marks;

    public:
    void initStudent(){
        roll_no = 0;
        name = "Student";
        marks = 0;
    }

    void printStudentOnConsole(){
        cout<<"Roll no: "<<roll_no<<endl<<"Name: "<<name<<endl<<"Marks: "<<endl<<marks<<endl;
    }

    void acceptStudentFromConsole(){
        cout<<"Enter Roll No: "<<endl;
        cin>>roll_no;
        cout<<"Enter Name: "<<endl;
        cin>>name;
        cout<<"Enter Marks: "<<endl;
        cin>>marks;
    }
};

int main(){
    Student s1;
    s1.initStudent();
    s1.acceptStudentFromConsole();
    s1.printStudentOnConsole();    
    return 0;
}