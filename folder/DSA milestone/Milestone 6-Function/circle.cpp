// Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.

#include<iostream>
using namespace std;
int circle(int radius)
{
cout<<"perimeter is:"<<3.14*radius*2;
cout<<"area is:"<<3.14*radius*radius;
}
int main()
{
circle(4);

return 0;}
