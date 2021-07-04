//program to print all natural numbers from 1 to n

#include<iostream>
using namespace std;

int main()
{
	int number, i = 1;

	cout << "\nPlease Enter Integer Value to print Natural Numbers =  ";
	cin >> number;

	cout << "\nList of Natural Numbers from 1 to " << number << " are\n";
	while(i <= number)
  	{
		cout << i <<" ";
		i++;
  	}

 	return 0;
}
