//Write a program to print the sum of two numbers entered by user by defining your own function.

#include<iostream>
using namespace std;


int sum(int num1,int num2)
{
    int res;
res=num1+num2;
return res;
}
int main()
{
int num1,num2;
cout<<"Enter the value  first number:";
cin>>num1;
cout<<"Enter the value of second number:";
cin>>num2;

sum(num1,num2);
return 0;
}
