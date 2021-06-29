/*
Write a program that accepts as input the mass, in grams, and density, in grams per cubic centimeters, and outputs the volume of the object using the formula: volume = mass / density.

Format your output to two decimal places.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double mass_grams;
    double density_grams;
    double volume;
    cout<<"Please enter the mass in grams \nPlease enter the density in grams\n";
    cin >> mass_grams >> density_grams;
    volume = mass_grams/ density_grams;
    cout << setprecision(2)<< fixed;
    cout<< "The Volume = " << volume;
    return 0;
}
