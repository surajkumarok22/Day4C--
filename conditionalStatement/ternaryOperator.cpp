#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter the age"<<endl;
    cin>>age;
    // variable = condtion? statement1:statement2;
    bool isAdult = age>=18? true: false;
    cout<<isAdult<<endl; 

    // largest of two numbers using ternary operator
    int n1,n2;
    cout <<"enter first and second number"<<endl;
    cin>>n1>>n2;
    int largest = n1>n2? n1: n2;
    cout<< "largst number is: "<<largest<<endl;
    return 0;
}