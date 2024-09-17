/* Program name: M04Assignment2.cpp
* Author: Kaelen Montgomery
* Date Last Updated: 09/17/2024 
* Purpose: Enter a binary number any number of digits big and convert it into decimal */
#include <iostream>
#include <string>
#include <cmath>
#include <limits>

using namespace std;

int main() {
// Title output
cout << "Welcome to the binary number converter 2.0." << endl; 
cout << "You will enter a binary number 1 digit at a time starting at the right and the program will convert the number to decimal." << endl;

// Declare Variables
int digit;
int decresult = 0;
    
 // First 3 binary digit inputs (done individually for unqiue labels 2nd and 3rd) 
    cout << "Enter the 1st binary digit (Enter -1 to complete the conversion): " << endl; 
    cin >> digit;
  
   // Check for valid data type
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        digit = 9999; }

    if (digit == 9999) {
    cout << "You entered something that is not a number." << endl;  
    cout << "Enter the 1st binary digit (Enter -1 to complete the conversion): " << endl;
    cin >> digit;
}
 // Check for exit loop condition 
    if (digit == -1) {
    cout << "Your number in decimal is " << decresult << endl;
    return 0;
    }

 // Check for valid numbers 
    while (digit < -1 || digit > 1) {
    cout << "A binary digit can only be a 1 or 0." << endl;
    cout << "Enter the 1st binary digit (Enter -1 to complete the conversion): " << endl;
    cin >> digit;
    }
 // Convert first digit
    decresult = digit;

 // 2nd Digit
    cout << "Enter the 2nd binary digit (Enter -1 to complete the conversion): " << endl; 
    cin >> digit;

// Check for valid data type
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        digit = 9999; }

    if (digit == 9999) {
    cout << "You entered something that is not a number." << endl;  
    cout << "Enter the 2nd binary digit (Enter -1 to complete the conversion): " << endl;
    cin >> digit;
    }
    if (digit == -1) {
    cout << "Your number in decimal is " << decresult << endl;
    return 0;
    }

    // Check for valid numbers

    while (digit < -1 || digit > 1) {
    cout << "A binary digit can only be a 1 or 0." << endl;
    cout << "Enter the 1st binary digit (Enter -1 to complete the conversion): " << endl;
    cin >> digit;
    }
  // Convert 2nd digit
   decresult += (pow(2, 1) * digit);

 // 3rd digit
    cout << "Enter the 3rd binary digit (Enter -1 to complete the conversion): " << endl;
    cin >> digit;
 
 // Check for valid data type
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        digit = 9999; }

    if (digit == 9999) {
    cout << "You entered something that is not a number." << endl;  
    cout << "Enter the 3rd binary digit (Enter -1 to complete the conversion): " << endl;
    cin >> digit; }
 
 // Check for exit loop condition
    if (digit == -1) {
    cout << "Your number in decimal is " << decresult << endl;
    return 0;
    }

 // Check for valid numbers
    while (digit < -1 || digit > 1) {
    cout << "A binary digit can only be a 1 or 0." << endl;
    cout << "Enter the 3rd binary digit (Enter -1 to complete the conversion): " << endl;
    cin >> digit;
    }

 // Convert 3rd digit
    decresult += (pow(2, 2) * digit);
    
 // Loop for all digits past 3
    for (int n = 3; n < (n+1);)
    {

 // Receive "n"th digit 

    cout << "Enter the " << (n+1) << "th binary digit (Enter -1 to complete the conversion): " << endl;
    cin >> digit;
    
    // Check for invalid data type 
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        digit = 9999; }

    if (digit == 9999) {
    cout << "You entered something that is not a number." << endl;  
    cout << "Enter the " << (n+1) << "th binary digit (Enter -1 to complete the conversion): " << endl;
    cin >> digit; }
 
 // Check for exit loop condition
    if (digit == -1) {
     break;
    }
    else

    // Check for invalid numbers
    while (digit < -1 || digit > 1) {
    cout << "A binary digit can only be a 1 or 0." << endl;
    cout << "Enter the " << (n+1) << "th binary digit (Enter -1 to complete the conversion): " << endl;
    cin >> digit;
    
    }
    
 // Convert "n"th digit 
    decresult += (pow (2, n) * digit);
    n++;
    }

    // Final result
cout << "Your number in decimal is " << decresult << endl;
return 0;
}
 