//question1
#include <iostream>
#include <fstream> // pkg is for file processing
#include <iomanip> // for printing format on the monitor
using namespace std;
int GetInches(ifstream& rainFile, int numberOfDays);
// Function returns the total inches of rain
// Pre: File rainFile has been opened; numberOfDays is the
// first value on the file, followed by numberOfDays
// real values representing inches of rain.
int main(){
float average; // Average rainfall
float totalRain; // Total accumulated rain
int numberOfDays; // Number of days in calculation
ifstream rainFile; // Data file – read from hard drive to memory
cout << fixed << showpoint;
rainFile.open("Rain.In");
rainFile >> numberOfDays;
totalRain = GetInches(rainFile, numberOfDays);
if (totalRain == 0.0)
cout << "There was no rain during this period." << endl;
else{
average = totalRain / numberOfDays;
cout << "The average rain fall over "
<< numberOfDays;
cout << " days is " << setw(1) << setprecision(3)
<< average << endl;
}
return 0;
}
//******************************************************
int GetInches(ifstream& rainFile, int numberOfDays){
float inches; // Day's worth of rain
int counter; // Loop control variable
float totalRain = 0.0;
counter = 1;
while (counter <= numberOfDays){
rainFile >> inches;
totalRain = totalRain + inches;
counter++;
}
return totalRain;
}


//question 2

#include <iostream>
using namespace std;
int main (){
int inches;
cout << "Enter the number of inches on a side "
<< endl;
cout << "Press the return key."
<< endl;
cin >> inches;
cout << endl
<< "The area is " << inches * inches <<"."
<< endl;
return 0;
}

//question 3 (a)
#include <iostream>
using namespace std;

int main() {
   
    cout << "Enter a year AD, for example, 2005: ";

    int year;
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
//(b)
#include <iostream>
using namespace std;

int main() {
   
    cout << "Enter a year AD, for example, 1997: ";

    int year;
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
//question 4

#include<iostream>
using namespace std;

int main() {
    int n, i, j;
    cout << "Enter number of rows: ";
    cin >> n;

    for(i = 0; i <= n; i++) {
        for(j = 0; j < n-i; j++)
            cout << " ";
        for(j = 0; j < 2*i-1; j++) {
            if(j == 0 || j == 2*i-2)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }

    for(i = n-1; i >= 1; i--) {
        for(j = 0; j < n-i; j++)
            cout << " ";
        for(j = 0; j < 2*i-1; j++) {
            if(j == 0 || j == 2*i-2)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}

