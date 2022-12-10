// 이 단순한 Hello World를 보여주기 위해 어마어마한 코드들이 사용되었다
// include는 그러한 코드들을 내가 개발할 수 가 없으니 남들이 만든 것을 가져다 쓰겠다는 선언과 같다

#include <iostream>
// input,output stream(header파일)

// main 함수 => 엔트리포인트 - 시작 진입점
// 리턴값이 int라는 것을 알려주는 것

// 기본적으로 c언어에서 사용하는 모든 언어를 사용할 수 있다

// 메모리에 접근하는 부분들때문에 해킹의 주된 통로로 이용된다, 때문에 사용하면 안되는 부분(?)

//int main()
//{
//    std::cout << "Hello World!\n" << std::endl;
//}

// \n(개행문자)은 운영체제마다 다르다, 때문에 << std::endl이 권장된다(컴파일러가 알아서 바꿔줄꺼기 때문)

//int main(void)
//{
//	int number = 3;
//	std::cout << "Hello World" << std::endl;
//	std::cout << number;
//	return 0;
//}

//int main(void)
//{
//	int age = 0;
//	std::cout << "몇살이신가요?" << std::endl;
//	std::cin >> age;
//	std::cout << "당신의 나이는 " << age << "입니다";
//	return 0;
//}
// 개편한데? printf나 scanf쓰는 것보다 훨씬 간편해졌다!

//int main(void)
//{
//	int a, b = 0;
//	std::cout << "숫자1: ";
//	std::cin >> a;
//	std::cout << "숫자2: ";
//	std::cin >> b;
//	int add = a + b;
//	std::cout << "합: " << add << "입니다.";
//	return 0;
//}



//int add(int a,int b)
//{
//	return a + b;
//}

// 함수를 분리하는 이유는 재활용성때문

//int main(void)
//{
//	std::cout << add(3, 5);
//
//	return 0;
//}

//int add(int a, int b)
//{
//	return a + b;
//}
//
//int main(int a, int b)
//{
//	std::cout << "숫자1: ";
//	std::cin >> a;
//	std::cout << "숫자2: ";
//	std::cin >> b;
//	std::cout << add(a, b);
//	return 0;
//}


// 함수 오버로딩 가능 => 오버로딩(판단할 수 있는 기능)
//int add(int a, int b)
//{
//	return a + b;
//}
//
//void add(char a, char b)
//{
//	std::cout << a + b;
//}
//
//int main(int a, int b)
//{
//	add(3, 5);
//	return 0;
//}

//int main()
//{
//	char arr[50];
//	std::cout << "문자를 입력하세요";
//	std::cin >> arr;
//	std::cout << "입력한 문자는 " << arr << "입니다." << std::endl;
//}

//int add(int a, int b)
//{
//	return a + b;
//}
//void add(char a, char b)
//{
//	std::cout << a << b;
//}
//
//int main(void)
//{
//	std::cout << add(3, 5);
//	add('a', 'b');
//	return 0;
//}

//int main()
//{
//	char ch[1000];
//	std::cout << "문자열를 입력하세요: ";
//	std::cin >> ch;
//	std::cout << "입력한 문자열는 " << ch << "입니다." << std::endl;
//}

//int add(int a, int b)
//{
//	return a + b;
//}
//
//int main(int a, int b)
//{
//	std::cout << "숫자1: ";
//	std::cin >> a;
//	std::cout << "숫자2: ";
//	std::cin >> b;
//	std::cout << add(a, b);
//	return 0;
//}

/*
	[cout과 cin]

- printf => cout
- scanf  => cin

=> 메모리에 접근하는 방식, 해킹 문제때문에 바꾸게됨

std => standard
::  => namespace(forder식으로 상위단계를 정리해 놓은 것)
<<  => 연산자 재정의 기능을 통해 새롭게 만들어진 것(연산자이기 때문에 얼마든지 이어붙여 쓸 수 있다)

*/

// 함수 파라미터(매개변수) 초기화
//int add(int a = 0, int b = 0, int c = 0)
//{
//	return a + b + c;
//}
// ...매개변수가 계속 늘어난다면..?
// 변수에 초기값 0을 주면 된다!
// 그럼 변수 개수는 계속 적어줘야하는가?
// 초기값을 몇개 지정해주느냐에 따라 최소 몇개의 변수를 지정해야하는지를 정할 수 있다
// 함수 파라미터는 맨 끝에서 부터 채워 나가는 형식이기 때문에 a=0, b,c라는 식으로는 불가능하다
// 값의 우선순위는 main에서 넣어주는 값이 먼저!

//int main(void)
//{
//	std::cout << add();
//	return 0;
//}

//int add(int a, int b, int c = 0, int d = 0, int e = 0)
//{
//	return a + b + c + d + e;
//}
//
//int main(void)
//{
//	std::cout << add(10,20);
//	return 0;
//}

// ☆ 매크로 함수 -> 인라인 함수 ☆
// 1.매크로 함수
// 한줄로 정의해서 적어줘야하기 때문에 매우 불편하다
//#define ADD(x,y) (x+y)
//int main(void)
//{
//	std::cout << ADD(3, 5);
//	return 0;
//}

// 2.인라인 함수
//inline int ADD(int x, int y)
//{
//	return x + y;
//}
//int main(void)
//{
//	std::cout << ADD(3, 5);
//	return 0;
//}



// ☆ 참조자 ☆
// 
// 1. Bool 타입
//int main()
//{
//	std::cout << true << sizeof(true) << std::endl;
//	std::cout << false << sizeof(false) << std::endl;
//
//	std::cout << 1 << sizeof(1) << std::endl;
//	std::cout << 0 << sizeof(0) << std::endl;
//
//	return 0;
//}

//int main()
//{
//	bool isInt = true;
//
//	std::cout << isInt;
//
//	return 0;
//}

// 2. Call-by-value
//void Swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main(void)
//{
//	int a = 3;
//	int b = 5;
//
//	std::cout << a << b << std::endl;
//	Swap(a, b);
//	std::cout << a << b << std::endl;
//
//	return 0;
//}

// 똑같은 3, 5가 출력된다
// 이름만 같을 뿐 위 아래 a,b는 서로 다른 것!
// stack 영역에서 함수가 실행되고 값은 휘발된다
// main 영역에서 정의된 3,5는 바뀌지 않고 똑같이 출력된다.

// pointer는 변수다 => 뭔가를 담을 수 있는 변수 => 메모리의 주소값을 담는 변수
//

// 포인터를 사용하는 이유?? => 변수가 시작되는 지점을 찾아서 쓸 수 있게 하기 위한 것
// exe실행파일을 바탕int main(void)
//{
//	int a = 10;
//	int* b = &a;
//
//	std::cout << b << std::endl;
//	std::cout << *b << std::endl;
//	
//	return 0;
//}화면에서 사용하는 것이 포인터의 예라고 할 수 있다!
// 실행파일의 주소를 담고 있는 것이 바탕화면의 바로가기 => 실행할 변수의 주소값만 가진 가벼운 데이터만 보여주고 실행할 수 있게 해준것!

// 0x001 => 부팅과 관련된 데이터들을 담고 있다, 건드리면...컴퓨터 뻗는다

//void Swap(int *a, int *b)
//{
//	int temp = *a; // int temp의 값 = 포인터 a의 값 3
//	*a = *b;	   // 포인터 a에 값 = 포인터 b의 값 5
//	*b = temp;	   // 포인터 b의 값 = int temp의 값 3
//}
//int main(void)
//{
//	int a = 3;
//	int b = 5;
//
//	std::cout << a << b << std::endl;
//	Swap(&a, &b);
//	std::cout << a << b << std::endl;
//
//	return 0;
//}

// 참조자의 생성 규칙
// 1. 선언과 동시에 변수로 초기화 해야 한다
// int& b;			=> 선언만 불가능
// int& b = 30;		=> 상수   불가능
// int& b = NULL;	=> NULL   불가능
// 참조자는 일반변수처럼 동일하게 사용할 수 있다

//int main(void)
//{
//	int a = 3;
//	int& b = a;
//
//	std::cout << a << b << std::endl;
//
//	b = 10;
//
//	std::cout << a << b << std::endl;
//
//	return 0;
//}

//void Swap(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main(void)
//{
//	int a = 3;
//	int b = 5;
//
//	std::cout << a << b << std::endl;
//	Swap(a,b);
//	std::cout << a << b << std::endl;
//
//	return 0;
//}

/*
	 [포인터]
= 선언을 일반변수처럼 자유롭게 한다
= (너무 자유롭게 바꿀 수 있다보니 코드가 길어지면 알아보기가 힘든 문제가 있음)
= 사용 시 기본은 주소를 불러온다
= 언제든지 자유롭게 초기화한다


	 [참조자]
= 선언시 무조건 변수로 초기화해야 한다
= 사용시 일반변수와 동일하다
= 한번 초기화되면 다른 값으로 초기화 불가능!!

*/

/*
	☆ 메모리 할당 ☆

	[런타임]
- 동적할당, 힙 영역
- 프로그램이 작동하는 시간

	[컴파일 타임]
- 스택영역, 지역변수, 매개변수
- 컴파일 하는 단계
- exe를 생성하는 타임

*/

// 메모리에 직접적으로 접근하는 함수들은 해킹의 위험이 크다
// 스택오버플로우, 힙오버플로우

// malloc & free
#include <string.h>
#include <stdlib.h>

//int main(void)
//{
//	int size = 15;
////	 char* str = (char*)malloc(sizeof(char) * size);
//	char* str = new char[size];
//
//	strcpy_s(str, 11, "i am study");
////	stringcopy_safe
//	std::cout << str << std::endl;
//
//	delete[]str;
//
//	return 0;
//}

// point 구조체를 만들어 동적할당 실습하기
// 1. point 구조체를 이용하여 변수 2개를 생성
// 2. 1개는 new연산자로 동적할당하기
// 3. 1개는 기존의 변수선언방식으로 사용하기

//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//};
//int main(void)
//{
//	Point* p1 = new Point;
//	Point p2;
//
//	p1->x = 10;	// (*p1).x = 10;
//	p1->y = 10;
//
//	p2.x = 30;
//	p2.y = 30;
//
//	delete p1;
//
//	// 참조자 사용 시
//	// Point &p1 = *(new Point);
//	// p1.x = 10;
//	// p1.y = 10;
//	// delete &p1;
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////

// 객체지향

//  ☆ namespace ☆
// 1. 엔트리포인트(main함수는 들어가면 안된다)
// 2. 사용할 때는 네임스페이스 뒤에 쌍점 2개를 사용한다
// 3. 샹략을 위해선 헤더부분에 using을 사용한다

//using namespace std;
//
//namespace koo
//{
//	void testFunc()
//	{
//		cout << "to Hell with the Devil";
//	}
//}
//int main(void)
//{
//	koo::testFunc();
//	return 0;
//}

// Cout을 다시 살펴보자
//int main(void)
//{
//	std::cout << "To Hell" << std::endl;
//	return 0;
//}
//using namespace std;
//int main(void)
//{
//	cout << "To Hell" << endl;
//	return 0;
//}

// Archer 구조체를 만들고 공격 함수 만들기
// 함수 이름 Attack
// 파라미터(매개변수) : 공격아처, 공격대상
// 함수내용 : 공격아처의 공격력으로 공격 대상의 HP를 감소
// 리턴타입 : 없음
// 공격을 1회 한 후 공격 대상의 HP를 출력해보세요

#include <string>
using namespace std;

//struct Archer
//{
//	string Name;
//	int HP;
//	int Power;
//};
//void Attack(Archer& attacker, Archer& target)
//{
//	target.HP = target.HP - attacker.Power;
//}
//void State(Archer& player)
//{
//	cout << "이름: " << player.Name << endl;
//	cout << "HP: " << player.HP << endl;
//	cout << "Power: " << player.Power << endl;
//}
//void Heal(Archer& player)
//{
//	player.HP = player.HP + 30;
//}
//int main()
//{
//	Archer* player = new Archer;
//	Archer* enemy = new Archer;
//
//	player->Name = "Archer";
//	player->HP = 100;
//	player->Power = 40;
//
//	enemy->Name = "Monster";
//	enemy->HP = 100;
//	enemy->Power = 20;
//
//	cout << "player의 공격" << endl;
//	Attack(*player, *enemy);
//	cout << "player가 " << player->Power << "만큼 데미지를 입혔다." << endl;
//	State(*enemy);
//	cout << "" << endl;
//
//	cout << "enemy의 공격" << endl;
//	Attack(*enemy, *player);
//	cout << "enemy가 " << enemy->Power << "만큼 데미지를 입혔다." << endl;
//	State(*player);
//	cout << "" << endl;
//
//	Heal(*player);
//	cout << "player가 힐을 사용해 30만큼 HP를 채웠다." << endl;
//	State(*player);
//
//	return 0;
//}


// Archer 구조체에 함수들을 넣어서 보다 쉽게 사용할 수 있도록 만들었다
//struct Archer
//{
//	string Name;
//	int HP;
//	int Power;
//
//	// 함수 입장에서 위의 변수들은 전역변수들!
//	void Attack(Archer& target)
//	{
//		target.HP = target.HP - Power;
//	}
//	void State()
//	{
//		cout << "이름: " << Name << endl;
//		cout << "HP: " << HP << endl;
//		cout << "Power: " << Power << endl;
//	}
//	void Heal()
//	{
//		HP = HP + 30;
//	}
//};
//
//int main()
//{
//	Archer* player = new Archer;
//	Archer* enemy = new Archer;
//
//	player->Name = "Archer";
//	player->HP = 100;
//	player->Power = 40;
//
//	enemy->Name = "Monster";
//	enemy->HP = 100;
//	enemy->Power = 20;
//
//	cout << "player의 공격" << endl;
//	player->Attack(*enemy);
//	cout << "player가 " << player->Power << "만큼 데미지를 입혔다." << endl;
//	enemy->State();
//	cout << "" << endl;
//
//	cout << "enemy의 공격" << endl;
//	enemy->Attack(*player);
//	cout << "enemy가 " << enemy->Power << "만큼 데미지를 입혔다." << endl;
//	player->State();
//	cout << "" << endl;
//
//	player->Heal();
//	cout << "player가 힐을 사용해 30만큼 HP를 채웠다." << endl;
//	player->State();
//
//	return 0;
//}


////////////////////////////////////////////////////////////////////////////////
// 객체지향을 보다 편하게 만들 수 있게 도와주는게 C++
// 코드는 사람이 설계하기 나름! 객체지향이든 절차지향이든 설계함에 따라 얼마든지 할 수 있다

// 존재하는 모든 것들을 객체라고 할 수 있다
// 객체 = 데이터 + 기능(행동,함수) 
// ex) 모니터 = 상태(전력)변수 + turn on/off

//class Archer
//{
//	// 구조체에서 class로 바뀌는 순간 접근제어지시자가 적용된다(선언안하면 무조건 private)
//	// public		어디서든 접근허용
//	// protected	상속관계에서 허용
//	// private		클래스 안에서만 허용
//
//public:
//	string Name;
//	int HP;
//	int Power;
//
//	// 함수 입장에서 위의 변수들은 전역변수들!
//	// 멤버 변수(C#에서는 메소드라고 부름)
//	// 함수들은 멤버 함수라고 부름
//	void Attack(Archer& target)
//	{
//		target.HP = target.HP - Power;
//	}
//	void State()
//	{
//		cout << "이름: " << Name << endl;
//		cout << "HP: " << HP << endl;
//		cout << "Power: " << Power << endl;
//	}
//	void Heal()
//	{
//		HP = HP + 30;
//	}
//};
//
//// class와 main함수는 전혀 별개의 영역
//int main()
//{
//	Archer* player = new Archer;
//	Archer* enemy = new Archer;
//
//	player->Name = "Archer";
//	player->HP = 100;
//	player->Power = 40;
//
//	enemy->Name = "Monster";
//	enemy->HP = 100;
//	enemy->Power = 20;
//
//	cout << "player의 공격" << endl;
//	player->Attack(*enemy);
//	cout << "player가 " << player->Power << "만큼 데미지를 입혔다." << endl;
//	enemy->State();
//	cout << "" << endl;
//
//	cout << "enemy의 공격" << endl;
//	enemy->Attack(*player);
//	cout << "enemy가 " << enemy->Power << "만큼 데미지를 입혔다." << endl;
//	player->State();
//	cout << "" << endl;
//
//	player->Heal();
//	cout << "player가 힐을 사용해 30만큼 HP를 채웠다." << endl;
//	player->State();
//
//	return 0;
//}

// 객체지향 4대 원칙 중 하나
// 캡슐화 = 정보은닉화


// 값을 넣는건 불가능하고, 읽기만 가능하게 할 수 있을까?
// C++문법적으로 지원하는건 없지만 지금까지 배운걸 활용하면 만들 수 있다!

//class Archer
//{
//private:
//	string Name;
//	int HP;
//	int Power;
//
//public:
//	//엑세스 함수를 통해서만 접근 가능!
//	string GetName()
//	{
//		return Name;
//	}
//	void SetName(string name)
//	{
//		if (name.length() > 10 == true)
//		{		
//			cout << "10자 이상은 사용할 수 없습니다.";
//			return;
//		}
//	Name = name;
//	}
//
//	// if문에는 실행되지 말아야 할 logic이 사용되고 원래값으로 되돌려주기 위해
//	// 사용되었을 때 좀 더 자유도가 높을 수 있다.
//	// 가독성 부분에서도 좋다.
//
//	// 개발 PL = 개발자들의 소스를 검토하고 검수, 가독성 높이고 효율성 높임
//	// 디자인 패턴을 공부해야 하는 부분(어떤게 좋은 코드인가를 고민해볼 수 있는 공부)
//
//	int GetHP()
//	{
//		return HP;
//	}
//	int SetHP(int hp)
//	{
//		if (hp > 1000 == true)
//		{
//			cout << "HP는 1000이상 설정할 수 없습니다.";
//			return HP;
//		}
//		else if (hp < 0 == true)
//		{
//			cout << "HP는 0이하로 설정할 수 없습니다.";
//			return HP;
//		}
//		HP = hp;
//	}
//	int GetPower()
//	{
//		return Power;
//	}
//	int SetPower(int power)
//	{
//		if (power > 1000 == true)
//		{
//			cout << "데미지는 1000이상 설정할 수 없습니다.";
//			return Power;
//		}
//		else if (power < 0 == true)
//		{
//			cout << "Power는 0이하로 설정할 수 없습니다.";
//			return Power;
//		}
//		Power = power;
//	}
//
//	void Attack(Archer& target)
//	{
//		target.HP = target.HP - Power;
//	}
//	void State()
//	{
//		cout << "이름: " << Name << endl;
//		cout << "HP: " << HP << endl;
//		cout << "Power: " << Power << endl;
//	}
//	void Heal()
//	{
//		HP = HP + 30;
//	}
//};
//
//int main()
//{
//	Archer* player = new Archer;
//	Archer* enemy = new Archer;
//	Archer Dragon;
//	
//	player->SetName("K");
//	player->SetHP(100);
//	player->SetPower(50);
//	cout << "Player Name  = " << player->GetName() << endl;
//	cout << "Player HP    = " << player->GetHP() << endl;
//	cout << "Player Power = " << player->GetPower() << endl;
//
//	cout << "" << endl;
//
//	enemy->SetName("Orc");
//	enemy->SetHP(50);
//	enemy->SetPower(30);
//	cout << "enemy Name  = " << enemy->GetName() << endl;
//	cout << "enemy HP    = " << enemy->GetHP() << endl;
//	cout << "enemy Power = " << enemy->GetPower() << endl;
//
//	cout << "" << endl;
//
//	Dragon.SetName("Red Dragon");
//	Dragon.SetHP(999);
//	Dragon.SetPower(999);
//	cout << "Dragon Name  = " << Dragon.GetName() << endl;
//	cout << "Dragon HP    = " << Dragon.GetHP() << endl;
//	cout << "Dragon Power = " << Dragon.GetPower() << endl;
//
//	return 0;
//}

// Archer 클래스 엑세스함수 만들기
// Name 10자 미만
// HP : 100이 최대 체력
// Power : 음수 허용 안함

// 스스로 만들어보자!!!(성공)