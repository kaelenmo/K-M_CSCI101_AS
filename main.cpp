#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;


int main()
{
    string eventName1, eventName2, eventName3, eventName4, eventName5, eventMonth1, eventMonth2, eventMonth3, eventMonth4, eventMonth5;
    int eventDay1, eventYear1, eventDay2, eventYear2, eventDay3, eventYear3, eventDay4, eventYear4, eventDay5, eventYear5, remDay1, remDay2, remDay3, remDay4, remDay5;
    ofstream CalenderEvents("CalenderEvents");

 cout << "Enter the first event's name: ";
  cin >> eventName1;

 cout << "Enter the first event's month: ";
 cin >> eventMonth1;

 cout << "Enter the first event's day: ";
 cin >> eventDay1;

 cout << "Enter the first event's year: ";
 cin >> eventYear1;

 cout << "Enter the second event's name: ";
  cin >> eventName2; 

 cout << "Enter the second event's month: ";
 cin >> eventMonth2; 

 cout << "Enter the second event's day: ";
 cin >> eventDay2;

 cout << "Enter the second event's year: ";
 cin >> eventYear2;

 cout << "Enter the third event's name: ";
  cin >> eventName3;

 cout << "Enter the third event's month: ";
 cin >> eventMonth3;

 cout << "Enter the third event's day: ";
 cin >> eventDay3;

 cout << "Enter the third event's year: ";
 cin >> eventYear3;

 cout << "Enter the fourth event's name: ";
  cin >> eventName4;

 cout << "Enter the fourth event's month: ";
 cin >> eventMonth4;

 cout << "Enter the fourth event's day: ";
 cin >> eventDay4;

 cout << "Enter the fourth event's year: ";
 cin >> eventYear4;

 cout << "Enter the fifth event's name: ";
  cin >> eventName5;

 cout << "Enter the fifth event's month: ";
 cin >> eventMonth5;

 cout << "Enter the fifth event's day: ";
 cin >> eventDay5; 

 cout << "Enter the fifth event's year: ";
 cin >> eventYear5; 

 remDay1 = eventDay1 - 1;
 remDay2 = eventDay2 - 1;
 remDay3 = eventDay3 - 1;
 remDay4 = eventDay4 - 1;
 remDay5 = eventDay5 - 1;

    
 CalenderEvents << left;
 CalenderEvents << "|" << setw(50) << setfill('-') << "-" << "|" << endl;
 CalenderEvents << setfill(' ');
 CalenderEvents << "| " << setw(19) << "Event Name" << "|" << "Event Date" << "| " << setw(17) << "Reminder Date" << "| " << endl;
 CalenderEvents << "|" << setw(50) << setfill('-') << "-" << "|" << endl;
 CalenderEvents << setfill(' ');
 CalenderEvents << "| " << setw(19) << eventName1 << "| " << eventMonth1 << "/" << eventDay1 << "/" << eventYear1 << setw(7) << " |" << eventMonth1 << "/" << remDay1 << "/" << setw(4) << eventYear1 << " |" << endl;
 CalenderEvents << "|" << setw(50) << setfill('-') << "-" << "|" << endl;
 CalenderEvents << setfill(' ');
 CalenderEvents << "| " << setw(19) << eventName2 << "| " << eventMonth2 << "/" << eventDay2 << "/" << eventYear2 << setw(7) << " |" << eventMonth2 << "/" << remDay2 << "/" << setw(4) << eventYear2 << " |" << endl;
 CalenderEvents << "|" << setw(50) << setfill('-') << "-" << "|" << endl;
 CalenderEvents << setfill(' ');
 CalenderEvents << "| " << setw(19) << eventName3 << "| " << eventMonth3 << "/" << eventDay3 << "/" << eventYear3 << setw(7) << " |" << eventMonth3 << "/" << remDay3 << "/" << setw(4) << eventYear3 << " |" << endl;
 CalenderEvents << "|" << setw(50) << setfill('-') << "-" << "|" << endl;
 CalenderEvents << setfill(' ');
 CalenderEvents << "| " << setw(19) << eventName4 << "| " << eventMonth4 << "/" << eventDay4 << "/" << eventYear4 << setw(7) << " |" << eventMonth4 << "/" << remDay4 << "/" << setw(4) << eventYear4 << " |" << endl;
 CalenderEvents << "|" << setw(50) << setfill('-') << "-" << "|" << endl;
 CalenderEvents << setfill(' '); 
 CalenderEvents << "| " << setw(19) << eventName5 << "| " << eventMonth5 << "/" << eventDay5 << "/" << eventYear5 << setw(7) << " |" << eventMonth5 << "/" << remDay5 << "/" << setw(4) << eventYear5 << " |" << endl;
 CalenderEvents << "|" << setw(50) << setfill('-') << "-" << "|" << endl;
 CalenderEvents << setfill(' '); 
    return 0;

 CalenderEvents.close();
}