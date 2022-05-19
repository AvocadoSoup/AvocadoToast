#include <iostream>

using namespace std;

void fib(int liczba)
{
    int x = 1;
    int y = 1;
    int z = x + y;
    for (int i = 1; i<=liczba; i++)
    {
        cout<<z;
        cout<<",";
        x = y;
        y = z;
        z = x+ y;
    }

}

int main()
{
    fib(7);
    return 0;
}
