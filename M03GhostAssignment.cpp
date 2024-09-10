
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
ifstream inData;
ofstream outData;

// Declaring Variables
char eventCode1, eventCode2, eventCode3;
int hauntScore, eventFrequency1, eventFrequency2, eventFrequency3;
string shadow, EVP, footstep, app, move, door, thermo;


hauntScore = 0;
shadow = "Shadows or orbs";
EVP = "EVP (Electronic Voice Personnel)";
footstep = "Footsteps";
app = "Full Body Apparition";
move = "Objects moving on their own";
door = "Doors moving on their own";
thermo = "ThermoCamera hot or cold spots";

// Opening files
inData.open("ghosts.txt");
outData.open("ghosts.out");

// Inputting data from file into variables
inData >> eventCode1 >> eventFrequency1 >> eventCode2 >> eventFrequency2 >> eventCode3 >> eventFrequency3;

cout << "Analyzing Ghost Hunt Data ..." << endl;

// Matching event codes in file to their event and outputting number of instances, then calculating the haunt score //
switch (eventCode1)
{
case 'E':
cout << "Found " << eventFrequency1 << " instances of " << EVP << "." << endl;
hauntScore = hauntScore + (eventFrequency1 * 3);
break;

case 'S':
cout << "Found " << eventFrequency1 << " instances of " << shadow << "." << endl;
hauntScore = hauntScore + (eventFrequency1 * 1);
break;

case 'F':
cout << "Found " << eventFrequency1 << " instances of " << footstep << "." << endl;
hauntScore = hauntScore + (eventFrequency1 * 2);
break;

case 'A':
cout << "Found " << eventFrequency1 << " instances of " << app << "." << endl;
hauntScore = hauntScore + (eventFrequency1 * 5);
break;

case 'O':
cout << "Found " << eventFrequency1 << " instances of " << move << "." << endl;
hauntScore = hauntScore + (eventFrequency1 * 5);
break;

case 'D':
cout << "Found " << eventFrequency1 << " instances of " << door << "." << endl;
hauntScore = hauntScore + (eventFrequency1 * 3);
break;

case 'T':
cout << "Found " << eventFrequency1 << " instances of " << thermo << "." << endl;
hauntScore = hauntScore + (eventFrequency1 * 2);
break;

}

switch (eventCode2)
{
case 'E':
cout << "Found " << eventFrequency2 << " instances of " << EVP << "." << endl;
hauntScore = hauntScore + (eventFrequency2 * 3);
break;

case 'S':
cout << "Found " << eventFrequency2 << " instances of " << shadow << "." << endl;
hauntScore = hauntScore + (eventFrequency2 * 1);
break;

case 'F':
cout << "Found " << eventFrequency2 << " instances of " << footstep << "." << endl;
hauntScore = hauntScore + (eventFrequency2 * 2);
break;

case 'A':
cout << "Found " << eventFrequency2 << " instances of " << app << "." << endl;
hauntScore = hauntScore + (eventFrequency2 * 5);
break;

case 'O':
cout << "Found " << eventFrequency2 << " instances of " << move << "." << endl;
hauntScore = hauntScore + (eventFrequency2 * 5);
break;

case 'D':
cout << "Found " << eventFrequency2 << " instances of " << door << "." << endl;
hauntScore = hauntScore + (eventFrequency2 * 3);
break;

case 'T':
cout << "Found " << eventFrequency2 << " instances of " << thermo << "." << endl;
hauntScore = hauntScore + (eventFrequency2 * 2);
break;

}

switch (eventCode3)
{
case 'E':
cout << "Found " << eventFrequency3 << " instances of " << EVP << "." << endl;
hauntScore = hauntScore + (eventFrequency3 * 3);
break;

case 'S':
cout << "Found " << eventFrequency3 << " instances of " << shadow << "." << endl;
hauntScore = hauntScore + (eventFrequency3 * 1);
break;

case 'F':
cout << "Found " << eventFrequency3 << " instances of " << footstep << "." << endl;
hauntScore = hauntScore + (eventFrequency3 * 2);
break;

case 'A':
cout << "Found " << eventFrequency3 << " instances of " << app << "." << endl;
hauntScore = hauntScore + (eventFrequency3 * 5);
break;

case 'O':
cout << "Found " << eventFrequency3 << " instances of " << move << "." << endl;
hauntScore = hauntScore + (eventFrequency3 * 5);
break;

case 'D':
cout << "Found " << eventFrequency3 << " instances of " << door << "." << endl;
hauntScore = hauntScore + (eventFrequency3 * 3);
break;

case 'T':
cout << "Found " << eventFrequency3 << " instances of " << thermo << "." << endl;
hauntScore = hauntScore + (eventFrequency3 * 2);
break;

}
cout << "The haunting score for this place is " << hauntScore << "." << endl;

//Check score for if location is haunted or not
if (hauntScore > 15)
cout << "This place is haunted." << endl;
else 
cout << "This place is probably not haunted." << endl;

// End Program and exit//
cout << "Great Job! On to the next one." << endl;
inData.close();
return 0;

}