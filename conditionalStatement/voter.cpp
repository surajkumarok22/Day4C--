#include<iostream>
using namespace std;

int main()
{   
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;

    if(age>=18){
        cout<<"you can vote"<<endl;
    }
    if(age>=35){
        cout<<"you can contest for election"<<endl;
    }
    else{
        cout<<"you can't vote"<<endl; 
    }
    return 0;
}