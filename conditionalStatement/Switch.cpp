#include<iostream>
using namespace std;

int main()
{
    int day;
    
    cout<<"enter the day number(between 1 to 7)"<<endl;
    cin>>day;
   
    switch (day)
    {
    case 1: cout<<"today is monday its"<<endl;
        break;

    case 2: cout<<"today is Tuesday its"<<endl;
        break;
    case 3: cout<<"today is Wednesday its"<<endl;
        break;
     case 4: cout<<"today is Thrusday its"<<endl;
        break;
     case 5: cout<<"today is Friday its"<<endl;
        break;    
    case 6: cout<<"today is Saturday its"<<endl;
        break;
    case 7: cout<<"today is Sunday its"<<endl;
        break;    
    default: cout<<"invalid input"<<endl;
    
    }

    return 0;
}