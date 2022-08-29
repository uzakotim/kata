#include <string>
#include <iostream>

std::string to_camel_case(std::string text)
{
    for(int i =0;i<text.size();i++)
    {
        if ((text[i]=='-')||(text[i]=='_'))
        {
            text.erase(i,1);
            text[i] = toupper(text[i]);
        }
    }
    return text;
}
int main()
{
    std::string input = "A-B-C";
    std::cout<< input<<'\n'<<to_camel_case(input)<<'\n';
    return 0;
}