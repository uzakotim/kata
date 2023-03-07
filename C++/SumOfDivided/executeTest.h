// Function to write commands to produce tests
/* ----------------------------------------------------- */
#include "handleTest.h"
void execute_tests()
{
    // handleTest(testNumber, input, reference)
    std::vector<int> d1 = {12, 15};
    std::string sol1 = "(2 12)(3 27)(5 15)";
    handleTest(1,d1,sol1);    
    d1 = {-10, 15};
    sol1 = "(2 -10)(3 15)(5 5)";
    handleTest(2,d1,sol1);    
}
/* ----------------------------------------------------- */
