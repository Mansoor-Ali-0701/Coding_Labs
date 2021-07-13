/*
Write a program that prompts the user to input a number. The program should then output the number and a message saying whether the number is positive, negative, or zero.
Project: 
*/
#include <iostream>

using namespace std;

int main() {
    int num;
    cout<< "Please enter a number: ";
    cin >> num;
    if(num > 0)
    {
      cout <<"The number " << num << " is Positive ";
    }
    else if (num == 0)
    {
      cout << "The number " << num << " is Zero";
    }
    else
    {
      cout << " The number "<< num << " is Negative";
    }
    return 0;
}
