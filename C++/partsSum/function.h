// Function
// Develop your function here
/* ----------------------------------------------------- */
std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& input0)
{
	std::vector<unsigned long long> result{};
	unsigned long long sum = 0;
	for (unsigned long long i = 0; i < input0.size(); i++)
	{
		sum += input0[i];
	}
	result.push_back(sum);
	for (size_t i = 0; i < input0.size(); i++)
	{
		sum -= input0[i];
		result.push_back(sum);
	}
	return result;
}
/* ----------------------------------------------------- */