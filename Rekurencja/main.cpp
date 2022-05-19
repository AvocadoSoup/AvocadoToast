#include <iostream>

using namespace std;

int potegowanie(int p, int w)
{
    int sus = p * p;
    for(w;w > 0;w--){
       sus = sus * p;
    }

}

int main()
{
    cout << potegowanie(2, 3)<< endl;
    return 0;
}
