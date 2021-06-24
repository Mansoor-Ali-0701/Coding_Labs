#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double average_A;
    double average_B ;
    double time_A2, time_B2;
    double sqt;
    double mins, hours;
    cout <<"Please enter the Average speed for Car A and B \n";
    cin  >> average_A >> average_B;
    cout <<"Please enter elapsed time \n";
    cin >> time_A2 >> time_B2;
    mins= time_A2* 60;
    hours= (time_B2+mins)/60;
    average_A*=hours;
    average_B*=hours;
    sqt = sqrt((average_A*average_A)+(average_B*average_B));
    cout<< setprecision(2)<< fixed;
    cout<< "Shortest distance between the cars = " << sqt;
    

     
    return 0;
}
