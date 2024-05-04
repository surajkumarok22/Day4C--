#include<iostream>
using namespace std;

int main()
{   
    int n1,n2,n3;
    int largest = 0;


    cout<<"enter the first number"<<endl;
    cin>>n1;
    cout<<"enter the second number"<<endl;
    cin>>n2;
    cout<<"enter the third number"<<endl;
    cin>>n3;

    if(n1>n2 && n1>n3){
         cout<<"largest number is: "<<n1<<endl;
         largest = n1;
    }
    else if(n2>n3){
         cout<<"largest number is: "<<n2<<endl;
        largest = n2;
    }
    else{
         cout<<"largest number is: "<<n3<<endl;
           largest = n3;
    }
    if(largest%2 == 0){
        cout<<largest<<" is even number"<<endl;
    }
    else{
       cout<<largest<<" is odd number"<<endl;
    }
    
    return 0;
}