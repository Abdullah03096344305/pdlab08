#include<iostream>
using namespace std;

main()
{
string name;
int quantity,bill;

string fruit[4]={"peach","apple","guava","watermelon"} ;
int price[4]={60,70,40,30};

cout<<"enter fruit name: ";
cin>>name;
cout<<"enter fruit quantity: ";
cin>>quantity;

for(int index=0;index<4;index++)
{
    
    
    if (name == fruit[index])
    {
       bill=quantity*price[index]; 
       
    }
    
}

cout<<"your total bill is: "<<bill<<endl;
cout<<"thanks for purchasing: "<<endl;
    
}