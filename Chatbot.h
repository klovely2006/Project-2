#ifndef CHATBOT_H
#define CHATBOT_H

#include <iostream>
#include <string>

#include "PatternMatcher.h"
#include "Memory.h"

using namespace std;

class Chatbot
{
private:

    PatternMatcher matcher;

    Memory memory;


public:

    Chatbot();

    void run();

};

#endif
