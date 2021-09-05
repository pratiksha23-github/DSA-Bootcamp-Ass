// Write a program to check whether a year entered by a user is Leap year or not.
#include <iostream>
using namespace std;
 
int main()
{
    int year;
 
    cout << "Enter the year in yyyy format : ";
    cin >> year;
    if (year % 4 == 0)
        cout << year << " is a leap year";
    else
        cout << year << " is not a leap year";
}
