// Function
// Develop your function here
/* ----------------------------------------------------- */
std::vector<std::vector<int>> multiplication_table(int input0)
{
	std::vector<int> init_row;
	std::vector<std::vector<int>> result;
	for (int i =1; i<=input0; i++)
	{
		init_row.push_back(i);
	}
	result.push_back(init_row);
	for (int i = 2; i <= input0; i++)
	{
		std::vector<int> temp;
		for (int j = 0; j < input0; j++)
		{
			temp.push_back(init_row[j]*i);
		}
		result.push_back(temp);
	}
	return result;
}
/* ----------------------------------------------------- */