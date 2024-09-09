 #include <iostream>

using namespace std;

int main()
{

int ramAmount;
int listNumber; 

cout << "Enter the amount of RAM in GB " << endl;
cin >> ramAmount;
cout << endl;
if (ramAmount < 1) {
    cout << "You have entered an invalid value. The program will be unable to continue. Exiting." << endl;
    return 0;
}
else 
cout << "Choose the task you want to do on your computer from the following list:" << endl;
cout << "1. Android Studio" << endl;
cout << "2. Visual Studio Code" << endl;
cout << "3. Gaming" << endl;
cout << "4. Web Browsing with Chrome" << endl;
cout << "5. Multiple Programming Tasks (both Android Studio and Visual Studio Code)" << endl;
cout << "6. Zoom" << endl;
cout << "7. Email" << endl;
cout << "8. Create and edit documents" << endl;
cout << "9. Everything listed above" << endl;

cin >> listNumber;
cout << endl;

if (listNumber > 9 || listNumber < 0) {
    cout << "You have entered an invalid value. The program will be unable to continue. Exiting." << endl; 
    return 0; }
else 
switch (listNumber)
{ 
case 0:
    cout << "You have entered an invalid value. The program will be unable to continue. Exiting.";
    break;   
case 1:
    if (ramAmount >= 12)
    cout << "Congratulations! You have sufficient RAM for your task.";

    break;
case 2:
    if (ramAmount >= 8)
    cout << "Congratulations! You have sufficient RAM for your task.";
    else
    cout << "Sorry the RAM you have is not sufficient.";
    break;
case 3: 
    if (ramAmount >= 16)
    cout << "Congratulations! You have sufficient RAM for your task.";
    else
    cout << "Sorry the RAM you have is not sufficient.";
    break;
case 4: 
    if (ramAmount >= 8)
    cout << "Congratulations! You have sufficient RAM for your task.";
    else
    cout << "Sorry the RAM you have is not sufficient.";
    break;
case 5:
    if (ramAmount >= 20)
    cout << "Congratulations! You have sufficient RAM for your task.";
    else
    cout << "Sorry the RAM you have is not sufficient.";
    break;
case 6:
    if (ramAmount >= 8)
    cout << "Congratulations! You have sufficient RAM for your task.";
    else
    cout << "Sorry the RAM you have is not sufficient.";
    break;
case 7:
    if (ramAmount >= 6)
    cout << "Congratulations! You have sufficient RAM for your task.";
    else
    cout << "Sorry the RAM you have is not sufficient.";
    break;
case 8:
    if (ramAmount >= 6)
    cout << "Congratulations! You have sufficient RAM for your task.";
    else
    cout << "Sorry the RAM you have is not sufficient.";
    break;
case 9: 
    if (ramAmount >= 32)
    cout << "Congratulations! You have sufficient RAM for your task.";
    else
    cout << "Sorry the RAM you have is not sufficient.";
    break;

}   

return 0;
} 


