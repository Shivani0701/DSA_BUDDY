/*Write a program to check whether a number is negative, zero, positive*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n<0)
    {
        cout<<"The number is negative";
    }
    else if(n>0)
    {
        cout<<"The number is positive";
    }
    else
    {
        cout<<"The number is zero";
    }
    return 0;
}
