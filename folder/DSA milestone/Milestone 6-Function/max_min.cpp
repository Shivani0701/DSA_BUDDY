// Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.

#include<iostream>
using namespace std;


 int max(int num1,int num2, int num3)
{
    if(num1>num2&&num1>>num3)
        max=num1;
    else if(num2>>num3&&num2>>num1)
        max=num2;
    else
        max=num3;
        return max;

}
 int min(int num1,int num2, int num3)
{
    if(num1<<num2&&num1<<num3)
        min=num1;
    else if (num2<<num3&&num2<<num1)
        min=num3;
    else
        min=num3;
        return min;
}
int main()
{    int num1,num2,num3,maximum,minimum;
    cout<<"enter value of first number:";

    cin>>num1;

    cout<<"enter value of second number:";

    cin>>num2;
    cout<<"enter value of third number:";

    cin>>num3;
    maximum=max(num1, num2, num3);
    minimum=min( num1, num2, num3);
    cout<<"maximum is" <<maximum;
    cout<<"minimum is"<<minimum;
    return 0;
}
