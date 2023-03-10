// Function
// Develop your function here
/* ----------------------------------------------------- */
std::string sum_strings(const std::string& input0,const std::string& input1)
{
	std::string str1 = input0;
	std::string str2 = input1;

	if (str1.size() > str2.size())
	{
		std::swap(str1, str2);
	}
	//reverse str1
	std::reverse(str1.begin(), str1.end());
	//reverse str2
	std::reverse(str2.begin(), str2.end());
	std::string result = "";
	int remainder = 0;
	for (int i = 0; i < str1.size(); i++)
	{
		int number1 = str1[i] - '0';
		int number2 = str2[i] - '0';
		int sum = number1 + number2 + remainder;
		result += std::to_string(sum%10);
		remainder = sum / 10;
	}
	for (int i = str1.size(); i < str2.size(); i++)
	{
		int number2 = str2[i] - '0';
		int sum = number2 + remainder;
		result += std::to_string(sum%10);
		remainder = sum / 10;
	}
	if (remainder != 0)
	{
		result += std::to_string(remainder);
	}
	//reverse result
	std::reverse(result.begin(), result.end());
	return result;
}
/* ----------------------------------------------------- */