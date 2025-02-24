/* File Name: Chapter-3-Assignment 
Programmer/Name: Christopher Wilson 
Date: 2/20/2025

Requirements: Create a program that asks the user the principal amount, rate and interested that is compounded per year.
After inputs, it should the display a report similar to that in the assignment.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
	double principal, rate, amount, interest;
	int T;

	cout << "Enter the principal amount ($): ";
	cin >> principal;

	cout << "Enter the interest rate (as a percentage): ";
	cin >> rate;

	cout << "Enter the number of times the interest is compounded per year: ";
	cin >> T;

	rate = rate / 100.0;

	amount = principal * pow((1 + rate / T), T);

	interest = amount - principal;

	cout << fixed << setprecision(2);
	cout << "\nInterest Rate = " << rate * 100 << "%" << endl;
	cout << "Times compounded: " << T << endl;
	cout << "Principal: $" << principal << endl;
	cout << "Interest: $" << interest << endl;
	cout << "Amount in savings: $" << amount << endl;

	return 0;

}
