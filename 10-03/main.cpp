#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
template<typename T>


    class Read
    {
    private:
        string fileName;
        vector<T> fileData;
        void Fill()
        {
            ifstream file(fileName);
            T value;
            while(!file.eof())
            {
                file >> value;
                fileData.push_back(value);
            }
            file.close();
        }
    public:
        Read(string fileName)
        {
            this->fileName = fileName;
            Fill();
        }
        void Display()
        {
            for(const T & value : fileData)
            {
                cout << value << endl;
            }
        }
    };
int main()
{
    Read<string> File("10-03.txt");
    File.Display();
    return 0;
}
