// Function
// Develop your function here
/* ----------------------------------------------------- */
std::vector<int> sqInRect(int input0,int input1)
{
	int length = input0;
	int width = input1;
	int area = length*width;
	std::vector<int> result;
	if (length == width)
		return result;
	
	while (area>0)
	{
		if (length>width)
		{
			length = length-width;
			result.push_back(width);
		}
		else if (length<width)
		{
			width = width - length;
			result.push_back(length);
		}
		else
		{
			result.push_back(length);
			length = 0;
			width = 0;
		}
		area = length*width;
	}
	return result;
}
/* ----------------------------------------------------- */