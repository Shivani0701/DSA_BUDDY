//Program to print alphabets from a-z


#include<iostream>
using namespace std;

int main()
{

    char ch;
    cout<<"Alphabets from a-z are:"<<endl;;
    ch='a';
    while(ch<='z')
    {
        cout<<ch<<"\t";
      ch++;
    }
}
