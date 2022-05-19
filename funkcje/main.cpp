#include <iostream>

using namespace std;
void zamien(int &a,int &b)
{
    int c=a;
    a=b;
    b=c;
}

int main()
{
    int x=7;
    int y=10;
    zamien(x, y);

    cout<<x<<endl;
    cout<<y;
    return 0;
}
