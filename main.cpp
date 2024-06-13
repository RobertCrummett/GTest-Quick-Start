#include "factorial.hpp"
#include <iostream>

int main()
{
        std::cout << "If you are seeing this, main was run successfully!" << std::endl;

	std::cout << "factorial(0) == " << factorial(0) << std::endl;
	std::cout << "factorial(1) == " << factorial(1) << std::endl;
	std::cout << "factorial(2) == " << factorial(2) << std::endl;
	std::cout << "factorial(3) == " << factorial(3) << std::endl;
	std::cout << "factorial(5) == " << factorial(5) << std::endl;

	return EXIT_SUCCESS;
}
