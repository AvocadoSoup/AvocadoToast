#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Component
{
protected:
    string name;
    float price;
    float maxTemp;
    float score = 0;
public:
    Component(string name, float price, float maxTemp):
        name{name},
        price{price},
        maxTemp{maxTemp},
        score{0.0}
        {
        }
    string GetName()
    {
        return name;
    }
    float GetPrice()
    {
        return price;
    }
    float GetMaxTemp()
    {
        return maxTemp;
    }
    float GetScore()
    {
        return score;
    }
    virtual void CalculateScore() = 0;
};

class CPU : public Component
{
private:
    float clockSpeed;
    int numberOfCores;
public:
    CPU(string name, float price, float maxTemp, float clockSpeed, float numberOfCores):
        Component(name, price, maxTemp), clockSpeed{clockSpeed}, numberOfCores{numberOfCores}
        {
            CalculateScore();
        }
    float GetClockSpeed()
    {
        return clockSpeed;
    }
    int GetNumberOfCores()
    {
        return numberOfCores;
    }
    void CalculateScore()
    {
        float scori = this->clockSpeed*this->numberOfCores;
        cout<<scori<<endl;
    }
};




class SSD : public Component
{
private:
    float capacity;
    float freeSpace;
    float speed;
public:
    SSD(string name, float price, float maxTemp, float capacity, float speed):
        Component(name, price, maxTemp), capacity{capacity}, speed{speed}, freeSpace{freeSpace}
        {
            CalculateScore();
        }
    float GetCapacity()
    {
        return capacity;
    }
    float GetFreeSpace()
    {
        return freeSpace;
    }
    float GetSpeed()
    {
        return speed;
    }
    void CalculateScore()
    {
        this->score = this->capacity*this->speed;
        cout<<score<<endl;
    }
    void Format()
    {
        this->freeSpace=capacity;
    }
    void Write(float space)
    {
        this->freeSpace -= space;
    }
};



class Computer{
private:
    vector<Component*> components;
    float fullPrice;
    float overallScore;
public:
    Computer(vector<Component*> components, float fullPrice, float overallScore)
    float GetFullPrice()
    {
        return fullPrice;
    }
    float GetOverallScore()
    {
        return overallScore;
    }
    void GetComponents()
    {

    }
    void CalculateScore()
    {
        float overallScore =
    }
    void CalculatePrice()
    {
        float fullPrice = price
    }
    void CheckIfTempTooHigh()
    {

    }
    void AddComponent(Component*)
    {

    }
    void Run()
    {

    }
};

int main()
{
    vector<Component*> components;
    Component* Cpu1 = new CPU("AMD", 1200.0, 96.4, 4.4, 8);
    Component* SSD1 = new SSD("HyperX", 500.0, 79.6, 1024.0, 700.0);
    components.push_back(Cpu1);
    components.push_back(SSD1);

    cout<<Cpu1->GetScore()<<endl;
    cout<<SSD1->GetScore()<<endl;

    for(int i = 0; i<components.size(); i++)
    {
        cout<<components[i]->GetName()<<endl;
    }


    return 0;
}
