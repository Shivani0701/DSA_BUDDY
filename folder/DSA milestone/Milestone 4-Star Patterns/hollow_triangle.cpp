/*

print hollow right triangle star pattern
*
**
* *
*  *
*****

*/

#include<iostream>

using namespace std;
int main()

{
    int i,j,n;

    cout<<"Enter the value of row:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {

            if(j==1||j==i||i==n)
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
