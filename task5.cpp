#include <iostream>
using namespace std;

main()
{
    int i = 0;
    string check;

    for (int i = 0; i < 4; i++)
    {
        cout << "enter a characters: ";
        cin >> check[i];
    }

    if (check[0] == check[1] && check[1] == check[2] && check[2] == check[3] )
    {
        cout << "true";
    }
    else
    {
        cout<<"false";
    }
    
}