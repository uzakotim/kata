// Function to write commands to produce tests
// Write your tests here
/* ----------------------------------------------------- */
#include "handleTest.h"
void execute_tests()
{
	// handleTest(testNumber,std::vector<std::string> input0, reference)
	handleTest(1,std::vector<std::string>{"A_Red","B_Yellow","A_Red","B_Yellow","A_Red","B_Yellow","G_Red","B_Yellow"},"Yellow");
	handleTest(2,std::vector<std::string>{"C_Yellow",
                "E_Red",
                "G_Yellow",
                "B_Red",
                "D_Yellow",
                "B_Red",
                "B_Yellow",
                "G_Red",
                "C_Yellow",
                "C_Red",
                "D_Yellow",
                "F_Red",
                "E_Yellow",
                "A_Red",
                "A_Yellow",
                "G_Red",
                "A_Yellow",
                "F_Red",
                "F_Yellow",
                "D_Red",
                "B_Yellow",
                "E_Red",
                "D_Yellow",
                "A_Red",
                "G_Yellow",
                "D_Red",
                "D_Yellow",
                "C_Red"},"Yellow");
}
/* ----------------------------------------------------- */
