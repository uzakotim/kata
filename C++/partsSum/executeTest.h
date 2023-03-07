// Function to write commands to produce tests
// Write your tests here
/* ----------------------------------------------------- */
#include "handleTest.h"
void execute_tests()
{
	// handleTest(testNumber,const std::vector<unsigned long long>& input0, reference)
	handleTest(1,{0, 1, 3, 6, 10}, {20, 20, 19, 16, 10, 0});
	handleTest(2,{1, 2, 3, 4, 5, 6}, {21, 20, 18, 15, 11, 6, 0});
}
/* ----------------------------------------------------- */
