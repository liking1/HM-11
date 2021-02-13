#pragma once
#include <iostream>

using namespace std;
class Quest
{
public:
	Quest(const string question, const string answer);
	const string& getQuestion() const;
	const string& getAnswer() const;
private:
	string question;
	string answer;
};