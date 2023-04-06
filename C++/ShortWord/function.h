// Function
// Develop your function here
/* ----------------------------------------------------- */
int find_short(std::string input0)
{
	std::string new_word = "";
	std::vector<int> words{};
	for (auto x : input0)
	{
		if (x == ' ')
		{
			words.push_back(new_word.length());
			new_word = "";
		}else
		{
			new_word+=x;
		}
	}
	words.push_back(new_word.length());
	int min = 1000000;
	for (size_t i =0;i<words.size();i++)
	{
		if (words[i]<=min)
		{
			min = words[i];
		}
	}
	std::cout<<min<<'\n';
	return min;
}
/* ----------------------------------------------------- */