/* File Name: Chapter-3-Assignment 
Programmer/Name: Christopher Wilson 
Date: 2/19/2025

Requirements: Create a program where a question is asked to the student. These numbers must be randomly generated.
The program DOES NOT provide a space to type in the answer, but instead, answers the question given when the student is ready.
*/

#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;
 
    cout << "What is " << num1 << " + " << num2 << "?" << endl;

    cout << "Press Enter when you're ready to check your answer...";
    cin.get(); 

    int correctAnswer = num1 + num2;
    cout << "The correct answer is: " << correctAnswer << endl;

    return 0;
}
