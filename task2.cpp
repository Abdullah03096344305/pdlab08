#include<iostream>
using namespace std;

main()
{
string name;
int discount=0;
int price=500;

string movie[5]={"gladiator","starwars","terminator","takinglives","tombrider"} ;


cout<<"enter Movie name: ";
cin>>name;


for(int index=0;index<5;index++)
{
   if (name == movie[index])
   {
    
    if (index%2 == 0)
    {
        discount=(price*90)/100;
        cout<<"discount"<<discount<<endl;;
        
    }
    if (index%2 != 0)
    {
        discount=(price*95)/100;
        cout<<"After Discount Your Payable Price Is: "<<discount<<endl;
         
    }
    
    
   }
    
    
   
    
}


    
}