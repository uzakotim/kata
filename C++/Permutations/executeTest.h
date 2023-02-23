// Function to write commands to produce tests
/* ----------------------------------------------------- */
#include "handleTest.h"
void execute_tests()
{
    // handleTest(testNumber, input, reference)
    std::string input = "aabb"; 
    std::vector<std::string> check = {"aabb", "abab", "abba", "baab", "baba", "bbaa"}; 
    handleTest(1,input,check);   
    input = "ab";
    check = {"ab", "ba"};
    handleTest(2,input,check);   
}
/* ----------------------------------------------------- */
