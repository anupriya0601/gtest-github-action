#include <gtest/gtest.h>
#include "StringCalculator.h"
#include <tuple>

using ::testing::_;

//Fixture
class StringCalculatorAddTestFixture:public testing::Test{
  protected:
    StringCalculator calculator;
};

class StringCalculatorParamFixture: public StringCalculatorAddTestFixture,
                                    public testing::WithParamInterface<std::tuple<std::string,int>> {
                                    
}

INSTANTIATE_TEST_SUITE_P(SingleNumerParameter, string_calculator_add_Parameter_Fixture,
                         ::testing::Values(
                             std::make_tuple("1", 1),
                             std::make_tuple("1,2",3)
));

TEST_P(string_calculator_add_Parameter_Fixture, CheckCalculatorResult) {
    string input=std::get<0>(GetParam());
  int expectedsum=std::get<1>(GetParam());
  //Act
  int actualSum=calculator.Add(input);
  //Assert
  ASSERT_EQ(actualSum,expectedsum);
}