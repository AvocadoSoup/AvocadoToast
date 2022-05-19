#include <iostream>
#include <vector>
using namespace std;

int search_index(const vector<int> &numbers, int number)
{
    //search for number inside numbers and return the index of that number
    for (int i = 0; i< numbers.size();i++)
    {
        if(numbers[i] == number)
        {
            return i;
        }
    }
    return -1;
}


int my_binary_search(const vector<int> &numbers, int number)
{
    int l = 0;
    int r = numbers.size() - 1;
    int mid;

    while(l <= r)
    {
        mid = (l + r)/2;
        if(number == numbers[mid])
        {
            return mid;
        }
        if(number > numbers[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
}


int main()
{
    vector<int> numbers={12, 23, 34, 45, 56, 67, 100};

    cout << my_binary_search(numbers, 23);

    return 0;
}
