// Write a program to print the sum of two numbers using function.

#include<iostream>
using namespace std;


 int sum(int x,int y);

int main()
{
    int x,y,add;
    cout<<"Enter twoi number:";
    cin>>x>>y;
    add=sum(x,y);

    cout<<"sum is:"<<add<<endl;
    return 0;

}
int sum(int x,int y)
{
    return x+y;
}
