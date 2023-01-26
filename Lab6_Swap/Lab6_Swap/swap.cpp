// sorts three integers in increasing order
// using the swap function.
// Eddie Lampert
// 2/26/2021

#include <iostream>

using std::cin; using std::cout; using std::endl;

void swap(int& left, int& right); // function prototype

// interchanges left and right
void swap(int& left, int& right) {
    const int tmp = left;
    left = right;
    right = tmp;
}

int main() {

    // inputs the numbers
    cout << "Enter three numbers: ";
    int x, y, z;
    cin >> x >> y >> z;

    if (x > y) {
        swap(x, y);
    }

    // orders x and z
    if (x > z) {
        swap(x, z);
    }

    // order y and z
    if (y > z) {
        swap(y, z);
    }

    // outputs the sorted numbers
    cout << "The sorted numbers are: ";
    cout << x << " " << y << " " << z << endl;

}