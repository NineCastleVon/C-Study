// 헤더가드
//(비공식) 하지만 국룰!!
#pragma once

//(공식)if not definition
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
	// 생성자 정의
	// 생성자 초기화
	Archer(string Name = "NPC", int HP = 777, int Power = 777);

	// 멤버 함수의 선언
	string GetName();
	void SetName(string Name);

	int GetHP();
	int SetHP(int HP);

	int GetPower();
	int SetPower(int Power);

	void Attack(Archer& target);
	void State();
	void Heal();

	//소멸자 정의
	~Archer();
	// ☆☆ 선언에서 F12를 누르면 해당 정의로 넘어간다!!! ☆☆
};

//#endif
// 공식은 번거로워서 안쓴다!

