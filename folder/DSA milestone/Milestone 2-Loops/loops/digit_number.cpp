//program to count number of digits in an integer


#include<iostream>
using namespace std;

int main()
{
    long long num;
    int n=0;
    cout<<"Enter any number:";
    cin>>num;
    while(num>0)
    {
        num=num/10;
        n++;
    }
    cout<<"Number of digit in number is:"<<n;
    return 0;
}
