#include <gtest/gtest.h>
#include "TestChallenge.h"

TEST(TestChallengeTestSuite, Test1){
//Arrange
  int expectedFailureCount=1;
  float inputTemp = 100;
 //Act
  alertInCelcius(inputTemp);
  //Assert
  ASSERT_EQ(expectedFailureCount, alertFailureCount);
  
}
TEST(TestChallengeTestSuite, Test2){
//Arrange
  int expectedFailureCount=3;
  float inputTemp = 100;
 //Act
  alertInCelcius(inputTemp);
  alertInCelcius(inputTemp+5);
  //Assert
  ASSERT_EQ(expectedFailureCount, alertFailureCount);
  
}