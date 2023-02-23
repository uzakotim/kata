// Handle Test Function
// Ensure that type of input variable is correct
// Ensure that type of check variable is correct
// and that type of result variable matches check variable
/*----------------------------------------------------------*/
bool err;
#define IS_TRUE(x) {if (!(x)) {\
    std::cerr<<"⛔️ :"  <<" FAILED" <<std::endl;\
    err = true;}}

/*----------------------------------------------------------*/
void handleTest(int test_number, std::pair<long,long> input1, std::pair<long,long> input2, int check)
{

    int result = comparePowers(input1,input2);
    std::cout<<"TEST "<<test_number<<":"<<std::endl;
    IS_TRUE(result==check);
    if (err==false)
        std::cout<<"✅ : PASSED\n";
}
/*----------------------------------------------------------*/