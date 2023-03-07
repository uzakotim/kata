// Handle Test Function
/* ----------------------------------------------------- */
bool err;
#define IS_TRUE(x) {if (!(x)) {\
	std::cerr<<"⛔️: "  " FAILED" <<std::endl;\
	err = true;}}

/* ----------------------------------------------------- */
void handleTest(int test_number, const std::vector<unsigned long long>& input0, std::vector<unsigned long long> check)
{
	std::vector<unsigned long long> result = partsSum(input0);
	std::cout<<"TEST "<<test_number<<std::endl;
	IS_TRUE(result == check);
	if (err==false)
		std::cout<<"✅: PASSED\n";
}
/* ----------------------------------------------------- */
