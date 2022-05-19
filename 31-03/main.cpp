#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <time.h>
using namespace std;


class Read
{
    private:
        string fileName;
        vector<string> words;
        void FillTheList()
        {
            ifstream file(fileName);
            string value;
            while(!file.eof())
            {
                file>>value;
                words.push_back(value);
            }
            file.close();
        }

    public:
        Read(string fileName) : fileName{fileName}
        {
            FillTheList();
        }
        void Display()
        {
            for (string& value : words)
            {
                cout << value << " ";

            }
            cout << endl;
        }
        string GetRandomWord()
        {
            string random_word;
            random_word = words[rand() % words.size()];
            return random_word;
        }

};

class Player
    {
    private:
        string name;
        int points;
        int lives;
        string choice;
    public:
        Player(string name) : name{name}, points{0}, lives{3}, choice{""}
        {

        }
        void SetChoice()
        {
            cout<<"seen / new" << endl;
            cin>> this->choice;
        }
        string GetChoice()
        {
            return this->choice;
        }
        string GetName()
        {
            return this->name;
        }
        int GetLives()
        {
            return this->lives;
        }
        int GetPoints()
        {
            return this->points;
        }
        void AddPoint()
        {
            this->points++;
        }
        void RemoveLife()
        {
            this->lives--;
        }
    };
class Game
{
private:
    Read* file;
    Player* player;
    vector<string> used_words;
public:
    Game(string name, string fileName)
    {
        file = new Read(fileName);
        player = new Player(name);
    }
    ~Game()
    {
        delete file;
        delete player;
    }
    void Play()
    {
        while(player->GetLives() != 0)
        {
            system("cls");
            cout<< "Your name is " <<player->GetName()<<endl;
            cout<< "You have "<<player->GetLives()<< " lives"<<endl;
            cout<< "You have "<<player->GetPoints()<<" points"<<endl;
            file->Display();

            string random_word = file->GetRandomWord();
            if(isUsed)(random_word)
            {

            }
            // show lives and score
            // generate random word
            // ask user seen or new
            //if seen and used -> addPoint / removeLife
            //if new and used -> removeLife / AddPoint
            // add random word to used words
        }
        // display final score
    }
    bool IsUsed()
    {
        bool flag = false;
        for (string& element : this->used_words)
        {
            if(element == value)
            {
                flag = true
            }
        }
        return flag;
    }
    void AddToUsed(string value)
    {
        this->used_words.push_back(value);
    }
};

int main()
{
    srand(time(NULL));
    Read R1("file.txt");
    cout<<R1.GetRandomWord()<<endl;
    return 0;

}
