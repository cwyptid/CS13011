// asks for gender, weight, and height to calculate BMR and how many donuts one can consume
// Eddie Lampert
// 2/19/20

#include<iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
	double bmrMen(double, double, int);
	double bmrWomen(double, double, int);


	const int calories_in_doughnut = 195; // constant for the number of calories in a doughnut
	double height_inches, height_feet, weight, bmr;
	int age, num_doughnuts;
	char gender;

	// gender of the user
	cout << "Enter your gender(M - for men, F - for women): ";
	cin >> gender;
	// age of the user
	cout << "Enter your age (in years): ";
	cin >> age;
	// weight of the user
	cout << "Enter your weight (in pounds): ";
	cin >> weight;
	// height of the user (5 4 for 5 foot 4 inches)
	cout << "Enter height (in feet first and inches separated by space): ";
	cin >> height_feet >> height_inches;

	// total height in inches
	height_inches += height_feet * 12;

	// call the appropriate function for the users gender
	if (gender == 'm' || gender == 'M') // men
		bmr = bmrMen(height_inches, weight, age);
	else // women
		bmr = bmrWomen(height_inches, weight, age);

	// donut calculation
	num_doughnuts = bmr / calories_in_doughnut;

	// prints results
	cout << "BMR : " << bmr << "\nNumber of doughnuts you can eat: " << num_doughnuts << endl;
	return 0;
}

// function that calculates the BMR of a women given its height (in inches), weight(in pounds) and age (in years)
double bmrWomen(double height, double weight, int age)
{
	return 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
}

// function that calculates the BMR of a men given its height (in inches), weight(in pounds) and age (in years)
double bmrMen(double height, double weight, int age)
{
	return 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
}
