// Function
// Develop your function here
/* ----------------------------------------------------- */
std::string solve(const std::string& str){
    //count how many letters are uppercase and lowercase in the string
    int uppercase = 0, lowercase = 0;
    for (int i = 0; i < str.length(); i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            uppercase++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z'){
            lowercase++;
        }
    }
    if (uppercase <= lowercase){
        //convert string to lowercase
        std::string lowercase_str = str;
        std::transform(lowercase_str.begin(), lowercase_str.end(), lowercase_str.begin(), ::tolower);
        return lowercase_str;
    }
    else
    {
        //convert string to uppercase
        std::string uppercase_str = str;
        std::transform(uppercase_str.begin(), uppercase_str.end(), uppercase_str.begin(), ::toupper);
        return uppercase_str;
    }
    return "";
}
/* ----------------------------------------------------- */