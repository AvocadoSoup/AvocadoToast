#include <iostream>
#include <vector>
using namespace std;

int Count2Digits(vector<int>& numbers)
{
    int x = 0;

    for (int i=0; i<numbers.size();i++)
    {
        if(numbers[i]>=10 && numbers[i]<100)
        {
            cout<<"Liczby dwu cyfrowe to: "<<numbers[i]<<endl;
            x++;

        }
    }
    return x;
}

void CountTo30()
{
    int suma = 0;
    int a;



    while(suma<30)
    {
        cout<<"Podaj liczbe "<<endl;
        cin>>a;
        suma = suma + a;
    }
    cout<<suma;
}

int main()
{
    vector<int> numbers = {38, 69, 7, 84, 100, 66, 44};

    numbers.push_back(10);
    CountTo30();


    //cout<<Count2Digits(numbers)<<endl;

    /*
    for(int i=0;i<5;i++)
    {
        tab[i]+=3;

        if(tab[i]%3==0)
        {
            cout<<"jest"<<endl;
        }
        else
        {
            cout <<"nie jest"<<endl;
        }

    }
    for(int i=0;i<5;i++)
    {
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    */
    return 0;
}
