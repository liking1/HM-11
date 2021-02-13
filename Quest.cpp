#include "Quest.h"

const string& Quest::getQuestion() const
{
    return question;
}

const string& Quest::getAnswer() const
{
    return answer;
}

Quest::Quest(const string question, const string answer)
{
    if (!question.empty())
        if (!answer.empty())
        {
            this->question = question;
            this->answer = answer;
        }

}