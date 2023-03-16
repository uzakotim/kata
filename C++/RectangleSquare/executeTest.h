// Function to write commands to produce tests
// Write your tests here
/* ----------------------------------------------------- */
#include "handleTest.h"
void execute_tests()
{
	// handleTest(testNumber,int input0,int input1, reference)
	handleTest(1,5,5, {});
	handleTest(2,5,3, {3,2,1,1});
}
/* ----------------------------------------------------- */
