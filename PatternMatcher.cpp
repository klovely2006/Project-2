#include "PatternMatcher.h"

using namespace std;

PatternMatcher::PatternMatcher()
{

    patterns.push_back({
        regex(".*\\bhave\\b.*", regex_constants::icase),
        "Why do you have that?"
    });

    patterns.push_back({
        regex(".*\\bknow\\b.*", regex_constants::icase),
        "How long have you known that?"
    });

    patterns.push_back({
        regex(".*\\blearn\\b.*", regex_constants::icase),
        "What have you learned recently?"
    });

    patterns.push_back({
        regex(".*\\btravel\\b.*", regex_constants::icase),
        "Where do you enjoy traveling?"
    });

    patterns.push_back({
        regex(".*\\bpurchase\\b.*", regex_constants::icase),
        "Why did you decide to purchase that?"
    });

    patterns.push_back({
        regex(".*\\bbuy\\b.*", regex_constants::icase),
        "What made you buy it?"
    });

    patterns.push_back({
        regex(".*\\bwork\\b.*", regex_constants::icase),
        "Tell me more about your work."
    });

    patterns.push_back({
        regex(".*\\bhelp\\b.*", regex_constants::icase),
        "Who do you usually help?"
    });

    patterns.push_back({
        regex(".*\\bneed\\b.*", regex_constants::icase),
        "Why do you need that?"
    });

    patterns.push_back({
        regex(".*\\bwant\\b.*", regex_constants::icase),
        "Why do you want that?"
    });

    patterns.push_back({
        regex(".*\\blove\\b.*", regex_constants::icase),
        "Tell me more about the people you love."
    });

    patterns.push_back({
        regex(".*\\bgirlfriend\\b.*", regex_constants::icase),
        "How is your relationship with your girlfriend?"
    });

    patterns.push_back({
        regex(".*\\bboyfriend\\b.*", regex_constants::icase),
        "How is your relationship with your boyfriend?"
    });

    patterns.push_back({
        regex(".*\\bwife\\b.*", regex_constants::icase),
        "Tell me about your wife."
    });

    patterns.push_back({
        regex(".*\\bhusband\\b.*", regex_constants::icase),
        "Tell me about your husband."
    });

    patterns.push_back({
        regex(".*\\bmarried\\b.*", regex_constants::icase),
        "How has marriage affected your life?"
    });

    patterns.push_back({
        regex(".*\\brelationship\\b.*", regex_constants::icase),
        "What do you think makes a good relationship?"
    });

    patterns.push_back({
        regex(".*\\bdating\\b.*", regex_constants::icase),
        "How do you feel about dating?"
    });
}

string PatternMatcher::getResponse(string input)
{
    if (regex_match(input, regex("^yes$", regex_constants::icase)))
    {
        return "Why do you say yes?";
    }

    if (regex_match(input, regex("^no$", regex_constants::icase)))
    {
        return "Why not?";
    }

    if (regex_search(input, regex("\\bI am\\b", regex_constants::icase)))
    {
        string response = regex_replace(
            input,
            regex("\\bI am\\b", regex_constants::icase),
            "Why are you"
        );

        return response + "?";
    }

    for (size_t i = 0; i < patterns.size(); i++)
    {
        if (regex_search(input, patterns[i].first))
        {
            return patterns[i].second;
        }
    }

    return "Can you tell me more about that?";
}

    patterns.push_back({
        regex(".*\\bhate\\b.*", regex_constants::icase),
        "Why do you feel hate toward that?"
    });

    patterns.push_back({
        regex(".*\\bangry\\b.*", regex_constants::icase),
        "What made you feel angry?"
    });

    patterns.push_back({
        regex(".*\\bsad\\b.*", regex_constants::icase),
        "I'm sorry you're feeling sad. Can you tell me more?"
    });

    patterns.push_back({
        regex(".*\\bdepressed\\b.*", regex_constants::icase),
        "What do you think has caused these feelings?"
    });

    patterns.push_back({
        regex(".*\\banxious\\b.*", regex_constants::icase),
        "What usually makes you feel anxious?"
    });

    patterns.push_back({
        regex(".*\\bafraid\\b.*", regex_constants::icase),
        "What are you afraid of?"
    });

    patterns.push_back({
        regex(".*\\bstress\\b.*", regex_constants::icase),
        "What causes you the most stress?"
    });

    patterns.push_back({
        regex(".*\\bworried\\b.*", regex_constants::icase),
        "What worries you the most?"
    });


    patterns.push_back({
        regex(".*\\bmoney\\b.*", regex_constants::icase),
        "Does money cause you stress?"
    });

    patterns.push_back({
        regex(".*\\bsalary\\b.*", regex_constants::icase),
        "Are you satisfied with your salary?"
    });

    patterns.push_back({
        regex(".*\\bjob\\b.*", regex_constants::icase),
        "Tell me more about your job."
    });

    patterns.push_back({
        regex(".*\\bsavings\\b.*", regex_constants::icase),
        "Why are your savings important to you?"
    });

    patterns.push_back({
        regex(".*\\binvestment\\b.*", regex_constants::icase),
        "What interests you about investments?"
    });

    patterns.push_back({
        regex(".*\\bstocks\\b.*", regex_constants::icase),
        "Do you enjoy investing in stocks?"
    });

    patterns.push_back({
        regex(".*\\bdebt\\b.*", regex_constants::icase),
        "How does debt affect your life?"
    });

    patterns.push_back({
        regex(".*\\bbankruptcy\\b.*", regex_constants::icase),
        "That sounds difficult. Tell me more about it."
    });

    patterns.push_back({
        regex(".*\\bexercise\\b.*", regex_constants::icase),
        "How often do you exercise?"
    });

    patterns.push_back({
        regex(".*\\bsleep\\b.*", regex_constants::icase),
        "Are you getting enough sleep?"
    });

    patterns.push_back({
        regex(".*\\bvitamins\\b.*", regex_constants::icase),
        "Do you take vitamins regularly?"
    });

    patterns.push_back({
        regex(".*\\bdiet\\b.*", regex_constants::icase),
        "Tell me about your diet."
    });

    patterns.push_back({
        regex(".*\\bhealthy\\b.*", regex_constants::icase),
        "What does being healthy mean to you?"
    });

    patterns.push_back({
        regex(".*\\bgym\\b.*", regex_constants::icase),
        "Do you enjoy going to the gym?"
    });

    patterns.push_back({
        regex(".*\\bdoctor\\b.*", regex_constants::icase),
        "Have you spoken with your doctor recently?"
    });

    patterns.push_back({
        regex(".*\\brelax\\b.*", regex_constants::icase),
        "How do you usually relax?"
    });

    patterns.push_back({
        regex(".*\\bschool\\b.*", regex_constants::icase),
        "How do you feel about school?"
    });

    patterns.push_back({
        regex(".*\\bcollege\\b.*", regex_constants::icase),
        "What has your college experience been like?"
    });

    patterns.push_back({
        regex(".*\\buniversity\\b.*", regex_constants::icase),
        "What do you enjoy about university?"
    });

    patterns.push_back({
        regex(".*\\bstudy\\b.*", regex_constants::icase),
        "What subjects do you enjoy studying?"
    });

    patterns.push_back({
        regex(".*\\bclass\\b.*", regex_constants::icase),
        "Tell me about your classes."
    });

    patterns.push_back({
        regex(".*\\bexam\\b.*", regex_constants::icase),
        "How do exams make you feel?"
    });

    patterns.push_back({
        regex(".*\\bteacher\\b.*", regex_constants::icase),
        "Did a teacher influence you?"
    });

    patterns.push_back({
        regex(".*\\bhomework\\b.*", regex_constants::icase),
        "How do you manage your homework?"
    });


    patterns.push_back({
        regex(".*\\bmovie\\b.*", regex_constants::icase),
        "What kind of movies do you enjoy?"
    });

    patterns.push_back({
        regex(".*\\bmusic\\b.*", regex_constants::icase),
        "What type of music do you like?"
    });

    patterns.push_back({
        regex(".*\\bconcert\\b.*", regex_constants::icase),
        "What concerts have you enjoyed?"
    });

    patterns.push_back({
        regex(".*\\bdance\\b.*", regex_constants::icase),
        "Do you enjoy dancing?"
    });

    patterns.push_back({
        regex(".*\\brestaurant\\b.*", regex_constants::icase),
        "What kind of food do you enjoy?"
    });

    patterns.push_back({
        regex(".*\\bbar\\b.*", regex_constants::icase),
        "What do you enjoy doing socially?"
    });

    patterns.push_back({
        regex(".*\\bgame\\b.*", regex_constants::icase),
        "What games do you like to play?"
    });

    patterns.push_back({
        regex(".*\\bvaction\\b.*", regex_constants::icase),
        "Where would you like to travel for vacation?"
    });


    patterns.push_back({
        regex(".*\\bfamily\\b.*", regex_constants::icase),
        "Tell me more about your family."
    });

    patterns.push_back({
        regex(".*\\bfriends\\b.*", regex_constants::icase),
        "How important are friendships to you?"
    });

    patterns.push_back({
        regex(".*\\bhome\\b.*", regex_constants::icase),
        "What does home mean to you?"
    });

    patterns.push_back({
        regex(".*\\bfuture\\b.*", regex_constants::icase),
        "What are your goals for the future?"
    });

    patterns.push_back({
        regex(".*\\bchange\\b.*", regex_constants::icase),
        "How do you feel about change?"
    });

    patterns.push_back({
        regex(".*\\bfeel\\b.*", regex_constants::icase),
        "Can you explain those feelings?"
    });
