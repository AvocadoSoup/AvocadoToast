#include <iostream>
#include <vector>
#include <fstream>
#include <time.h>


using namespace std;

//rock paper scissors

class Player
{
protected:
    char choice;
    int points;

public:
    static int objectCount;
    Player() : choice{'a'}, points{0}
    {
        objectCount++;
    }
    Player(char choice, int points) :
        choice{choice}
        ,points{points}
    {
        objectCount++;
    }
    Player(const Player& P) :
        choice{P.choice}
        ,points{P.points}
    {
        objectCount++;
    }
    char GetChoice()
    {
        return this->choice;
    }
    int GetPoints()
    {
        return this->points;
    }
    void AddPoint()
    {
        this->points++;
    }
    virtual void SetChoice() = 0;
};

int Player::objectCount = 0;
    class User : public Player
    {
    private:
        string name;
    public:
        User(string name, char choice, int points) : Player(choice, points)
        {
            this->name = name;
        }
        string GetName()
        {
            return this -> name;
        }
        void SetChoice()
        {
            cin>> choice;
        }
    };
    class Computer : public Player
    {
    private:
        char options[3] = {'r','p','s'};
    public:
        Computer()
        {

        }
        void SetChoice()
        {
            int random_number = rand() % 3;
            this->choice = options[random_number];
        }
    };
    class Game
    {
    private:
    Computer* myComputer;
    User* myUser;
    public:
        Game()
        {
            myComputer = new Computer();
            myUser = new User("Andrzej", 'g',0);
        }
        void Play()
        {
            myComputer.SetChoice
            cout<<myUser.GetName;
            cout<<myUser.GetPoints;
            do{
                if(myUser->GetChoice() == 'r' && myComputer->GetChoice()  == 'r'){
                    cout<<"Draw"<<endl;
                }
                else if(myUser->GetChoice()  == 'p' && myComputer->GetChoice()  == 'r'){
                    myUser->AddPoint();
                }
                else if(myUser->GetChoice()  == 's' && myComputer->GetChoice()  == 'r'){
                    myComputer->AddPoint();
                }
                else if(myUser->GetChoice()  == 's' && myComputer->GetChoice()  == 's'){
                    cout<<"Draw"<<endl;
                }
                else if(myUser->GetChoice()  == 'p' && myComputer->GetChoice()  == 's'){
                    myComputer->AddPoint();
                }
                else if(myUser->GetChoice()  == 'r' && myComputer->GetChoice()  == 's'){
                    myUser->AddPoint();
                }
                else if(myUser->GetChoice()  == 'p' && myComputer->GetChoice()  == 'p'){
                    cout<<"Draw"<<endl;
                }
                else if(myUser->GetChoice()  == 'r' && myComputer->GetChoice()  == 'p'){
                    myComputer->AddPoint();
                }
                else if(myUser->GetChoice()  == 's' && myComputer->GetChoice()  == 'p'){
                    myUser->AddPoint();
                }


            }while(myUser->GetPoints() != 3 || myComputer->GetPoints() != 3)

            cout<<myUser->GetChoice();
            //check who wins

            cout<<myUser.points<<endl;
            cout<<myComputer.points<<endl;

        }
            ~Game()
            {
                delete myComputer;
                delete myUser;
            }
        };


    };

int main()
{
    Game G1;
    G1.Play();
    srand(time(NULL));
    Computer C1;
    C1.SetChoice();
    User U1("name",'x',9);
    return 0;
}
