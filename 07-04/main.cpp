#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Person{
protected:
    string name;
    int age;
public:
    int GetAge()
    {
        return age;
    }
    string GetName()
    {
        return this->name;
    }
    Person()
    {
        name = "";
        age = 0;
    }
    Person (string name, int age)
    {
        this->name = name;
        this-> age = age;
    }
};

class Student : public Person{
private:
    int year;
public:
    int GetYear()
    {
        return this-> year;
    }
    Student(string name, int age, int year) : Person(name, age)
    {
        this-> year = year;
    }
    void Learn()
    {
        cout<<"The student is learning"<<endl;
    }
};

class Teacher : public Person{
private:
    string speciality;
public:
    Teacher(string name, int age, string speciality) : Person(name, age), speciality{speciality}
    {
        this-> speciality = speciality;
    }
    string GetSpeciality()
    {
        return this->speciality;
    }
    void Teach(Student &P)
    {
        cout<< "Teacher" << name << "teaches" << P.GetName() << endl;
    }
};

class Klasa{
private:
    vector<Student> students;
    Teacher* teacher;
public:
    Klasa()
    {
        teacher = new Teacher("yu88u",26, "Math" );
    }
    ~Klasa()
    {
        delete teacher;
    }
    void GetStudents()
    {
        for(int i = 0; i < students.size(); i++)
        {
            cout<<students[i].GetName()<<endl;
        }
    }
    void AddStudent(Student &S)
    {
        students.push_back(S);
    }
    string GetTeacher()
    {
        return teacher->GetName();
    }
};







int main()
{
    Student S1("Anrzej", 10, 2);
    Student S2("Kamil", 12, 3);
    Teacher T1("John", 43, "Math");
    Klasa K1;
    K1.AddStudent(S1);
    K1.GetStudents();
    return 0;
}
