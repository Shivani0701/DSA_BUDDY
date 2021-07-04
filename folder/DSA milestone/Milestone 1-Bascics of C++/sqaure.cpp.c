//Take values of length and breadth of a rectangle from user and check if it is square or not.


#include<iostream>
using namespace std;

int main()
{
    int length,breadth;
    cout<<"Enter the value of length:";
    cin>>length;
    cout<<"Enter the value of breadth:";
    cin>>breadth;

    if(length==breadth)
    {
        cout<<"It is square.";
    }
    else
    {
        cout<<"It is not square.";
    }
    return 0;
}
