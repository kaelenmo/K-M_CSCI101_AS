/* Program name: M05Assignment1.cpp
* Author Name: Kaelen Montgomery
* Date Last Updated: 9/22/2024 
* Purpose: Receive an acceleration calculated by the force of a button in a video game and the time of the duration it was pressed 
* and calculate the speed, as well as the speed at time intervals of 3 seconds all the way up to the max time of acceleration, then output a chart
* with all times and speeds */


#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

// Declare Program functions 
double accelerationFromButton(double buttonForce);
double speedDueToAcceleration(double acceleration, int time);

// Main Function 
int main() {

// Declare variables 
double buttonForce;
int time;
int index = 0;
int timeIt;

// Receive button Force input
cout << "Enter the button force between 0 and 10 ";
cin >> buttonForce;
cout << endl;
while (true) {
if (cin.fail()) {
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "You entered something that is not a number. Please Try again." << endl;
    cout << "Enter the button force between 0 and 10 ";
    cin >> buttonForce;
    cout << endl;
}

else if (buttonForce < 0 || buttonForce > 10) {
cout << "The button force needs to be between 0 and 10." << endl;
cout << "Enter the button force between 0 and 10 ";
cin >> buttonForce;
cout << endl;
}
else 
 break;

}
// Declare acceleration with value called by its correlating functions
double acceleration = accelerationFromButton(buttonForce);

// Receive time input
cout << "Enter the total acceleration time in seconds: ";
cin >> time;
cout << endl;
while (true) {
if (cin.fail()) {
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "You entered something that is not a number. Please Try again." << endl;
    cout << "Enter the total acceleration time in seconds: ";
    cin >> time;
    cout << endl;
}
else if (time < 0) {
cout << "The total acceleration time must be greater than 0." << endl;
cout << "Enter the total acceleration time in seconds: ";
cin >> time;
cout << endl;
}
else 
 break;
}

// Declare speed with value called by its correlating function
double speed = speedDueToAcceleration(acceleration, time);

// Calculation for loop condition
int listCounter = time / 3;

// Header output
	cout << "Acceleration is " << acceleration << " m/s^2" << endl;
    cout << setw(15) << "Time in s" << setw(15) << "Speed in m/s" << endl;
    cout << setw(30) << setfill('*') << "*" << endl;
    cout << setfill(' ');

// Prevents final speed from duplicating
        if (time % 3 == 0) {
            listCounter = listCounter - 1;
        }
// Times and speeds list output
    while (index <= listCounter) {
    timeIt = index * 3;
    cout << setw(15) << (timeIt)  << setw(15) << (timeIt * acceleration) << endl;
    cout << setfill(' ');
    index++;
    }

    cout << setw(15) << time << setw(15) << (speed)  << endl;
    return 0;

}

// Acceleration button calculation function
double accelerationFromButton(double buttonForce) {
return buttonForce * 0.463; 
}

// Speed calculating function
double speedDueToAcceleration(double acceleration, int time) {
return acceleration * time;
}

