//program to find first and  last digit of a number


#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;

    int last_digit=num%10;
    cout<<"Last digit of number is:"<<last_digit<<endl;
    while(num>10)
    {
        num=num/10;

    }
    cout<<"First digit of number is:"<<num;
    return 0;
}
