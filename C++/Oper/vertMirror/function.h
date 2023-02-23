// Function
// Develop your function here
/* ----------------------------------------------------- */
std::string vertMirror(const std::string &strng)
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
    //print words
    for (int i = 0; i < words.size(); i++) {
        //reverse each word
        std::reverse(words[i].begin(), words[i].end());
    }
    std::string result = "";
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size()-1) {
            result += "\n";
        }
    }
    return result;
};
/* ----------------------------------------------------- */