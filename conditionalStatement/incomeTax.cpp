#include<iostream>
using namespace std;

int main()
{
    int income;
    float tax;
    
    cout<<"enter the income (in lakhs)"<<endl;
    cin>>income;
    if(income<=5){
        tax = 0;
        cout<<"your tax is"<<tax<<"lakhs"<<endl;
    }
    else if(income<=10){
        // tax 20%
        tax = income * 0.20;
        cout<<"your tax is"<<tax<<"lakhs"<<endl;
    }
    else{
        // tax 30%
        tax = income * 0.30;
        cout<<"your tax is "<<tax<<"lakhs"<<endl;
        }
    return 0;
}