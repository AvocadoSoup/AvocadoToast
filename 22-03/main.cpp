#include <iostream>
#include <vector>
using namespace std;

void Display(const vector<int>& numbers)
{
    for(const int& value : numbers)
    {
        cout<<value<<" ";
    }
    cout<<endl;
}

void Bubblesort(vector<int>& numbers)
{
    int n = numbers.size();
    do{
       for(int i=0; i<n-1;i++)
        {
            if(numbers[i] > numbers[i+1])
            {
                swap(numbers[i+1],numbers[i]);
            }
        }
        n=n-1;
    }while(n>1);
}

int main()
{
    vector<int> numbers = {4,2,18,20,7,1};
    Display(numbers);
    Bubblesort(numbers);
    Display(numbers);
    return 0;
}

