// #include <iostream>

// int readNumber(int x)
// {
// 	std::cout << "Please enter a number: ";
// 	std::cin >> x;
// 	return x;
// }

// void writeAnswer(int x)
// {
// 	std::cout << "The sum is: " << x << '\n';
// }

// int main()
// {
// 	int x {};
// 	readNumber(x);
// 	x = x + readNumber(x);
// 	writeAnswer(x);

// 	return 0;
// }

#include <iostream>

int readNumber() // removed parameters
{
	std::cout << "Please enter a number: ";
	int x {}; // declared x here
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x {readNumber()}; // initizaling with new readNumber() function
	x = x + readNumber(); // removed parameters 
	writeAnswer(x);

	return 0;
}