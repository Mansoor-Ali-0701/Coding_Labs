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
