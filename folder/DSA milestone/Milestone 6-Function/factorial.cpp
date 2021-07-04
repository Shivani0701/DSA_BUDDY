//write a program to print the factorial of a number by defining a function

#include<iostream>
using namespace std;

int factorial(int x)
{
    int fac = 1;
    if (x == 0 || x == 1)
        return fac;
    for(int i=1;i<=x;i++)
        fac = fac*i;
    return fac;
}

int main()
{
    cout << factorial(5) << "\n";
    return 0;
}
