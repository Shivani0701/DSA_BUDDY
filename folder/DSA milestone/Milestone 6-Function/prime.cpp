// Define a function to find out if number is prime or not.

#include<iostream>
using namespace std;

bool prime(int num)

{
    for(int i = 2; i<num; i++)

        if(num%i == 0)

         return false;

    else

         return true;


}


int main()
{
    int num;
cout<<"enter num:";
cin>>num;
prime(num);
return 0;
}
