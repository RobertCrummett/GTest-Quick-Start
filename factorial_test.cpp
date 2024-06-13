#include "factorial.hpp"

#include <limits>
#include <vector>

#include <gtest/gtest.h>
namespace {

	TEST(FactorialTest, Negative) {
		// Test the first couple negative integers
		std::vector<int> negative_inputs = {-1, -2, -3, -4, -10, -100};
		for (int arg : negative_inputs) {
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
		// Test zero case
		std::vector<int> positive_inputs = {2, 3, 4, 5};
		std::vector<int> positive_outputs = {2, 6, 24, 120};

		for (size_t i = 0; i < positive_inputs.size(); i++) {
			int arg      = positive_inputs.at(i);
			int expected = positive_outputs.at(i);
			int recieved = factorial(arg);
			EXPECT_EQ(expected, recieved) << "Expected factorial(" << arg << ") == " << expected << " but computed " << recieved;
		}
	}
} // namespace

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
