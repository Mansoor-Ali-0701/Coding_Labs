#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main() {
	int number;
  cout<< "Please enter an Integer: \n";
	cin >> number;
  number=abs(number);
  stringstream tmp_stream;
	tmp_stream << number;
	string str_num(tmp_stream.str());
	int sum = 0;
	for (size_t i = 0; i < str_num.size(); ++i){
		cout << str_num[i] << ' ';
		sum+=str_num[i]-'0';
	}
	cout << sum;
	return 0;
}

