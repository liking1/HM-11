#pragma once
#include <iostream>
#include<vector>
#include<string>
#include"Quest.h"
#include<fstream>
#include<ctime>

using namespace std;
class QuestList
{

	vector <Quest> list;
public:
	QuestList();
	const Quest& getQuest(); // �������� ���� �������-������� ��  ����
	size_t getSize() const
	{
		return list.size();
	}
};