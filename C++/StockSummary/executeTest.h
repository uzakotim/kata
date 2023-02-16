// Function to write commands to produce tests
/* ----------------------------------------------------- */
#include "handleTest.h"
void execute_tests()
{
    // handleTest(testNumber, input, reference)
    std::vector<std::string> lstOfArt = {"ABAR 200", "CDXE 500", "BKWR 250", "BTSQ 890", "DRTY 600"}; 
    std::vector<std::string> categories = {"A", "B"};
    handleTest(1,lstOfArt, categories,"(A : 200) - (B : 1140)");    
}
/* ----------------------------------------------------- */
