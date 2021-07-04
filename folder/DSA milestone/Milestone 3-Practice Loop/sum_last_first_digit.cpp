//program to find sum of first and last digit of any number

#include<iostream>
using namespace std;

int main()
{

    int num,first_digit,last_digit,sum;
    cout<<"Enter the number :";
    cin>>num;

    last_digit=num%10;
    while(num>10)
    {
        num=num/10;

    }
    first_digit=num;
    sum=last_digit+first_digit;

    cout<<"Sum of last and first digit of number:"<<sum;
    return 0;
}
