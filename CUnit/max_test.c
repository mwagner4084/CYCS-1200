/* Based on an example from Wayne Pollock at http://wpollock.com/CPlus/CUnitNotes.htm */

#include "CUnit/CUnit.h"
#include "CUnit/Basic.h"
//#include "CUnit/Automated.h"
//#include "CUnit/Console.h"

#include "max.h"

#include <stdio.h>  // for printf

/* Test Suite setup and cleanup functions: */

int init_suite(void) { return 0; }
int clean_suite(void) { return 0; }

/************* Test case functions ****************/

void test_case_sample(void)
{
   CU_ASSERT(CU_TRUE);
   CU_ASSERT_NOT_EQUAL(2, -1);
   CU_ASSERT_STRING_EQUAL("string #1", "string #1");
   CU_ASSERT_STRING_NOT_EQUAL("string #1", "string #2");

   CU_ASSERT(CU_FALSE);
   CU_ASSERT_EQUAL(2, 3);
   CU_ASSERT_STRING_NOT_EQUAL("string #1", "string #1");
   CU_ASSERT_STRING_EQUAL("string #1", "string #2");
}

void max_test_1(void) {
  CU_ASSERT_EQUAL( max(1,2), 2);
  CU_ASSERT_EQUAL( max(2,1), 2);
}

void max_test_2(void) {
  CU_ASSERT_EQUAL( max(2,2), 2);
  CU_ASSERT_EQUAL( max(0,0), 0);
  CU_ASSERT_EQUAL( max(-1,-1), -1);
}

void max_test_3(void) {
  CU_ASSERT_EQUAL( max(-1,-2), -1);
}

void maxadd_test_1(void) {
  CU_ASSERT_EQUAL( maxadd(1,2), 3);
  CU_ASSERT_EQUAL( maxadd(-4,1), -3);
}

void maxsqceil_test_1(void) {
   CU_ASSERT_EQUAL( maxsqceil(16), 4);
   CU_ASSERT_EQUAL( maxsqceil(15), 4);
}

void maxavg_test_1(void) {
   CU_ASSERT_EQUAL( maxavg(3, 5, 7), 5);
   CU_ASSERT_EQUAL( maxavg(3, 7, 7), 5.66);
}

/************* Test Runner Code goes here **************/

int main ( void )
{
   CU_pSuite pSuite = NULL;

   /* initialize the CUnit test registry */
   if ( CUE_SUCCESS != CU_initialize_registry() )
      return CU_get_error();

   /* add a suite to the registry */
   pSuite = CU_add_suite( "max_test_suite", init_suite, clean_suite );
   if ( NULL == pSuite ) {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* add the tests to the suite */
   if ( (NULL == CU_add_test(pSuite, "max_test_1", max_test_1)) ||
        (NULL == CU_add_test(pSuite, "max_test_2", max_test_2)) ||
        (NULL == CU_add_test(pSuite, "max_test_3", max_test_3)) ||
        (NULL == CU_add_test(pSuite, "maxadd_test_1", maxadd_test_1)) ||
        (NULL == CU_add_test(pSuite, "maxsqceil_test_1", maxsqceil_test_1)) ||
        (NULL == CU_add_test(pSuite, "maxavg_test_1", maxavg_test_1))
      )
   {
      CU_cleanup_registry();
      return CU_get_error();
   }

   // Run all tests using the basic interface
   CU_basic_set_mode(CU_BRM_VERBOSE);
   CU_basic_run_tests();
   printf("\n");
   CU_basic_show_failures(CU_get_failure_list());
   printf("\n\n");
/*
   // Run all tests using the automated interface
   CU_automated_run_tests();
   CU_list_tests_to_file();

   // Run all tests using the console interface
   CU_console_run_tests();
*/
   /* Clean up registry and return */
   CU_cleanup_registry();
   return CU_get_error();
}
