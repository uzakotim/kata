// Function
// Develop your function here
/* ----------------------------------------------------- */
std::string horMirror(const std::string &strng)
{
    //split string into arrays
    std::vector<std::string> words;
    std::string word;
    for (int i = 0; i < strng.size(); i++) {
        if (strng[i] == '\n') {
            words.push_back(word);
            word = "";
        }
        else {
            word += strng[i];
        }
    }
    words.push_back(word);
    //reverse words
    std::reverse(words.begin(), words.end());
    std::string result = "";
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size()-1) {
            result += "\n";
        }
    }
    return result;
};