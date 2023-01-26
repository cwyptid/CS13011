// asks for figure size and prints figures accordingly
// Eddie Lampert
// 02/05/2021

#include <iostream>
using namespace std;

int main()
{
	int n;
	int z = 1;
	cout << "Input number:"; cin >> n;

	// print square
	for (int i = 0; i < n; i++)
	{
		// nested loop
		for (int j = 0; j < n; j++)
		{
			// print asterisk
			cout << "*";
		}
		// break
		cout << endl;
	}

	// break
	cout << endl;

	// print diagonal
	for (int i = 0; i < n; i++)
	{
		// nested loop
		for (int j = 0; j < n; j++)
		{
			// check
			if (i == j)
			{
				// print asterisk
				cout << "*";
			}
			else
			{
				// print space
				cout << " ";
			}
		}
		// break
		cout << endl;
	}

	// break
	cout << endl;

	// prints second diagonal
	for (int i = 0; i < n; i++)
	{
		// nested loop
		for (int j = 0; j < n; j++)
		{
			// check
			if (i + j == (n - 1))
			{
				// print asterisk
				cout << "*";
			}
			else
			{
				// print space
				cout << " ";
			}
		}
		// break
		cout << endl;
	}

	// break
	cout << endl;

	// prints hollow square
	for (int i = 0; i < n; i++)
	{
		// nested loop
		for (int j = 0; j < n; j++)
		{
			// check
			if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
			{
				// print asterisk
				cout << "*";
			}
			else
			{
				// print space
				cout << " ";
			}
		}
		// break
		cout << endl;
	}

	// break
	cout << endl;

	// prints diamond
	for (int i = 0; i <= n; i++)
	{
		// nested loop
		for (int j = n; j > i; j--)
		{
			// print space
			cout << " "; 
		}

			// print asterisk
			cout << "*";  

		// check
		if (i > 0)
		{
			// nested loop 
			for (int k = 1; k <= z; k++)
			{
				// print space
				cout << " ";
			}
				z += 2;
				// print asterisk
				cout << "*";
		}
		// break
		cout << endl; 
	}

		z -= 4;

	for (int i = 0; i <= n - 1; i++)
	{
		// nested loop 
		for (int j = 0; j <= i; j++)
		{
			// prints space
			cout << " ";
		}

			// prints asterisk 
			cout << "*";

		// nested loop 
		for (int k = 1; k <= z; k++)
		{
			// prints space
			cout << " ";
		}

		z -= 2;

		// check 
		if (i != n - 1)
		{
			// prints asterisk 
			cout << "*";
		}

		//break
		cout << endl;
	}
}