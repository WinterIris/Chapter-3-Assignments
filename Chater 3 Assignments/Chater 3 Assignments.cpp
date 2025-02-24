/* File Name: Chapter-3-Assignment 
Programmer/Name: Christopher Wilson 
Date: 2/20/2025

Requirements: The follow program is a Loan Payment code that should ask the user the loan amount, monthly interest rate, number of payments, monthly payment, amount paid back and Interest Paid,
After asking for the values, it should then display a report similar to the one provided in the assignment rubric. 
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double loanAmount, annualInterestRate, monthlyInterestRate, monthlyPayment, amountPaidBack, interestPaid; int numberOfPayments;

	cout << "Enter the loan amount: ";
	cin >> loanAmount;
	cout << "Enter the annual interest rate (in percentage): ";
	cin >> annualInterestRate;
	cout << "Enter the number of payments: ";
	cin >> numberOfPayments;

	monthlyInterestRate = (annualInterestRate / 100) / 12;

	monthlyPayment = (monthlyInterestRate * pow(1 + monthlyInterestRate, numberOfPayments) / (pow(1 + monthlyInterestRate, numberOfPayments) - 1)) * loanAmount;

	amountPaidBack = monthlyPayment * numberOfPayments;
	interestPaid = amountPaidBack - loanAmount;

	cout << fixed << setprecision(2);
	cout << "Loan Amount: $" << loanAmount << endl;
	cout << "Monthly Interest Rate: " << monthlyInterestRate * 100 << "%" << endl;
	cout << "Number of Payments: " << numberOfPayments << endl;
	cout << "Monthly Payment: $" << monthlyPayment << endl;
	cout << "Amount Paid Back: $" << amountPaidBack << endl;
	cout << "Interest Paid: $" << interestPaid << endl;

	return 0;

}