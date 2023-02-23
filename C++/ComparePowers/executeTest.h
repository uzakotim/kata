// Function to write commands to produce tests
/* ----------------------------------------------------- */
#include "handleTest.h"
void execute_tests()
{
    // handleTest(testNumber, input, reference)
    std::pair<long, long> input1 = {2, 10};
    std::pair<long, long> input2 = {2, 15};
    handleTest(1,input1,input2,1);  
    input1 = {1024, 97};
    input2 = {1024, 81};
    handleTest(2,input1,input2,-1);  
    input1 = {2, 4};
    input2 = {4, 2};
    handleTest(3,input1,input2,0);  
    input1 = {1, 10};
    input2 = {1, 15};
    handleTest(4,input1,input2,0);  
    input1 = {2, 100};
    input2 = {2, 100};
    handleTest(5,input1,input2,0); 
    input1 = {34, 98};
    input2 = {51, 67};
    handleTest(6,input1,input2,-1);  

}
/* ----------------------------------------------------- */
