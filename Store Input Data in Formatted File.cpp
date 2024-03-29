/*
Instructions
Suppose that the file inData.txt, data set 1, contains the following data:

Giselle Robinson Accounting
5600 5 30
450 9
75 1.5
The first line contains a person’s first name, last name, and the department the person works in.

In the second line, the first number represents the monthly gross salary, the bonus (as a percent), and the taxes (as a percent).

The third line contains the distance traveled and the traveling time.

The fourth line contains the number of coffee cups sold and the cost of each coffee cup.

Write statements so that after the program executes, the contents of the file outData.txt are as shown below. If necessary, declare additional variables. Your statements should be general enough so that if the content of the input file changes and the program is run again (without editing and recompiling), it outputs the appropriate results.

Name: Giselle Robinson, Department: Accounting
Monthly Gross Salary: $5600.00, Monthly Bonus: 5.00%, Taxes: 30.00%
Paycheck: $4116.00

Distance Traveled: 450.00 miles, Traveling Time: 9.00 hours
Average Speed: 50.00 miles per hour

Number of Coffee Cups Sold: 75, Cost: $1.50 per cup
Sales Amount = $112.50 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main ()
{

ifstream inFile;
ofstream outFile;

inFile.open("inData.txt");
outFile.open("outData.txt");
double G_SALARY;
double B_PERC;
double T_PERC;
string firstname;
string lastname;
string dept;
double travelDist;
double travelTime;
int coffee;
double coffeeCost;
double paycheck, avgSpeed, salesAmt, taxedInc;

inFile >> firstname >> lastname >> dept;
outFile << "Name: " << firstname << " " << lastname << "," << " Department: " << dept << endl;

inFile >> G_SALARY >> B_PERC >> T_PERC;
outFile << "Monthly Gross Salary: $" << setprecision (2) << fixed << G_SALARY << ", " << "Monthly Bonus: " << setprecision (2) << fixed << B_PERC << "%, " << "Taxes: " << setprecision (2) << fixed << T_PERC << "%\n";
	taxedInc = G_SALARY-(G_SALARY*(T_PERC/100));
	paycheck = taxedInc + (taxedInc*(B_PERC/100));
outFile << "Paycheck: $" << setprecision (2) << fixed << paycheck << endl << endl;

inFile >> travelDist >> travelTime;
outFile << "Distance Traveled: " << setprecision (2) << fixed << travelDist << " miles," << " Traveling Time: " << setprecision (2) << fixed << travelTime << " hours\n";
	avgSpeed = travelDist/travelTime;
outFile << "Average Speed: " << setprecision (2) << fixed << avgSpeed <<" miles per hour" << endl << endl;

inFile >> coffee >> coffeeCost;
outFile << "Number of Coffee Cups Sold: " << coffee << ", " << "Cost: $" << setprecision (2) << fixed << coffeeCost << " per cup\n";
	salesAmt = coffee*coffeeCost;
outFile << "Sales Amount = $" << setprecision (2) << fixed << salesAmt << endl;

inFile.close();
outFile.close();

return 0;
}


