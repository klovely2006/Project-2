# Project-2

Eliza Chatbot Project

Group Member: 
Kacy Hines

How to Compile:

g++ -std=c++17 -Wall -Wextra -o eliza *.cpp

How to Run: 

./eliza

The program will:
1. Start the ELIZA chatbot conversation
2. Accept natural language input from the user
3. Analyze responses using regular expressions
4. Generate responses based on detected topics
5. Remember previous user responses
6. Detect repeated answers
7. End the conversation when the user types "bye"

Source Files:

main.cpp

Chatbot.h

Chatbot.cpp

PatternMatcher.h

PatternMatcher.cpp

Memory.h

Memory.cpp

Utilities.h

Utilities.cpp

Project Description:

Based on the original ELIZA natural language processing tool, this project replicates a basic AI chatbot.

Using C++ regular expressions to recognize patterns in user input and produce suitable responses, the system mimics a conversation between a user and a doctor.

Machine learning is not used by the chatbot. Instead, it creates the illusion of knowledge using pattern matching, keyword detection, and answer substitution.

Major Functionality Includes:
- Processing natural language user input
- Cleaning and formatting user responses
- Matching user statements using C++ regular expressions
- Generating responses based on conversation topics
- Detecting repeated user responses
- Maintaining conversation memory
- Handling multiple response categories

Notes:

The program accepts normal sentences and short responses from the user.
User input does not require a specific format.
The chatbot will always provide a response, even if no pattern matches.
The user must type "bye" to end the program.
All source files must remain in the same directory when compiling.
