#include "Archer.h"

// ��� �Լ��� ����
string Archer::GetName()
{
	return Name;
}
void Archer::SetName(string name)
{
	if (name.length() > 10 == true)
	{
		cout << "10�� �̻��� ����� �� �����ϴ�.";
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
		cout << "HP�� 1000�̻� ������ �� �����ϴ�.";
		return HP;
	}
	else if (HP < 0 == true)
	{
		cout << "HP�� 0���Ϸ� ������ �� �����ϴ�.";
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
		cout << "�������� 1000�̻� ������ �� �����ϴ�.";
		return Power;
	}
	else if (Power < 0 == true)
	{
		cout << "Power�� 0���Ϸ� ������ �� �����ϴ�.";
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
	cout << "�̸�: " << Name << endl;
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

// ������ ����
// ��� �̴ϼȶ����� ����
Archer::Archer(string Name, int HP, int Power):Name(Name),HP(HP),Power(Power)
{
	/*Name = name;
	HP = hp;
	Power = power;*/
	this->Name = Name;

	/*this->Heal();
	this->State();*/

	cout << this << "������ ȣ�� -> ��ü�� �����˴ϴ�." << endl;
}

// ���� ������
//Archer::Archer(Archer &obj):Name(obj.Name), HP(obj.HP), Power(obj.Power) 
//{
//	
//}

// �Ҹ��� ����
Archer::~Archer()
{
	delete Party;
	cout << Name << "�Ҹ��� ȣ�� -> ��ü�� �Ҹ�˴ϴ�." << endl;
	/*delete []player2;
	delete player3[0];
	delete player3[1];
	delete player3[2];*/
}
