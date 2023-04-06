// Handle Test Function
/* ----------------------------------------------------- */
bool err;
#define IS_TRUE(x) {if (!(x)) {\
	std::cerr<<"⛔️: "  " FAILED" <<std::endl;\
	err = true;}}

/* ----------------------------------------------------- */
void handleTest(int test_number, int input0, int check)
{
	int result = loop(input0);
	std::cout<<"TEST "<<test_number<<std::endl;
	IS_TRUE(result == check);
	if (err==false)
		std::cout<<"✅: PASSED\n";
}
/* ----------------------------------------------------- */
