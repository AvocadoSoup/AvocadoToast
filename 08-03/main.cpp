#include <iostream>

using namespace std;

class Bus
{
private:
    string type_of_bus;
    list passengers;
public:
    string get_type()
    {

    }
    void add_passenger(Passenger)
    {

    }
    get_list_of_passengers()
    {

    }
    int get_passenger_count()
    {

    }
    float get_average_age()
    {

    }
};

class Vehicle
{
protected:
    string name;
    int max_speed;
    int max_passengers;
public:
    Vehicle
    string get_name()
    {

    }
    int get_max_speed()
    {

    }
    int get_max_passengers()
    {

    }
    void set_name(string)
    {

    }
    void set_max_speed(int)
    {

    }
    void set_max_passengers(int)
    {

    }

};

class Person
{
protected:
    string name;
    int age;
public:
    //Default constructor
    Person()
    {
        this->name = "Andrzej";
        cout<< "konstruktor";
    }
    Person(string name)
    {
        this->name = name;
        cout<< "konstruktor parametrowy";
    }
    string GetName()
    {
        return this -> name;
    }
    int get_age()
    {

    }
    void set_age(int)
    {

    }

};

class Passenger : public Person
{
private:
    string direction;
public:
    string get_direction()
    {

    }
    void set_diection(string)
    {

    }
};


int main()
{
    Person P1;
    Person P2;
    cout<<P1.GetName();
    return 0;
}
