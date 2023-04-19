// Function
// Develop your function here
/* ----------------------------------------------------- */
int result = 0;
std::vector<int> count_three (std::vector<int> temp, int number, int reward)
{
	int count = 0;
	std::vector<int> indeces{};
	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i] == number)
		{
			count++;
			indeces.push_back(i);
		}
		if (count==3)
		{
			result += reward;
			//remove elements at indeces in input0
			for (int i = 0; i < indeces.size(); i++)
			{
				temp[indeces[i]] = 0;
			}
			break;
		}
	}
	
	return temp;
}
std::vector<int> count_one (std::vector<int> temp, int number, int reward)
{
	std::vector<int> indeces{};
	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i] == number)
		{
			indeces.push_back(i);
			result += reward;
		}
		
	}
	//remove elements at indeces in input0
	for (int i = 0; i < indeces.size(); i++)
	{
		temp[indeces[i]] = 0;
	}
	return temp;
}

int score(const std::vector<int>& input0)
{
	/*
	Three 1's => 1000 points
	Three 6's =>  600 points
	Three 5's =>  500 points
	Three 4's =>  400 points
	Three 3's =>  300 points
	Three 2's =>  200 points
	One   1   =>  100 points
	One   5   =>   50 point
	*/
	result= 0;
	std::vector<int> temp = input0;
	temp = count_three(temp, 1, 1000);
	temp = count_three(temp, 6, 600);
	temp = count_three(temp, 5, 500);
	temp = count_three(temp, 4, 400);
	temp = count_three(temp, 3, 300);
	temp = count_three(temp, 2, 200);
	temp = count_one  (temp, 1, 100);
	temp = count_one  (temp, 5, 50);

	return result;
}
/* ----------------------------------------------------- */