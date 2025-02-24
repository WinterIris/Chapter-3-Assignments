/* Github File Name: Chapter-3-Assignment (Ingediant Adjuster)
Programmer/Name: Christopher Wilson 
Date: 2/19/2025

Requirements: A cookie recipe calls for a certain amount of ingrediants.
The following program should ask he or she how many cookies they want to make (48). The program should then display the proper amount of ingediants for 48 cookies.
*/

#include <iostream>
using namespace std;

int main() {
	double sugar = 1.5;
	double butter = 1.0;
	double flour = 2.75;
	int cookies;

	cout << "Enter the amount of cookies desired to be made. ";
	cin >> cookies;

	double sugarNeeded = (sugar / 48) * cookies;
	double butterNeeded = (butter / 48) * cookies;
	double flourNeeded = (flour / 48) * cookies;

	cout << "For " << cookies << " cookies, you will need:" << endl;
	cout << sugarNeeded << " cups of sugar" << endl;
	cout << butterNeeded << " cups of butter" << endl;
	cout << flourNeeded << " cups of butter" << endl;

	return 0;

}
