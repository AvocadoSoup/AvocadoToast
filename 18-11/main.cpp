#include <iostream>

using namespace std;

void change_x(int *l)
{
    (*l)++;
}

void change_x_by_reference(int l)
{
    l++;
}

int main()
{
    int x_position= 2;
    char table[5];
    for(int i =0; i < 5; i++)
    {
        table[i] = '-';
    }
    table[x_position]= 'X';
    show_table(table);

    char user_input;

    while(user_input != 'e')
    {
        system("cls");
        cout<<"a-left, d-right, e-exit"<<endl;
        cin>>user_input;
        if(user_input == 'a')
        {
            x_position--;

        }
        else if(user_input == 'd'){
            x_position++;
        }
        cout<<x_position<<endl
    }


//    int x = 5;
//    int k = 10;
//    int y = 12;
//    int *f = &k;
//    int *h = &y;
//    int* tablica[2] = {h, f};
//    cout<<*tablica<<endl
//    cout<<*tablica+1<<endl
//    cout << *b << endl;
//    cout << *a << endl;
//int x = 10;
//int*a = &x;
//change_x(a);
//
//cout<< x<<endl;
//change_x(&x);
//
//cout<< x<<endl;
//change_x(&x);
//cout<< x<<endl;
//change_x_by_reference(&x);
//cout<<x<<endl


    return 0;
}
