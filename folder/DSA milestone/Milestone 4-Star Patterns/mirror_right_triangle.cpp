/*

print mirrored right triangle star pattern
    *
   **
  ***
 ****
*****

*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,n;

    cout<<"Enter the number of rows:";
    cin>>n;

    for(i=1;i<=n;i++)
    {

        for(j=n;j>=i;j--)
        {

            cout<<"*";

        }
       cout<<"\n";

    }
    return 0;
}
