#include "Game.h"

void Game::run()
{
	string temp;
	cout << question << endl;
	cout << userWord << endl;
	getline(cin, temp);
	for (size_t i = 0; i < answer.size() + 1; i++)
	{
		if (answer[i] == temp[i]) {
			userWord[i] = temp[i];
		}
	}
	if (temp == answer) {
		cout << "You win!" << endl;
	}
	else {
		run();
	}
}

void Game::start()
{

	Quest question = list.getQuest();
	this->question = question.getQuestion();
	answer = question.getAnswer();
	userWord;
	for (size_t i = 0; i < answer.size() + 1; i++)
	{
		userWord += filler;
	}
	run();
}