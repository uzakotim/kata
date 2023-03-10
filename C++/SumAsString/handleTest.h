// Handle Test Function
/* ----------------------------------------------------- */
bool err;
#define IS_TRUE(x) {if (!(x)) {\
	std::cerr<<"⛔️: "  " FAILED" <<std::endl;\
	err = true;}}

/* ----------------------------------------------------- */
void handleTest(int test_number, const std::string& input0, const std::string& input1, std::string check)
{
	std::string result = sum_strings(input0,input1);
	std::cout<<"TEST "<<test_number<<std::endl;
	IS_TRUE(result == check);
	if (err==false)
		std::cout<<"✅: PASSED\n";
}
/* ----------------------------------------------------- */
