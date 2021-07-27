/*Write a program that uses while loops to perform the following steps:

Prompt the user to input two integers: firstNum and secondNum
(firstNum must be less than secondNum).
Output all odd numbers between firstNum and secondNum.
Separate each number with a space
Output the sum of all even numbers between firstNum and secondNum.
Output the numbers and their squares between 1 and 10.
Output the sum of the square of the odd numbers between firstNum and secondNum.
Output all uppercase letters.
Separate each letter with a space
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
     int firstNum, secondNum, evenSum=0, sq, oddSum=0, a = 65;
     cout << "Please enter the first Number\n"<< "Enter another number that is bigger than the first\n";
     cin >>firstNum>>secondNum;
     cout << "Odd number output (Part b): " << endl; 

     while (firstNum<=secondNum){
      if(firstNum%2==1){
         cout<<firstNum<< " ";
         oddSum+=(firstNum*firstNum);
      }
      else {
      evenSum+=firstNum;
      }
      firstNum++;
    }
      cout << "\nSum of even numbers output (Part c): " << endl;
      cout << evenSum << endl;
      cout << "Output 1-10 squared (Part d): " << endl;

      for (int i =1 ; i<=10 ;i++){
        sq=i*i ;
        cout << i << " " << sq<< " ";
      } 
     cout << "\nOutput sum of odd numbers squared (Part e): " << endl;
       
     cout << oddSum << endl ;  
     cout << "Output uppercase letters (Part f): " << endl; 
     while (a< 91)
     cout << char(a++) << " ";
 

    return 0;
}



