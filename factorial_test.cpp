#include "factorial.hpp"

#include <limits>
#include <vector>
#include <ranges>

#include <gtest/gtest.h>
namespace {

	TEST(FactorialTest, Negative) {
		// Test the first couple negative integers
		std::vector<int> inputs {-1, -2, -3, -4, -10, -100};
		for (int arg : inputs) {
			EXPECT_EQ(arg, factorial(arg)) << "Expected negative numbers to simply return themselves, but " << arg << " does not do that.";
		}
	}
	
	TEST(FactorialTest, Smallest) {
		// Test extreme case - smallest int
		int smallest = std::numeric_limits<int>::min();
		EXPECT_EQ(smallest, factorial(smallest)) << "Smallest possible int value does not simply return itself!";
	}

	TEST(FactorialTest, Zero) {
		// Test zero case
		EXPECT_EQ(1, factorial(0)) << "factorial(0) is defined as equal to 1.";
	}

	TEST(FactorialTest, One) {
		// Test one case
		EXPECT_EQ(1, factorial(1)) << "factorial(1) is defined as equal to 1.";
	}

	TEST(FactorialTest, Positive) {
		// Test multiple positives
		std::vector<int> inputs {2, 3, 4, 5};
		std::vector<int> outputs {2, 6, 24, 120};

		for (auto [arg, exp] : std::views::zip(inputs, outputs)) {
			EXPECT_EQ(exp, factorial(arg)) << "Expected factorial(" << arg << ") == " << exp << " but computed " << factorial(arg);
		}
	}
} // namespace

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
