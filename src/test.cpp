#include "settings.h"

#if configUNIT_TESTING_MODE
#include <Arduino.h>
#include "calculus.h"
#include "misc.h"
#include "unity.h"

#define defCONFIG_UNITY_ENABLE_FLOAT 1

void setUp()
{
  printf("setUp my_test\n");
}

void tearDown()
{
  printf("tearDown my_test\n");
}

void resetTest(void)
{
  tearDown();
  setUp();
}

void test_my_sine()
{
  TEST_ASSERT_EQUAL_FLOAT(derivative(my_sine, 1.00, CENTRAL, 0.01), 0.540293);
  TEST_ASSERT_EQUAL_FLOAT(derivative(my_sine, 2.00, CENTRAL, 0.01), -0.416140);
  TEST_ASSERT_EQUAL_FLOAT(derivative(my_sine, 3.00, CENTRAL, 0.01), -0.989976);
  TEST_ASSERT_EQUAL_FLOAT(derivative(my_sine, 4.00, CENTRAL, 0.01), -0.653633);
  TEST_ASSERT_EQUAL_FLOAT(derivative(my_sine, 5.00, CENTRAL, 0.01), 0.283657);
  TEST_ASSERT_EQUAL_FLOAT(derivative(my_sine, 6.00, CENTRAL, 0.01), 0.960154);
  TEST_ASSERT_EQUAL_FLOAT(derivative(my_sine, 7.00, CENTRAL, 0.01), 0.753890);
  TEST_ASSERT_EQUAL_FLOAT(derivative(my_sine, 8.00, CENTRAL, 0.01), -0.145498);
  TEST_ASSERT_EQUAL_FLOAT(derivative(my_sine, 9.00, CENTRAL, 0.01), -0.911115);
  TEST_ASSERT_EQUAL_FLOAT(derivative(my_sine, 10.00, CENTRAL, 0.01), -0.839058);
}

void setup()
{
  Serial.begin(115200);
  UnityBegin("..\\Test\\my_test.c");
  RUN_TEST(test_my_sine);
  UnityEnd();
}

void loop()
{
}

#endif