#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car
{
protected:
    string name;
    int max_speed;
    int year;
public:
    Car(string name, int max_speed, int year)
    {
        this->name = name;
        this->max_speed = max_speed;
        this->year = year;
    }
    void Honk()
    {
        cout<< "HONK" << endl;
    }
    string GetName()
    {
        return this->name;
    }
    int GetMaxSpeed()
    {
        return this->max_speed;
    }
    int GetYear()
    {
        return this->year;
    }
};


class ElectricCar : public Car
{
private:
    int battery_capacity;
public:
    ElectricCar(string name, int max_speed, int year, int battery_capacity) : Car(name,max_speed,year)
    {
        this-> battery_capacity = battery_capacity;
    }
    int GetCapacity()
    {
        return this->battery_capacity;
    }
    string Race(ElectricCar &R2)
    {
        if(this->max_speed > R2.GetMaxSpeed)
        {
            cout << this->name << "is faster and won against"<< R2.GetName()<< endl;
        }
        else{
            cout << R2.GetName <<"is faster and won against" << this->name<<endl;
        }
    }
};

class Truck : public Car
{
private:
    int load_capacity;
    vector<ElectricCar> car_list;
public:
    Truck(string name, int max_speed, int year, int load_capacity, vector<ElectricCar*> &car_list) : Car(name, max_speed, year)
    {
        this-> load_capacity = load_capacity;

    }
    int GetCapacity()
    {
        return this->load_capacity;
    }
    void AddElectricCar(Car* ElectricCar)
    {
        if(this->load_capacity < Truck1.load_capacity)
        {
            car_list.push_back(ElectricCar);
        }
        else
        {
            break;
        }
    }
    void GetElectricCars()
    {
        cout<< car_list << endl;
    }
};

int main()
{
    Car Car1 = ElectricCar("Tesla", 300, 2018, 100);
    Car Car2 = ElectricCar("Nissan", 280, 2019, 80);
    Car Car3 = ElectricCar("Toyota", 270, 2022, 110);

    Truck Truck1 = Truck("Volvo", 210, 2017, 3);

    cout<<Car1(Race(Car2)) << endl;
    Truck1.AddElectricCar(Car1);
    Truck1.AddElectricCar(Car2);
    Truck1.AddElectricCar(Car3);

    Truck1.GetElectricCars();
    return 0;
}
