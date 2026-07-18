#ifndef PATTERNMATCHER_H
#define PATTERNMATCHER_H

#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

class PatternMatcher
{
private:
    vector<pair<regex, string>> patterns;

public:
    PatternMatcher();

    string getResponse(string input);
};

#endif
