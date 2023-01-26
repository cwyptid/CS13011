#include<iostream>
#include "figures.h"

using std::cin; using std::cout; using std::endl;

static int n;
static int z = 1;
static int operation;
static char filled;

inline void filledsquare(int n)
{ 
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
}
inline void hollowsquare(int  n)
{
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
}
inline void slash(int  n)
{
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
}
   
inline void backslash(int  n)
{
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
}
inline void diamond(int  n)
{
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