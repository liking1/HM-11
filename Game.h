#pragma once
#include <iostream>
#include"QuestList.h"
using namespace std;

class Game
{
	static const char filler = '#';
	QuestList list; // default ctor, ���������� ��������� �������
	string userWord;  // ������ �����, �������� ��������� ������ ��������
	string answer;
	string question;
	void start();
public:
	void run();
	//void updateUserWord(char letter);
};