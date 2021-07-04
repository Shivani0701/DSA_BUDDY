/*

Logic to print hollow square with diagonal
*****
** **
* * *
** **
*****

*/
#include<iostream>
using namespace std;

int  main()
{
    int n;

    cout<<"Enter the number of row:";
    cin>>n;


    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=n; j++)
        {
            if(i==1||i==n||j==1||j==n||j==i||j+i==(n + 1))
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
