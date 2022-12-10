// �������
//(�����) ������ ����!!
#pragma once

//(����)if not definition
//#ifndef ArcherH
//#define ArcherH      

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>
using namespace std;

class Archer
{
private:
	string Name;
	int HP;
	int Power;

public:
	Archer* Party;
	// 
	// ������ ����
	// ������ �ʱ�ȭ
	Archer(string Name = "NPC", int HP = 777, int Power = 777);

	// ��� �Լ��� ����
	string GetName();
	void SetName(string Name);

	int GetHP();
	int SetHP(int HP);

	int GetPower();
	int SetPower(int Power);

	void Attack(Archer& target);
	void State();
	void Heal();

	//�Ҹ��� ����
	~Archer();
	// �١� ���𿡼� F12�� ������ �ش� ���Ƿ� �Ѿ��!!! �١�
};

//#endif
// ������ ���ŷο��� �Ⱦ���!

