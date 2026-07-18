#include "Memory.h"

using namespace std;

Memory::Memory()
{
   
}

void Memory::storeResponse(string input)
{
    previousResponses[input]++;
}

bool Memory::isRepeated(string input)
{
    if (previousResponses.find(input) != previousResponses.end())
    {
        return true;
    }

    return false;
}
