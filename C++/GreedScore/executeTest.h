// Function to write commands to produce tests
// Write your tests here
/* ----------------------------------------------------- */
#include "handleTest.h"
void execute_tests()
{
	// handleTest(testNumber,const std::vector<int>& input0, reference)
	handleTest(1,{2,3,4,6,2}, 0);
	handleTest(2,{2,4,4,5,4}, 450);
	handleTest(3,{1,4,4,4,5}, 550);
}
/* ----------------------------------------------------- */
