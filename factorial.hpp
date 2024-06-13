#ifndef FACTORIAL_HPP
#define FACTORIAL_HPP

/* Compute the factorial of an integer */
constexpr int factorial(int arg) {
	if (arg < 0) { return arg; }
	else if (arg == 0) { return 1; }
	else {
		int result = 1;
		while (arg > 1) {
			result *= arg;
			arg--;
		}
		return result;
	}
}

#endif // FACTORIAL_HPP
