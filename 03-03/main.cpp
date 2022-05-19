#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student{
private:
    string name;
    int age;
    int grade;
public:
    Student()
    {
        this->name = "Default";
        this->age = 0;
        this->grade = 0;
    }
    Student(string name, int age, int grade)
    {
        this->name = name;
        this->age = age;
        this->grade = grade;
    }
    string GetName(){
        return this->name;
    };
    int GetAge(){
    };
    int GetGrade(){
    };
    void SetAge(int age){
        this->age = age;
    };
    void SetGrade(int grade){
        this->grade = grade;
    };
};
//----------------------------------------------------------------------------------------------------------------------------------------
class Course{
private:
    string name;
    int max_students;
    vector<Student> students;
public:
    Course(string name, int max_students)
    {
        this->name = name;
        this->max_students = max_students;
    };
    void AddStudent(Student S1){
        this->students.push_back(S1);
    };
    void RemoveStudent(Student){

    };
    void DisplayStudents(){
        for(Student student : students)
        {
            cout << student.GetName() << endl;
        }
    };
    float GetAverageGrade(){

    };
};

int main()
{
    Student S1("John", 17, 4);
    Student S2("Harry", 18, 4);
    Student S3("May", 16, 4);
    Course C1("programming", 4);
    C1.AddStudent(S1);
    C1.AddStudent(S2);
    C1.AddStudent(S3);
    C1.DisplayStudents();
    return 0;
}
