#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "enter array size: ";
    cin >> size;
    int n=7;

    int number[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter a number: ";
        cin >> number[i];
    }
   for (int i = 0; i < size; i++)
    {
        if (number[i] == n)
        {
           cout<<"BOOM!"<<endl;
          
        }
        if (number[i] != n)
        {
            cout<<"7 Number is Not Present"<<endl;
            
            
        }
        
        
    }
    
}