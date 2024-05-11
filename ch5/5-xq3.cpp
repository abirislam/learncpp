#include <iostream>

// gets tower height from user and returns it
// I/O can only be done at runtime thus this function is not constexpr
double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

// Returns ball height from ground after "seconds" seconds
// this is constexpr because it just calculates a value and returns it
// even though towerHeight is entered at runtime, this function should be constexpr
// if a function can be made constexpr, it should be
constexpr double calculateBallHeight(double towerHeight, int seconds)
{
    // constexpr bcz its a compile time constant
	constexpr double gravity{ 9.8 };

	// Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0
    // these values cannot be constexpr bcz their initalizers are not compile time constants
	const double distanceFallen{ (gravity * (seconds * seconds)) / 2.0 };
	const double currentHeight{ towerHeight - distanceFallen };

	return currentHeight;
}

// Prints ball height above ground
// I/O can only be done at runtime thus this function is not constexpr
void printBallHeight(double ballHeight, int seconds)
{
	if (ballHeight > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

// Calculates the current ball height and then prints it
// This is a helper function to make it easier to do this
// I/O can only be done at runtime thus this function is not constexpr
void printCalculatedBallHeight(double towerHeight, int seconds)
{
    // ballHeight can only be const since its initalizer is not a constexpr
	const double ballHeight{ calculateBallHeight(towerHeight, seconds) };
	printBallHeight(ballHeight, seconds);
}

int main()
{
	double towerHeight{ getTowerHeight() };

	printCalculatedBallHeight(towerHeight, 0);
	printCalculatedBallHeight(towerHeight, 1);
	printCalculatedBallHeight(towerHeight, 2);
	printCalculatedBallHeight(towerHeight, 3);
	printCalculatedBallHeight(towerHeight, 4);
	printCalculatedBallHeight(towerHeight, 5);

	return 0;
}
