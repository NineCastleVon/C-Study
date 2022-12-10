#include "Archer.h"

// 멤버 함수의 정의
string Archer::GetName()
{
	return Name;
}
void Archer::SetName(string name)
{
	if (name.length() > 10 == true)
	{
		cout << "10자 이상은 사용할 수 없습니다.";
		return;
	}
	Name = name;
}
int Archer::GetHP()
{
	return HP;
}
int Archer::SetHP(int HP)
{
	if (HP > 1000 == true)
	{
		cout << "HP는 1000이상 설정할 수 없습니다.";
		return HP;
	}
	else if (HP < 0 == true)
	{
		cout << "HP는 0이하로 설정할 수 없습니다.";
		return HP;
	}
	HP = HP;
}
int Archer::GetPower()
{
	return Power;
}
int Archer::SetPower(int Power)
{
	if (Power > 1000 == true)
	{
		cout << "데미지는 1000이상 설정할 수 없습니다.";
		return Power;
	}
	else if (Power < 0 == true)
	{
		cout << "Power는 0이하로 설정할 수 없습니다.";
		return Power;
	}
	Power = Power;
}
void Archer::Attack(Archer& target)
{
	target.HP = target.HP - Power;
}
void Archer::State()
{
	cout << "이름: " << Name << endl;
	cout << "HP: " << HP << endl;
	cout << "Power: " << Power << endl;
}

void Archer::Heal()
{
	HP = HP + 30;
}

//void Archer::SetParty(Archer Party)
//{
//	this->Party = &Party
//}

// 생성자 선언
// 멤버 이니셜라이저 적용
Archer::Archer(string Name, int HP, int Power):Name(Name),HP(HP),Power(Power)
{
	/*Name = name;
	HP = hp;
	Power = power;*/
	this->Name = Name;

	/*this->Heal();
	this->State();*/

	cout << this << "생성자 호출 -> 객체가 생성됩니다." << endl;
}

// 복사 생성자
//Archer::Archer(Archer &obj):Name(obj.Name), HP(obj.HP), Power(obj.Power) 
//{
//	
//}

// 소멸자 선언
Archer::~Archer()
{
	delete Party;
	cout << Name << "소멸자 호출 -> 객체가 소멸됩니다." << endl;
	/*delete []player2;
	delete player3[0];
	delete player3[1];
	delete player3[2];*/
}
