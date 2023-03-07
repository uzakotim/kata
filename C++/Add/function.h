// Function
// Develop your function here
/* ----------------------------------------------------- */
std::string add(const std::string& input0,const std::string& input1)
{

	std::string str1 = input0;
	std::string str2 = input1;
    if (input0.length() > input1.length())
        std::swap(str1, str2);
 
    // Take an empty string for storing result
    std::string str = "";
 
    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;
 
    // Initially take carry zero
    int carry = 0;
 
    // Traverse from end of both strings
    for (int i=n1-1; i>=0; i--)
    {
        // Do school mathematics, compute sum of
        // current digits and carry
        int sum = ((str1[i]-'0') +
                   (str2[i+diff]-'0') +
                   carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    // Add remaining digits of str2[]
    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    // Add remaining carry
    if (carry)
        str.push_back(carry+'0');
 
    // reverse resultant string
    reverse(str.begin(), str.end());
 
    return str;
}
/* ----------------------------------------------------- */