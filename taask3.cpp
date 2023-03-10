#include<iostream>
using namespace std;

main()
{
    
char word[30];
int a=0;
cout<<"enter a word ";
cin>>word;

for (int i = 0; word[i] != '\0'; i++)
{
    a++;
}
if (a %2 == 0)
{
    cout<<"true";
}
if (a%2 != 0)
{
   cout<<"false";
}




    
    
}