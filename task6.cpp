#include <iostream>
using namespace std;

main()
{
    
    int a;
    int b;
    
    cout << "enter number of times even-odd transformation need to be done: ";
    cin >> a;
    int number[3];
    for (int j = 0; j < 3; j++)
    {
        cout << "enter a number: ";
        cin >> number[j];
    }

    for (int i = 0; i < a; i++)
    {
        if (number[i] % 2 != 0)
        {
            b = a * 2;
            number[i] = number[i] + b;
            cout << number[i] << endl;
        }

        else if (number[i] % 2 == 0)
        {
            b = (a * (-2));
            number[i] = number[i] + b;
            cout << number[i] << endl;
        }
    }
}