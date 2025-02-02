#include <iostream>
#include "../Program/Terran.h"
#include "../Program/Vulture.h"
#include "../Program/Goliath.h"
#include "../Program/SiegeTank.h"

using namespace std;

int main()
{
#pragma region 가상 함수
	// 상속하는 클래스 내에서 같은 형태의 함수로 재정의 될 수 있는 함수

	//	Terran* terran = new Goliath();
	//	terran->Stats();
	//	cout << "Teeran의 메모리 크기 : " << sizeof(Terran) << endl;

	// 가상 함수는 실행 시간에 상위 클래스에 대한 참조로 하위 클래스에
	// 재정의된 함수를 호출할 수 있다.
#pragma endregion

#pragma region 가상 함수 포인터
	int n = 0;
	int x = 0;
	Terran* pointer = nullptr;
	while (x < 5)
	{
		cout << "유닛을 생성하세요 : ";
		cin >> n;
		cout << endl;
		switch (n)
		{
		case 1: pointer = new Vulture(); break;
		case 2: pointer = new SiegeTank(); break;
		case 3: pointer = new Goliath(); break;
		default: continue;
			break;
		}
		x++;
		pointer->Stats();
		cout << endl;

	}

	//	가상 함수는 한 개 이상의 가상 함수를 포함하는 클래스가 있을 때
	//	객체 주소에 가상 함수 테이블을 추가한다
#pragma endregion


}