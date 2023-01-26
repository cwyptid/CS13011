// finds the sum of all positive integers
// Eddie Lampert
// 2/05/2021


#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

    cout << "Input number [0 to quit]: ";
    int n;
    cin >> n;

    int sum = n; // traking variable

    while (n != 0) {
        cin >> n;
        if (n > 0) sum = sum + n;
    }

    cout << "The sum of positive integers is: " << sum << endl;
}
