#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>
#include "Archer.h"
using namespace std;

//int globalValue = 30;		// 전역변수 
//
//class Car
//{
//	string name;			// 멤버변수
//	int gear;
//	int speed;
//
//	void Go()
//	{
//		int localValue = globalValue;	// 지역변수
//		speed = localValue;
//	}
//
//	void Stop()
//	{
//		speed = 0;			// 멤버변수는 멤버변수들 끼리 같이 사용할 수 있다
//	}
//};
//int main()
//{
//
//}

/* 명칭					스코프								라이프사이클

 전역변수		해당 cpp파일 내 어디든 가능			프로그램 시작시 생성,종료 시 삭제

 멤버변수		해당 클래스 내 어디든 가능			객체 생성시 생성, 객체delete시 삭제
			public 선언 시 클래스 외부에서도 가능

 지역변수		해당 멤버함수에서만 사용 가능			멤버함수 실행 시 생성
													해당 멤버함수 종료시 스택 삭제

		※ 전역변수는 객체지향 프로그래밍에 어울리지 않아 권장하지 않음
*/


/*
	☆ 객체지향 4대 요소 ☆
		 1. 캡슐화
		 2. 상속
		 3. 추상화
		 4. 다형성
	☆					 ☆
*/

/* 1. 캡슐화 = 연관되어 있는 것들을 하나로 묶는 것!
		☆	쓰는 이유!	☆
	- 소스 코드의 간소화
	- 가독성
	- 내부 순서를 알 필요가 없다!(자동화?)

	= 실무에서는 범위를 어디까지 class지정해줘야하는지 애매한 부분들이 많아서 힘들다
 */

/*
		☆ 파일분리 ☆
	- 헤더파일, cpp파일
	- 헤더가드
*/

//int main()
//{	
//	// 생성자 사용
//	Archer* player = new Archer("K",100,50);
//	Archer* enemy = new Archer("Orc",50,30);	// HEAP 영역
//	Archer Dragon("Red Dragon",999,999);		// STACK 영역
//	
//	Archer* player2 = new Archer();
//	Archer* player3 = new Archer("NPC1");
//	Archer* player4 = new Archer("NPC2", 666);
//	Archer* player5 = new Archer("NPC3",666,666);
//	
//	cout << "Player Name  = " << player->GetName() << endl;
//	cout << "Player HP    = " << player->GetHP() << endl;
//	cout << "Player Power = " << player->GetPower() << endl;
//
//	cout << "" << endl;
//
//	cout << "enemy Name  = " << enemy->GetName() << endl;
//	cout << "enemy HP    = " << enemy->GetHP() << endl;
//	cout << "enemy Power = " << enemy->GetPower() << endl;
//
//	cout << "" << endl;
//
//	cout << "Dragon Name  = " << Dragon.GetName() << endl;
//	cout << "Dragon HP    = " << Dragon.GetHP() << endl;
//	cout << "Dragon Power = " << Dragon.GetPower() << endl;
//
//	cout << "" << endl;
//
//	cout << "NPC Name  = " << player2->GetName() << endl;
//	cout << "NPC HP    = " << player2->GetHP() << endl;
//	cout << "NPC Power = " << player2->GetPower() << endl;
//
//	cout << "" << endl;
//
//	cout << "NPC Name  = " << player3->GetName() << endl;
//
//	cout << "" << endl;
//
//	cout << "NPC Name  = " << player4->GetName() << endl;
//	cout << "NPC HP    = " << player4->GetHP() << endl;
//
//	cout << "" << endl;
//
//	cout << "NPC Name  = " << player5->GetName() << endl;
//	cout << "NPC HP    = " << player5->GetHP() << endl;
//	cout << "NPC Power = " << player5->GetPower() << endl;
//
//	/*cout << "player의 공격" << endl;
//	player->Attack(*enemy);
//	cout << "player가 " << player->GetPower() << "만큼 데미지를 입혔다." << endl;
//	enemy->State();
//	cout << "" << endl;*/
//
//	return 0;
//}

/* 
	[2. 생성자] 
 - 생성자 선언방법
 - 디폴트 생성자

	☆ 생성자 규칙 ☆
 1. 반환형이 없다(void가 아니라 아예없음)
 2. 클래스 이름과 똑같다(대소문자 일치해야함)
 3. 함수 오버로딩 가능
 4. 함수 매개변수 초기화 가능
 5. 모든 클래스는 생성자가 있으며 객체 생성시 무조건 실행된다
 */

/*
	[3.이니셜라이저]
 - 쓰는 이유가 뭘까?
 1.생성자 내부에는 멤버 초기화 이외의 다른코드들도 들어간다
 => 때문에 초기화 부분을 따로 구분할 수 있다는 장점이 있다

 2. 바이너리코드 단계(실행단계)에서 멤버변수의 생성과 초기화가 따로 진행된다
 => 하지만 이니셜라이저를 사용하면 멤버변수 선언과 초기화가 동시에 처리된다(성능이점)

 3. const 사용 가능
 4. 참조자 사용 가능
*/

/*
	[4.소멸자]

	☆ 소멸자 규칙 ☆
 1. ~클래스이름
 2. 반환형이 없다. void가 아니라 아예 없다.
 3. 정의하지 않으면 디폴트 소멸자가 자동삽입된다.
 4. 객체가 사라질 때 호출된다.
 5. (쓰는이유) 멤버변수를 동적할당하였다면 소멸자에서 delete 처리하자.

*/

/* ☆ 개발자 현업에 관한 이야기 발표  ☆
 - C# = 서버 구성
 - 프레임워크 = 개발을 하기 위한 밑바탕 프로그램들
 - ERP = 회사 운영을 위한 프로그램(결제라인 관리)
 - CS = 서버 클라이언트
 
 1. 기업형태
	1) SI(system integration)
	 - 시스템 기획, 개발, 유지보수, 운영 등을 대신 수행
	 - 국내 IT기업 비중이 가장 많다
	 - 개발초기부터 완료까지 다양한 경험을 할 수 있다
	 - 프로젝트 단위로 일을 하며 개발기한이 정해져있다
	 - 현재 인력난으로 취업난이도가 상대적으로 낮다
	 - 삼성SDS, LGCNS, SKC&C...
     - 진행과정 = 클라이언트 제안요청서 -> 제안서 입찰경쟁 -> 업체 선정 후 요구사항분석 -> 설계,개발,유지보수,운영
	
	2) SM(system management)
	 - 제안서 입찰경쟁을 하지만 웬만하면 기존회사와 계약유지
	 - 공공기관의 경우 법적으로 업체를 주기적으로 바꾸도록 되어있음
	 - 워라벨 보장되는 경우 많음
	 - 신규 개발은 거의 없음, 오류수정, 기능개선, 기능 추가등의 업무

	3) Solution
	 - 회사가 가지고 있는 완성된 프로그램을 판매하는 형태
	 - SI업체들이 솔루션 형태로 전환하려는 경우가 많음
	 - 자사와 관련된 기술만 전문화
	 - 업체, 프로젝트마다 다르지만 고객의 요구에 따라 커스텀의 강도가 높아지면 SI와 같아짐
	 - 데이터뱅크(대구), 지란지교(회사내 메신져, 보안), 티맥스(미들웨어), 한국보안인증

	4) Service
	 - 포털, 플랫폼 등을 서비스
	 - 서비스 영역 별로 부서가 나누어지며 성능튜닝, 코드 리팩토링 등을 한다
	 - 신규 프로젝트 진행 시 기존부서에서 차출하여 신규 부서가 꾸려지기도 한다
	 - 네이버, 카카오, 게임회사 등등

    5) StartUp
	 - 솔루션 or 서비스 형태가 주를 이룬다
	 - 소규모의 인력으로 운영
	 - 젊은 기업, 자유로운 근무환경 등이 특징
	 - 특정 신규 아이템을 기반으로 대박을 터트리기도 한다
	 - 토스, 당근마켓...

 2. 웹프로그래밍
	 - 국내 개발의 대부분은 spring 프레임워크
	 - DB는 SQL이 중요하다

 3. CS프로그래밍
	 - C#, C++, 파이썬(winform, WPF를 사용한다)
	 - Entiti Framework, Dapper, LINQ => 데이터를 긁어오는 방법

*/


/*
	[4.클래스의 활용]

 1. 객체 포인터 배열
  - 객체 배열
  - 객체 포인터 배열

*/

//int main()
//{
//	Archer player1[3];
//	Archer* player2 = new Archer[3];
//	Archer* player3[3];
//
//	cout << &player2[0] << endl;
//	// 주소값이 찍혀나온다 => 메모리에 올라가서 객체가 생성되었다!
//	
//	cout << player3[0] << endl;
//	// 주소값이 나오지 않는다 => 객체가 없다는 의미!, 단지 객체를 담을 수 있는 용기만 생성되어있을 뿐!
//	
//	
//	return 0;
//}

/*
	객체 배열 VS 객체 포인트 배열
 - 쓰기는 객체배열이 더 편한데 쓰이기는 객체 포인트 배열이 많이 쓰인다
 - 왜?
 - 게임을 예로 든다면
 - 100명이 접속한다면 객체 배열의 경우 삭제하려면 100명을 동시에 삭제해야한다
 - 반면에 객체 포인트 배열은 하나씩 따로 따로 관리를 할 수 있다
 - 때문에 각 유저의 계정을 관리한다는 의미로 이해라면 쉽게 이해할 수 있다

*/

//int main()
//{
//	Archer player1[3];
//	Archer* player2 = new Archer[3];
//	Archer* player3[3];
//	player3[0] = new Archer("객체 포인터 배열");
//	player3[1] = new Archer("객체 포인터 배열");
//	player3[2] = new Archer("객체 포인터 배열");
//
//	player1[0].SetName("객체 배열1");
//	player1[1].SetName("객체 배열1");
//	player1[2].SetName("객체 배열1");
//
//	player2[0].SetName("객체 배열2");
//	player2[1].SetName("객체 배열2");
//	player2[2].SetName("객체 배열2");
//
//	player3[0]->SetName("객체 포인터 배열");
//
//	return 0;
//}

// 그냥 넘어가 버렸다...??????? 소멸자 예제를 새롭게 공부해봐야겠다

/*
	[This의 규칙]
 - 객체 자기 자신의 주소값을 가지는 포인터이다
 - 클래스 내에서 사용가능하다
 - 자기자신의 객체를 뜻하기에 this.멤버변수, this.멤버함수 등의 활용이 가능하다
 
 - 왜 쓸까?
 - 매개변수와 멤버변수의 이름이 똑같다면 매개변수가 우선시 되어져서 멤버변수에 접근할 수가 없다!

*/

//int main(void)
//{
//	Archer* player1 = new Archer();
//	cout << player1 << endl;
//
//	Archer* player2 = new Archer();
//	cout << player2 << endl;
//
//	player1.Heal();
//
//	return 0;
//}

/*
	[5.복사생성자]
 - 

*/

//int main(void)
//{
//	Archer player1("홍길동");
//
//	Archer player2 = player1;
//
//	Archer player2(player1);
//
//	
//
//
//	return 0;
//}