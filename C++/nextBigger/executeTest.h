// Function to write commands to produce tests
/* ----------------------------------------------------- */
#include "handleTest.h"
void execute_tests()
{
    // handleTest(testNumber, input, reference)
    long input = 123;
    long check = 132;
    handleTest(1,input,check); 
    input = 111;
    check = -1;
    handleTest(2,input,check); 
    input = 100000000000000001;
    check = 100000000000000010;  
    handleTest(3,input,check); 
}
/* ----------------------------------------------------- */
