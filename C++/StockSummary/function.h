// Function
// Develop your function here
/* ----------------------------------------------------- */
std::string stockSummary(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories)
{
    std::string output = "";
    if (lstOfArt.size() == 0 || categories.size() == 0)
        return output;
    //output += "(A : 200) - (B : 1140)\n";
    //traverse the list of categories
    for (int i = 0; i < categories.size(); i++)
    {
      
        //traverse the list of artworks
        // {"ABAR 200", "CDXE 500", "BKWR 250", "BTSQ 890", "DRTY 600"}
        int sum = 0;
        for (int j = 0; j < lstOfArt.size(); j++)
        {
            //check if the first letter in listOfArt is equal to the first letter in categories
            if (lstOfArt[j][0] == categories[i][0])
            {
                //split the lstOfArt by space
                std::string delimiter = " ";
                std::string token = lstOfArt[j].substr(lstOfArt[j].find(delimiter)+1,lstOfArt[j].size()-1);
                sum += std::stoi(token);
            }   
        }
        output += "(";
        output += categories[i][0];
        output += " : ";
        output += std::to_string(sum);
        output += ")";
        //if i is not the last category
        if (i < categories.size() - 1)
        {
            output += " - ";
        }
    }

    return output;
};
/* ----------------------------------------------------- */