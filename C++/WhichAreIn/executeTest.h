// Function to write commands to produce tests
/* ----------------------------------------------------- */
#include "handleTest.h"
void execute_tests()
{
    // handleTest(testNumber, input, reference)
    std::vector<std::string> arr1 = { "arp", "live", "strong" };
    std::vector<std::string> arr2 = { "lively", "alive", "harp", "sharp", "armstrong" };
    std::vector<std::string> sol1 = { "arp", "live", "strong" };
    handleTest(1,arr1,arr2,sol1);    
}
/* ----------------------------------------------------- */
