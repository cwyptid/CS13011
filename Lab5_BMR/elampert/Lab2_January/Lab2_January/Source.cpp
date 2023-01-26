#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	cout << "Input number from 01 to 31: ";
	int number;
	cin >> number;

	const int singles = number % 10; 
	const int tens = number / 10;

	//spell number
	if (tens == 1) {
		//spell the numbers in range [10-19]
		//switch according to singles
		switch (singles) {
			case 0: cout << "ten"; break;
			case 1: cout << "eleven"; break;
			case 2: cout << "twelve"; break;
			case 3: cout << "thirteen"; break;
			case 4: cout << "fourteen"; break;
			case 5: cout << "fifteen"; break;
			case 6: cout << "sixteen"; break;
			case 7: cout << "seventeen"; break;
			case 8: cout << "eighteen"; break;
			case 9: cout << "nineteen"; break;
		}
	}
	else {
		//switch according to tens
		switch (tens) {
			case 2: cout << "twenty "; break;
			case 3: cout << "thirty "; break;
		}

		//switch according to singles
		switch (singles) {
			case 1: cout << "one"; break;
			case 2: cout << "two"; break;
			case 3: cout << "three"; break;
			case 4: cout << "four"; break;
			case 5: cout << "five"; break;
			case 6: cout << "six"; break;
			case 7: cout << "seven"; break;
			case 8: cout << "eight"; break;
			case 9: cout << "nine"; break;
		}
	}
}