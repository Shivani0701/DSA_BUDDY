
/* factorial of number usimg recursion*/
#include <iostream>

using namespace std;



int factorial(int n)
{
    int prevfact;
    if(n != 1)
    {
     prevfact=n*factorial(n-1);

    }
    else
    prevfact=1;
    return prevfact;
}
int main()
{
    int n;
    cin>>n;
    int prevfact=factorial(n);
    cout<<prevfact<<endl;
    return 0;
}
