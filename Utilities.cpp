#include "Utilities.h"

using namespace std;

string toLowerCase(string input)
{
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    return input;
}

string removePunctuation(string input)
{
    string result = "";

    for (char ch : input)
    {
        if (!ispunct(ch))
        {
            result += ch;
        }
    }

    return result;
}

string trim(string input)
{
    size_t start = input.find_first_not_of(" ");

    size_t end = input.find_last_not_of(" ");

    if (start == string::npos)
    {
        return "";
    }

    return input.substr(start, end - start + 1);
}
