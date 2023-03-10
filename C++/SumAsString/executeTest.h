// Function to write commands to produce tests
// Write your tests here
/* ----------------------------------------------------- */
#include "handleTest.h"
void execute_tests()
{
	// handleTest(testNumber,const std::string& input0,const std::string& input1, reference)
	handleTest(1,"2","9", "11");
	handleTest(2,"123","456", "579");
	handleTest(3,"4123","456", "4579");
}
/* ----------------------------------------------------- */
