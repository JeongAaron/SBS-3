#include <iostream>

using namespace std;

namespace Aus
{
	int area = 7741000;

	void Size()
	{
		cout << "호주의 면적 : " << area << endl;
	}
}

namespace Chn
{
	int area = 9597000;

	void Size()
	{
		cout << "중국의 면적 : " << area << endl;
	}
}

using namespace Aus;

class Object
{
private:
	static int count;

public:
	Object()
	{
		cout << "Created Object" << endl;
	}
	~Object()
	{
		count++;
		cout << "Kill Count : " << count << endl;
		cout << "Destoryed Object" << endl;
	}
};

int Object::count = 0;

int main()
{
#pragma region 이름 공간
	//	속성을 구분할 수 있도록 휴효 범위를 설정하는 영역

	//	Size();
	//	Chn::Size();
#pragma endregion

#pragma region 생성자
	//	클래스의 인스턴스가 생성되는 시점에서 자동으로 호출되는 특수한 멤버 함수

	//	Object object;

	//	생성자의 경우 객체가 생성될 때 단 한 번만 호출되며,
	//	생성자는 반환형이 존재하지 않기 때문에 생성자가 호출되기 전에는
	//	객체에 대한 메모리가 할당되지 않는다
#pragma endregion

#pragma region 소멸자
	//	객체가 소멸될 때 자동으로 실행되는 클래스의 멤버 함수

	//	Object* object1 = new Object;
	//	
	//	delete object1;
	//	
	//	Object* object2 = new Object;
	//	
	//	delete object2;
	//	
	//	Object* object3 = new Object;
	//	
	//	delete object3;


	//	소멸자는 객체가 메모리에서 해제될 때 단 한 번만 호출되며,
	//	소멸자에는 매개 변수를 생성하여 사용할 수 없다
#pragma endregion

	return 0;
}