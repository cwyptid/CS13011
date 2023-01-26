// selects a random age for the troll at the start, allows the user to guess the age of the troll, and increments every time the user gets it wrong
// Eddie Lampert
// 2/12/2021


#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout; using std::cin; using std::endl;

int main() {
	srand(time(nullptr));

	int n = 0;
	int guess;
	int lowerbound = 100;
	int higherbound = 200;
	int age = rand() % (higherbound - lowerbound + 1) + lowerbound;


	do {
		cout << endl;
		cout << "Hello, handsome prince. I am an ugly old troll. How old am I?";
		cout << endl;
		cin >> guess;

		if (guess == age) 
		{
			n = 3;
		}
			else if(guess > age){

			n = 1;
			}
			else if (guess < age){

			n = 2; 
			}

		switch (n) {

		case 1:
			cout << "Wrong, I am younger. No fair maiden for you. Better luck next year.";
			cout << endl;
			++age;
			break;
		case 2:
			cout << "Wrong, I am older. No fair maiden for you. Better luck next year.";
			cout << endl;
			++age;
			break;
		case 3:
			cout << "You got it! Here is the fair maiden. Live happily ever after!";
			cout << endl;
		}
		
	}
		while (guess != age);


	
}