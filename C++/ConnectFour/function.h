// Function
// Develop your function here

// Regular convolution function.
bool findElement(std::vector<std::vector<int>> &matrix, int element) {
	for (size_t i = 0; i < matrix.size(); i++) {
		for (size_t j = 0; j < matrix[i].size(); j++) {
			if (matrix[i][j] == element) {
				return true;
			}
		}
	}
	return false;
}

std::vector<std::vector<int>> convolute( std::vector<std::vector<int>> input, std::vector<std::vector<int>> kernel)
{
    int convolute = 0; // This holds the convolution results for an index.
    int x, y; // Used for input matrix index
	std::vector<std::vector<int>> output(input.size()-kernel.size()+1, std::vector<int>(input[0].size()-kernel[0].size()+1, 0));
	// Fill output matrix: rows and columns are i and j respectively
	for (size_t i = 0; i < output.size(); i++)
	{
		for (size_t j = 0; j < output[i].size(); j++)
		{
			x = i;
			y = j;

			// Kernel rows and columns are k and l respectively
			for (size_t k = 0; k < kernel.size(); k++)
			{
				for (size_t l = 0; l < kernel[k].size(); l++)
				{
					// Convolute here.
					convolute += kernel[k][l] * input[x][y];
					y++; // Move right.
				}
				x++; // Move down.
				y = j; // Restart column position
			}
			output[i][j] = convolute; // Add result to output matrix.
			convolute = 0; // Needed before we move on to the next index.
		}
	}
	return output;
}

/* ----------------------------------------------------- */
std::string who_is_winner(std::vector<std::string> input0)
{
	//initialize 6*7 matrix to 0
	std::vector<std::vector<int>> matrixYellow(6,std::vector<int>(7,0));
	std::vector<std::vector<int>> matrixRed(6,std::vector<int>(7,0));
	std::vector<std::vector<int>> matrixOccupancy(6,std::vector<int>(7,0));
	//create mapping from char to int
	std::map<std::string,int> mapping;
	std::vector<std::vector<int>> kernelHorizontal(1,std::vector<int>(4,1));
	std::vector<std::vector<int>> kernelVertical(4,std::vector<int>(1,1));
	std::vector<std::vector<int>> kernelDiagonal1(4,std::vector<int>(4,0));
	std::vector<std::vector<int>> kernelDiagonal2(4,std::vector<int>(4,0));
	std::vector<std::vector<int>> output;
	std::vector<std::vector<int>> output2;
	std::vector<std::vector<int>> output3;
	std::vector<std::vector<int>> output4;
	bool red_win = false;
	bool yellow_win = false;
	mapping["A"]=0;
	mapping["B"]=1;
	mapping["C"]=2;
	mapping["D"]=3;
	mapping["E"]=4;
	mapping["F"]=5;
	mapping["G"]=6;

	int counter;
	
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
		{
			if (i==j)
			kernelDiagonal1[i][j] = 1;
		}
	}
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
		{
			if (i==3-j)
			kernelDiagonal2[i][j] = 1;
		}
	}
	// check Yellow matrix
	// if there is four in matrix , set yellow_win = true
	// else set yellow_win = false
	// check Red matrix 
	// if there is four in matrix , set red_win = true
	// else set red_win = false

	for (size_t i=0;i<input0.size();i++)
	{
		//split string by "_"
		std::string input = input0[i];
		//find length of input
		int length = input.length();
		std::vector<std::string> move = {input.substr(0,1),input.substr(2,length)};
		if (move[1] == "Yellow")
		{
			counter = 0;
			while (matrixOccupancy[counter][mapping[move[0]]]!=0)
			{
				counter++;
			}
			matrixOccupancy[counter][mapping[move[0]]] = 1;
			matrixYellow[counter][mapping[move[0]]]=1;
			if (yellow_win == false)
			{
				output = convolute(matrixYellow,kernelHorizontal);
				yellow_win = findElement(output,4);
			}
			if (yellow_win == false)
			{	
				output = convolute(matrixYellow,kernelVertical);
				yellow_win = findElement(output,4);
			}
			if (yellow_win == false)
			{
				output = convolute(matrixYellow,kernelDiagonal1);
				yellow_win = findElement(output,4);
			}
			if (yellow_win == false)
			{
				output = convolute(matrixYellow,kernelDiagonal2);
				yellow_win = findElement(output,4);
			}
			if (yellow_win==true)
			{
				//print matrix
				for (size_t i=0;i<matrixYellow.size();i++)
				{
					for (size_t j=0;j<matrixYellow[i].size();j++)
					{
						if (matrixYellow[i][j]==1)
						{
							std::cout<<"Y";
						}
						else
						if (matrixRed[i][j]==1)
						{
							std::cout<<"R";
						}
						else
						{
							std::cout<<"_";
						}
					}
					std::cout << std::endl;
				}
				return "Yellow";
			}
		}
		else if (move[1] == "Red")
		{
			counter = 0;
			while (matrixOccupancy[counter][mapping[move[0]]]!=0)
			{
				counter++;
			}
			matrixOccupancy[counter][mapping[move[0]]] = 1;
			matrixRed[counter][mapping[move[0]]]=1;

			if (red_win == false)
			{
				output = convolute(matrixRed,kernelHorizontal);
				red_win = findElement(output,4);
			}
			if (red_win == false)
			{	
				output = convolute(matrixRed,kernelVertical);
				red_win = findElement(output,4);
			}
			if (red_win == false)
			{
				output = convolute(matrixRed,kernelDiagonal1);
				red_win = findElement(output,4);
			}
			if (red_win == false)
			{
				output = convolute(matrixRed,kernelDiagonal2);
				red_win = findElement(output,4);
			}

			
			if (red_win==true)
			{
				//print matrix
				for (size_t i=0;i<matrixYellow.size();i++)
				{
					for (size_t j=0;j<matrixYellow[i].size();j++)
					{
						if (matrixYellow[i][j]==1)
						{
							std::cout<<"Y";
						}
						else
						if (matrixRed[i][j]==1)
						{
							std::cout<<"R";
						}
						else
						{
							std::cout<<"_";
						}
					}
					std::cout << std::endl;
				}
				return "Red";
			}
		}
		// check matrices
	}

	//print matrix
	for (size_t i=0;i<matrixYellow.size();i++)
	{
		for (size_t j=0;j<matrixYellow[i].size();j++)
		{
			if (matrixYellow[i][j]==1)
			{
				std::cout<<"Y";
			}
			else
			if (matrixRed[i][j]==1)
			{
				std::cout<<"R";
			}
			else
			{
				std::cout<<"_";
			}
		}
		std::cout << std::endl;
	}
	return "Draw";
}
/* ----------------------------------------------------- */