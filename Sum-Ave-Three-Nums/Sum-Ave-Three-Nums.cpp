// Write a program to find the “Sum” and “Average” of “three” numbers.
// Provide a hint to the user, take the input and return some output results to show the user the calculations for their three numbers.

#include <iostream>
using namespace std;

int sumValues(int one, int two, int three) {
	return one + two + three;
}

int aveValues(int one, int two, int three) {
	return (one + two + three) / 3;
}

int main()
{
	int first;
	int second;
	int third;

	cout << "Please enter three whole numbers (separated by a space or enter):\n";
	cin >> first >> second >> third;
	cout << "You entered: " << first << ", " << second << ", and " << third << ".\n";
	cout << "The sum of your numbers is: " << sumValues(first, second, third) << ".\n";
	cout << "The average of your numbers is: " << aveValues(first, second, third) << ".\n";
}
