#include <gtest/gtest.h>
#include "StringCalculator.h"

TEST(string_calculator_add_when_passed_a_single_number,returns_0_for_empty_string){
 //Arrange
  StringCalculator calculator;
  string input="";
  int expectedsum=0;
  //Act
  int actualSum=calculator.Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}
TEST(string_calculator_add_when_passed_a_single_number,returns_0_for_zero){
  StringCalculator calculator;
  string input="0";
  int expectedsum=0;
  int actualSum=calculator.Add(input);
  ASSERT_EQ(actualSum,expectedsum);
}
TEST(string_calculator_add_when_passed_a_single_number,returns_1_for_1){
  StringCalculator calculator;
  string input="1";
  int expectedsum=1;
  int actualSum=calculator.Add(input);
  ASSERT_EQ(actualSum,expectedsum);
}