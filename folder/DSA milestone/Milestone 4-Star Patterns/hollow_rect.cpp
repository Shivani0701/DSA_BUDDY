/*
Logic to print hollow rectangle star pattern
***************
*             *
*             *
*             *
***************
*/

#include<iostream>
using namespace std;

int main()
{

    int row;
    int column;

    cout<<"Enter the number of row:";
    cin>>row;
    cout<<"Enter the number of column:";
    cin>>column;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        {
            if(i==1||i==row||j==1||j==column)
                {
                    cout<<"*";

                }
                else
                {

                    cout<<" ";
                }
        }

    cout<<"\n";
    }
    return 0;
}
