// selects 10 random positive non-repeating numbers ranging from 1 to 100
// and allows the user to input 5 numbers and compares them with the 10 
// console-selected numbers. the user wins if one of the user-input
// numbers matches with one of the console-selected numbers.
// Eddie Lampert
// 2/26/2021

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

#define USER_NUM_SIZE 5  // user-input array size
#define SIZE 10 // array size for lottery numbers

// assigns 0 to each element of the array
void assign(int* x) {
    for (int i = 0; i < SIZE; i++) {
        *x = 0;
        x++;
    }
}

// returns true if the number matches one of the elements in the array
bool check(int num, int* x) {
    for (int i = 0; i < SIZE; i++) {
        if (*x++ == num) {
            return true;
        }
    }
    return false;
}

// generates 10 random non-repeating positive numbers and adds them to the lottery array
void draw(int* x) {

    srand((unsigned)time(0));
    int randomNumber;
    for (int i = 0; i < SIZE;) {
        randomNumber = (rand() % 100) + 1;
        if (!check(randomNumber, x)) {
            *x = randomNumber;
            i++;
        }
        x++;
    }
}

// asks the user to input 5 numbers
void entry(int* x) {
    for (int i = 0; i < USER_NUM_SIZE; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> *x;
        x++;
    }
}

// prints the lottery win numbers
void printOut(int* x) {
    for (int i = 0; i < SIZE; i++) {
        cout << *x << endl;
        x++;
    }
}

int main() {
    int wins[SIZE];
    int num_from_user[USER_NUM_SIZE];

    assign(&wins[0]); // assigns 0 to each element of the array 

    draw(&wins[0]);       // generates 10 random non-repeating positive numbers 

    entry(&num_from_user[0]);   // allows the user to input 5 numbers

    for (int k = 0; k < USER_NUM_SIZE; k++) {
        if (check(num_from_user[k], &wins[0])) {
            cout << "Congratulations, you won!!" << endl;
            break;
        }
    }

    printOut(&wins[0]);   // outputs selected lottery numbers
    return 0;
}