#include <iostream>
#include <time.h>
using namespace std;

class Item
{
protected:
    int attackPoints;
    int defensePoints;
    int durability;
public:
    Item(int attackPoints, int defencePoints, int durability)
    {
        this->attackPoints = attackPoints;
        this->defensePoints = defensePoints;
        this->durability = durability;
    }
    void ImproveAP(int attackPower)
    {
        this->attackPoints += attackPower;
    }
    void ImproveDP(int defensePower)
    {
        this->defensePoints+= defensePower;
    }
    int GetDurability()
    {
        return this->durability;
    }
    virtual int GetAttackPoints() = 0

    virtual int GetDefensePoints() = 0

    virtual void DecreaseDurability() = 0;
};

class Sword : public Item
{
private:
    int maxCrit;
public:
    Sword(int attackPoints, int defencePoints, int durability, int maxCrit)
          : Item(attackPoints, defensePoints, durability) maxCrit{maxCrit}

    int GetAttackPoints()
    {

    }
    int GetDefensePoints()
    {

    }

    void DecreaseDurability()
    {

    }
};

class Armor : public Item
{
private:
    int quality;
public:
    Armor(int attackPoints, int defencePoints, int durability, int quality)
    : Item(attackPoints, defensePoints, durability) quality{quality}
    int GetAttackPoints()
    {

    }
    int GetDefensePoints()
    {

    }
    void DecreaseDurability()
    {

    }
};


int main()
{
    srand (time(NULL));
    Item* Sword1 = new Sword(12, 1, 1, int iSecret = rand() % 5 + 1);
    return 0;
}
