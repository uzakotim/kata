// Function
// Develop your function here
/* ----------------------------------------------------- */
std::string insideOut(std::string input0)
{
	//turn "taxi" into "atix"
	std::string sentence = input0;
	//split sentence into words
	std::vector<std::string> words;
	std::string word;
	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence[i] == ' ')
		{
			words.push_back(word);
			word = "";
		}
		else
		{
			word += sentence[i];
		}
	}
	words.push_back(word);
	std::vector<std::string> reversed_words;
	for (int i =0;i<words.size();i++)
	{
		std::string original = words[i];
		
		int length = original.length();
		
		std::string result = "";
		std::string left = "";
		std::string right = "";
		std::string middle = "";

		if (length % 2 == 0)
		{
			left = original.substr(0, length / 2);
			right = original.substr(length / 2, length);
			//reverse string left
			std::reverse(left.begin(), left.end());
			std::reverse(right.begin(),right.end());
			result = left + right;
		}
		else
		{
			left = original.substr(0, length / 2);
			middle = original[length/2]; 
			right = original.substr(length / 2 + 1, length);
			std::reverse(left.begin(), left.end());
			std::reverse(right.begin(),right.end());
			result = left + middle + right;
		}
		reversed_words.push_back(result);
	}
	//create a sentence from reversed_words
	std::string result = "";
	if (reversed_words.size() == 1)
	{
		return reversed_words[0];
	}
	else 
	{
		for (int i = 0; i < reversed_words.size()-1; i++)
		{
			result += reversed_words[i] + " ";
		}
		result += reversed_words[reversed_words.size()-1];
	}
	return result;
}
/* ----------------------------------------------------- */