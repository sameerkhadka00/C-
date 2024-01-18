//question  no.1
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




// question  no.2
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





//question3
#include <stdio.h>

int main() {
    int year;

    // Prompt the user to enter a year
    printf("a. Enter a year AD, for example, 1997: ");
    scanf("%d", &year);

    // Check if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    // Prompt with changed example year
    printf("b. Enter a year AD, for example, 2005: ");
    scanf("%d", &year);

    // Check if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}



//question 4
#include <stdio.h>

int main() {
    int n = 7, rows, columns;


    for (rows = 1; rows <= n; rows++) {

        for (columns = n; columns > rows; columns--) {
            printf(" ");
        }

        printf("*");

        for (columns = 1; columns < (rows - 1) * 2; columns++) {
            printf(" ");
        }

        if (rows > 1) {
            printf("*");
        }
        printf("\n");
    }
    for (rows = n - 1; rows >= 1; rows--) {
        for (columns = n; columns > rows; columns--) {
            printf(" ");
        }
        printf("*");
        for (columns = 1; columns < (rows - 1) * 2; columns++) {
            printf(" ");
        }
        if (rows > 1) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
