// Function to write commands to produce tests
/* ----------------------------------------------------- */
#include "handleTest.h"
void execute_tests()
{
    // handleTest(testNumber, input, reference)
    std::string input = "abcd\nefgh\nijkl\nmnop"; 
    std::string check = "mnop\nijkl\nefgh\nabcd"; 
    handleTest(1,input,check);   
}
/* ----------------------------------------------------- */
