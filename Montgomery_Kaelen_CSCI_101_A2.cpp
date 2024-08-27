/* Program name: Montgomery_Kaelen_CSCI_101_A2.cpp
* Author: Kaelen Montgomery
* Date last updated: 8/26/2024
* Purpose: Calculate a jackpot prize for a group of winners
*/

#include <iostream>

using namespace std;

int main()
{
    //Declaring Variables //
   int jackpot;
   int winnerCount;

    // Prompts //
   cout << "Enter the jackpot amount: "; 
     cin >> jackpot;
   cout << "Enter the number of winners: ";
     cin >> winnerCount;
 int prizeAmount = (jackpot / (winnerCount + 1));

if (jackpot < 0 or winnerCount < 0) {
    cout << "Invalid data input, please try again" << endl;
    } else {
 // Final outputs //
   cout << "The first winner gets: $" << (prizeAmount * 2) << endl;
   cout << "All the other winners get: $" << prizeAmount;
    }
    return 0;
}