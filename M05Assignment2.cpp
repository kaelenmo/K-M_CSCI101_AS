/* Program name: M05Assignment2
*  Author: Kaelen Montgomery
*  Date last updated: 9/23/2024
* Purpose: Receive an ingredient inputted by the user from a predetermined list, and calculate the user's choice of weight or volume. */



#include <iostream>
#include <iomanip>
#include <limits>
#include <algorithm>
using namespace std;



//Declare Program Functions
string getIngredient();
double getDensity(string ingredient);
double getWeight();
double getVolume();
double convertWeight(double weight, double density);
double convertVolume(double volume, double density);

// Main Function
int main() {

// Declare variables
double weight;
double volume;

// Program title/introduction 

cout << "Welcome to the baking converter." << endl; 
cout << "This program takes a baking ingredient and converts a weight to a volume unit or a volume to a weight unit." << endl;

// More variable declarations, with values set by functions
char convertChar;
string ingredient = getIngredient();
double density = getDensity(ingredient);

// Main program loop for prompting user for weight or volume conversion, and calling functions for program task
string validChar;
while (true) {
cout << "Do you want to convert from weight or volume? (Enter W or V): ";

// Input validation for weight/volume choice
getline(cin, validChar);
if (!validChar.empty()) {
    convertChar = validChar[0];
}

cout << endl; 

// Input validation and function calls for getting values and converting values

// Converting from weight
if (convertChar == 'W' || convertChar == 'w') {
  weight = getWeight();
  volume = convertWeight(weight, density);
  cout << fixed << setprecision(4) << weight << " g of " << ingredient << " is " << fixed << setprecision(4) << volume << " ml";
  break;

  // Converting from volume
 } else if (convertChar == 'V' || convertChar == 'v') {
    volume = getVolume();
    weight = convertVolume(volume, density);
    cout << fixed << setprecision(4) << volume << " ml of " << ingredient << " is " << fixed << setprecision(4) << weight << " g";
    break;
 }

// Input validation notification
 else 
 cout << "Your response must be either a W or a V." << endl;
}

return 0;
}

// Function for getting ingredient name
string getIngredient() {
string ingredient;

// Input validation for ingredient name
while (true) {
cout << "Enter the name of the ingredient: ";
getline(cin, ingredient);
cout << endl;
transform(ingredient.begin(), ingredient.end(), ingredient.begin(), ::tolower);
if (ingredient == "sugar" || ingredient == "flour" || ingredient == "coco powder" || ingredient == "honey" || ingredient == "egg" || ingredient == "milk" || ingredient == "water" || ingredient == "oil") {
return ingredient;   
}
else 
cout << "I don't know that ingredient. Here is a list of ingredients I know:" << endl;
cout << "Sugar, Flour, Coco Powder, Honey, Egg, Milk, Water, and Oil" << endl;
}
}

// Function for determining density
double getDensity(string ingredient) {
double density;
if (ingredient == "sugar") {
density = 1.59;
} else if (ingredient == "flour") {
density = 0.672;
} else if (ingredient == "coco powder") {
density = 1.35;
} else if (ingredient == "honey") {
density = 1.38;
} else if (ingredient == "egg") {
density = 1.031;
} else if (ingredient == "milk") {
density = 1.025;
} else if (ingredient == "water") {
density = 0.997;
} else if (ingredient == "oil") {
density = 0.91;
}
return density;
}

// Function for getting weight
double getWeight() {
double weight;

// Input validation loop
while (true) {
cout << "Enter the weight of your ingredient in g: ";
cin >> weight;
cout << endl;
if (cin.fail()) {
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "You entered something that is not a number. Please Try again." << endl; 
} else if (weight <= 0) {
    cout << "Weight must be greater than 0. Please Try again." << endl;
}
else 
break;
} return weight;
}

// Function for getting volume
double getVolume() {
double volume;

// Input validation loop
while (true) {
cout << "Enter the volume of your ingredient in ml: ";
cin >> volume;
cout << endl;
if (cin.fail()) {
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "You entered something that is not a number. Please Try again." << endl; 
} else if (volume <= 0) {
    cout << "Volume must be greater than 0. Please Try again." << endl;
}
else 
break;
} return volume;
}


// Conversion functions
double convertWeight(double weight, double density) {
return weight / density;
}
double convertVolume(double volume, double density) {
return volume * density;
}