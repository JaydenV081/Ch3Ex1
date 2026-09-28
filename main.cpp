/*
Developer: Jayden Veloz
File Name: Ch3Ex1.cpp
Date: 9 / 28 / 26

Requirements:
Write a program that calculates a car’s gas mileage. The program should ask the user
to enter the number of gallons of gas the car can hold and the number of miles it can
be driven on a full tank. It should then calculate and display the number of miles
per gallon the car gets.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double gallons, miles;

    cout << "How many gallons of gas does can your car hold? ";
    cin >> gallons;

    cout << "How many miles can you drive on a full tank? ";
    cin >> miles;

    double mileage = miles / gallons;

    cout << fixed << setprecision(2) << mileage << endl;

    return 0;
}
