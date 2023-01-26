// prints figures depending on user input and utilizes the files figures.h and figures.cpp
// Eddie Lampert
// 2/23/2021

#include<iostream>
#include "figures.cpp"

using std::cin; using std::cout; using std::endl;

int main()
{

    do {
        cout << endl;
        cout << "SELECT A FIGURE";
        cout << endl;
        cout << " 1. square";
        cout << endl;
        cout << " 2. slash";
        cout << endl;
        cout << " 3. backlash";
        cout << endl;
        cout << " 4. diamond";
        cout << endl;

        cin >> operation;

        switch (operation) {

            //case 1 - square
        case 1:

            cout << endl;
            cout << "Input size:"; cin >> n;
            cout << endl;
            cout << "Filled or hollow? F for filled, H for hollow"; cin >> filled;
            cout << endl;
            if (filled == 'f' || filled == 'F') {
                filledsquare(n);            
            }
            else {
                hollowsquare(n);           
            }

            break;

            //case 2 - slash
        case 2:

            cout << endl;
            cout << "Input size:"; cin >> n;
            cout << endl;
            slash(n);                       
            break;

            //case 3 - backslash
        case 3:

            cout << endl;
            cout << "Input size:"; cin >> n;
            cout << endl;
            backslash(n);                   
            break;

            //case 4 - diamond
        case 4:

            cout << endl;
            cout << "Input size:"; cin >> n;
            cout << endl;
            diamond(n);                     
            break;
        }

    } while (operation >= 1 && operation <= 4); //ensures the user input is valid
    //denides invalid input
    cout << "INPUT INVALID, TRY AGAIN";
    return 0;
}