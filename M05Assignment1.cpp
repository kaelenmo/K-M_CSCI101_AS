#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

double accelerationFromButton(double buttonForce);
double speedDueToAcceleration(double acceleration, int time);

int main() {
double buttonForce;
int time;
int index = 0;
int timeIt;

cout << "Enter the button force between 0 and 10 ";
cin >> buttonForce;
cout << endl;

double acceleration = accelerationFromButton(buttonForce);

cout << "Enter the total acceleration time in seconds: ";
cin >> time;
cout << endl;

double speed = speedDueToAcceleration(acceleration, time);

int listCounter = time / 3;

	cout << "Acceleration is " << acceleration << " m/s^2" << endl;
    cout << setw(15) << "Time in s" << setw(15) << "Speed in m/s" << endl;
    cout << setw(30) << setfill('*') << "*" << endl;
    cout << setfill(' ');

    while (index <= listCounter) {
    timeIt = index * 3;
    cout << setw(15) << (timeIt)  << setw(15) << (timeIt * acceleration) << endl;
    cout << setfill(' ');
    index++;
    }

    cout << setw(15) << time << setw(15) << (speed)  << endl;
    return 0;

}

double accelerationFromButton(double buttonForce) {
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
return buttonForce * 0.463;
}

double speedDueToAcceleration(double acceleration, int time) {
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
cout << "The total acceleration time must be greater than 0.";
cout << "Enter the total acceleration time in seconds: ";
cin >> time;
cout << endl;
}
else 
 break;
}

return acceleration * time;

}
