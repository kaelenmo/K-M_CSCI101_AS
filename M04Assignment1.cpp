/*Program Name: M04Assignment1.cpp
Author: Kaelen Montgomery
Date last updated: 9/16/2024
Purpose: Extract data from a file and create a list of names with their corresponding scores, and rank the top 3 scorers*/



#include <iostream>
#include <fstream>
#include <string> 
#include <iomanip>

using namespace std;

int main() {

ifstream inData;

// Open file

inData.open("scores.txt");

// Declare Variables

int count = 0;
int allusers;
string usernames;
string goldUser;
string silverUser;
string bronzeUser;
int goldScore = 0;
int silverScore = 0;
int bronzeScore = 0;
int scores;

// Output table labels 

cout << "IvyGames Tournament Results:" << endl;
	cout << setw(35) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	cout << "| " << setw(15) << left << "Username" << "| " << setw(15) << "Score" << "|"<< endl; 
	cout << setw(35) << setfill('-') << "-" << endl;
	cout << setfill(' ');


// Main while loop
while (!inData.eof()) {


inData >> usernames >> scores;
 
 // Table output

	cout << "| " << setw(15) << left << usernames << "| " << setw(15) << scores << "|"<< endl; 
	cout << setw(35) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	
 // Top users ranking loop 
 if (scores > goldScore) {
 bronzeUser = silverUser;
 bronzeScore = silverScore;
 silverUser = goldUser;
 silverScore = goldScore;
 goldUser = usernames;
 goldScore = scores;
	}
 else 
  if (scores > silverScore) {
  
  bronzeUser = silverUser;
  bronzeScore = silverScore;
  silverUser = usernames;
  silverScore = scores;

  }
  else 
	if (scores > bronzeScore) {
	bronzeUser = usernames;
	bronzeScore = scores;
	}

 }

 


// Rankings output 

cout << "The gold medal winner is " << goldUser << " with " << goldScore << " points." << endl;
cout << "The silver medal winner is " << silverUser << " with " << silverScore << " points." << endl;
cout << "The bronze medal winner is "<< bronzeUser << " with " << bronzeScore << " points." << endl;
cout << "Congratulations to the winners! See you at the next tournament." << endl;

// End program
inData.close();

return 0;
}