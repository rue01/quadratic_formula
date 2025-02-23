// Quadratic Formula.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//}

#include <iostream>
#include <cmath>

int main() {

	float a, b, c;

	std::cout << "Enter a:";
	std::cin >> a;

	std::cout << "Enter b:";
	std::cin >> b;

	std::cout << "Enter c:";
	std::cin >> c;

	float root1, root2;

	root1 = (-b + std::sqrt(std::pow(b, 2) - (4 * a * c))) / (2 * a);
	root2 = (-b - std::sqrt(std::pow(b, 2) - (4 * a * c))) / (2 * a);

	std::cout << root1 << "\n";
	std::cout << root2 << "\n";
}