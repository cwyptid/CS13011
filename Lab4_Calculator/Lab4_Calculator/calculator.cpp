// prints a menu of mathematical operations and prompts the user to select one and give the required operand(s)
// Eddie Lampert
// 2/12/2021

#include<iostream> 
#include<cmath>

using std::cin; using std::cout; using std::endl;

//declaring method prototypes
int absoluteCalc(int n); //absolute value
float powerCalc(float n, float n2); //power
float rootCalc(float n); //square roots
int floorCalc(float n); //floor value

int main() {
    //initalizing variables
    int absolute;
    float root;
    float flr;
    float base, expo;
    int operation;
   
    do {
        //prints the menu for the user
        cout << " SCIENTIFIC CALCULATOR";
        cout << endl;
        cout << " 1. absolute value"; 
        cout << endl;
        cout << " 2. square root"; 
        cout << endl;
        cout << " 3. floor"; 
        cout << endl;
        cout << " 4. power"; 
        cout << endl;
        cout << " Select an operation:";
        cout << endl;

        //where the user selects the operation 
        cin >> operation;

        switch (operation) {
            
            //case 1 - absolute value
        case 1:
            cout << " Enter a number:";
            cout << endl;
            cin >> absolute;
            cout << " the absolute value of " << absolute << " is " << absoluteCalc(absolute);
            cout << endl;
            break;
            
            //case 2 - square roots
        case 2:
            cout << " Enter a number:";
            cout << endl;
            cin >> root;
            cout << " the square root of " << root << " is " << rootCalc(root);
            cout << endl;
            break;
            

            //case 3 - floor values
        case 3:
            cout << " Enter a number:";
            cout << endl;
            cin >> flr;
            cout << " the floor value of " << flr << " is " << floorCalc(flr);
            cout << endl;
            break;

            //case 4 - power 
        case 4:
            cout << " Enter base:";
            cout << endl;
            cin >> base;
            cout << " Enter exponent:";
            cout << endl;
            cin >> expo;
            cout << " " << base << " power of " << expo << " is " << powerCalc(base, expo);
            cout << endl;
            break;
        }
    } while (operation >= 1 && operation <= 4); //ensures the user input is valid
    
    //denides invalid input
    cout << "INPUT INVALID, TRY AGAIN";
}
//calculates absolute value
int absoluteCalc(int n) {
    return abs(n);
}

//calculates square roots
float rootCalc(float n) {
    return sqrt(n);
}

//calculates floor value
int floorCalc(float n) {
    return floor(n);
}

//calculates powers
float powerCalc(float n, float n2) {
    return pow(n, n2);
}