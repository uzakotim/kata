// Function to write commands to produce tests
/* ----------------------------------------------------- */
#include "handleTest.h"
void execute_tests()
{
    // handleTest(testNumber, input, reference)
    std::string input = "abcd\nefgh\nijkl\nmnop"; 
    std::string check = "dcba\nhgfe\nlkji\nponm"; 
    handleTest(1,input,check);
}
/* ----------------------------------------------------- */
