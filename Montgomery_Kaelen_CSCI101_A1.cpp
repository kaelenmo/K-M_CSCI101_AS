/* Program Name: Montgomery_Kaelen_CSCI101_A1.cpp
* Author: Kaelen Montgomery
* Date last updated: 08/23/2024
* Purpose: Receive a 5-digit binary value and convert it to decimal value*/

#include <iostream>

using namespace std;

int main() {
	

// Variables are defined //
int digit1;
int digit2;
int digit3;
int digit4;
int digit5;

 // user inputs are received //
 cout <<   "Enter the 1st binary digit: ";
    cin >> digit1;
 cout <<   "Enter the 2nd binary digit: ";
    cin >> digit2;
 cout << "Enter the 3rd binary digit: ";
    cin >> digit3;
 cout << "Enter the 4th binary digit: ";
    cin >> digit4;
  cout <<  "Enter the 5th binary digit: ";
    cin >> digit5;

 //Calculation //
 int decValue = digit5 + (digit4 * 2) + (digit3 * 4) + (digit2 * 8) + (digit1 * 16);



// Valid data check //
if (digit5 < 0 or digit4 < 0 or digit3 < 0 or digit2 < 0 or digit1 < 0 or digit5 > 1 or digit4 > 1 or digit3 > 1 or digit2 > 1 or digit1 > 1) {
   cout << "Error: Check your digits and try again.";

   // Final Output //
   } else { cout << digit1 << digit2 << digit3 << digit4 << digit5 << " converted to decimal is " << decValue;
   };
}





