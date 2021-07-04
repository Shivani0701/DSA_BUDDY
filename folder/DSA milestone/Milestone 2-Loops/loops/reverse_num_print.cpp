//program to print natural numbers in reverse from n to 1

#include<iostream>
using namespace std;

int main()

{
    int num;
    int i =num;

    cout<<"Enter the integer value to print reverse number:";
    cin>>num;
    cout<<"Natural number in reverse from "<<num<<"to 1:";

    while(i>=1)
    {
        cout<<i<<" ";
        i--;
    }
    return 0;
}
