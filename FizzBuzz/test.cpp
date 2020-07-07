#include "pch.h"
#include "FizzBuzz.h"
#include <string>
#include "gtest/gtest.h"

using namespace std;

TEST(FizzBuzzTestSuite, TestInput1) {

//arrange
	int test_input = 1;
	string expected_output = "1";
	string test_output = "";

//act
	test_output = fizzBuzz(test_input);

//assert
	EXPECT_EQ(expected_output, test_output);
}
TEST(FizzBuzzTestSuite, TestInput2) {

	//arrange
	int test_input = 2;
	string expected_output = "2";
	string test_output = "";

	//act
	test_output = fizzBuzz(test_input);

	//assert
	EXPECT_EQ(expected_output, test_output);

}
TEST(FizzBuzzTestSuite, TestInput3) {

	//arrange
	int test_input = 3;
	string expected_output = "FIZZ";
	string test_output = "";

	//act
	test_output = fizzBuzz(test_input);

	//assert
	EXPECT_EQ(expected_output, test_output);

}
int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}