//program to print a maximum of two numbers

#include<iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"Enter two numbers:";
        cin>>num1>>num2;
    if (num1<num2)
    {
        cout<<"The maximum number is:"<<num2;
    }
    else
    {
        cout<<"The maximum number is:"<<num1;
    }
    return 0;
}
