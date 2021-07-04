// Define a program to find out whether a given number is even or odd.

#include<iostream>
using namespace std;


void num(int x)
{
    if(x%2==0)
        cout<<"even";
    else
        cout<<"odd";
}
int main()

{   int x;
    num(7);
    num(8);
    return 0;
}
