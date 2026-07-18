#ifndef MEMORY_H
#define MEMORY_H

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Memory
{
private:
    unordered_map<string, int> previousResponses;

public:
    Memory();

    bool isRepeated(string input);

    void storeResponse(string input);
};

#endif
