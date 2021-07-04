/*

print hollow mirrored right triangle star pattern
*****
*  *
* *
**
*

*/

#include<iostream>
using namespace std;

int main()

{
    int n,i,j;
    cout<<"Enter number of rows:";
    cin>>n;

     for(i=1; i<=n; i++)
    {
        /* Iterate through columns */
        for(j=i; j<=n; j++)
        {
            /*
             * Print stars for first row(i==1),
             * first column(j==1) and
             * last column(j=rows).
             */
            if(i==1 || j==i || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }


    /*
    for(int i=1;i<=n;i++)
    {

        for(int j=i;j<=n;j++)
        {
            if(i==1||j==1||i+j==n+1)
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
    */
    cout<<"\n";
    }
    return 0;
}
