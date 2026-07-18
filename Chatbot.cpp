#include "Chatbot.h"
#include "Utilities.h"

using namespace std;


Chatbot::Chatbot()
{

}


void Chatbot::run()
{
    string input;
    string cleanedInput;

    cout << "====================================" << endl;
    cout << "        Welcome to ELIZA AI" << endl;
    cout << "====================================" << endl;
    cout << "Hello. Tell me what is on your mind." << endl;
    cout << "Type 'bye' to end the conversation." << endl;
    cout << endl;


    while (true)
    {
        cout << "You: ";
        getline(cin, input);


        cleanedInput = removePunctuation(input);
        cleanedInput = toLowerCase(cleanedInput);
        cleanedInput = trim(cleanedInput);


        if (cleanedInput == "bye")
        {
            cout << "ELIZA: Goodbye. It was nice talking with you." << endl;
            break;
        }


        if (memory.isRepeated(cleanedInput))
        {
            cout << "ELIZA: You have mentioned that before." << endl;
            cout << "ELIZA: Can you tell me something different?" << endl;
        }
        else
        {
            memory.storeResponse(cleanedInput);


            string response = matcher.getResponse(cleanedInput);

            cout << "ELIZA: " << response << endl;
        }

        cout << endl;
    }
}
