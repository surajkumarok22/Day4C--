#include<iostream>
using namespace std;

int main()
{
    int marks;
    
    cout<<"enter the marks"<<endl;
    cin>>marks;
    if(marks>=90){
        cout<<"you are in grade A"<<endl;
    }
    else if(marks>=80){
        cout<<"you are in grade B"<<endl;
    }
    else{
        cout<<"you are in grade C"<<endl;
        }
    return 0;
}