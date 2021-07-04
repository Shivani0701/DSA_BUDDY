// A person is eligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is elligible to vote.

#include<iostream>
using namespace std;

int check(int age)
{
    if(age>=18)
        cout<<"you are eligible:";
    else
        cout<<"you are not eligible:";
}
int main()
{
    int age;
   cout<<"Enter your age:";
   cin>>age;

   check(age);
   return 0;

}
