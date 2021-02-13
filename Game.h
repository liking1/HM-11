#pragma once
#include <iostream>
#include"QuestList.h"
using namespace std;

class Game
{
	static const char filler = '#';
	QuestList list; // default ctor, заповнення питаннями вектору
	string userWord;  // шаблон слова, спочатку заповнити певним символом
	string answer;
	string question;
	void start();
public:
	void run();
	//void updateUserWord(char letter);
};