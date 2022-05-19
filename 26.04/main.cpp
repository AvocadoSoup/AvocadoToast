#include <iostream>
#include <vector>
using namespace std;

vector <int> numbers = {1,2,3,4,5,6,7,8,9,10};
int szukaj(int l, int p, long szukana)
{
	int sr;
    if(l>p)
    {
        return -1;
    }
    sr = (l + p)/2;

    if(numbers[sr] == szukana)
        return sr;

    if(numbers[sr] > szukana)
        return szukaj(1,sr-1,szukana);
    else
        return szukaj(sr+1,p,szukana);

}

int main()
{
    cout<<szukaj(0, numbers.size()-1, 7) << endl;
    return 0;
}
