#include <iostream>

class GameObject
{
#pragma region 접근 지정자
	//	클래스 내부에 포함되어 있는 속성에 접근 범위를 제한하는 지정자

	//	public: 클래스 내부와 자기가 상속하고 있는 클래스
	//	그리고 클래스 외부에서도 접근을 허용하는 지정자

	//	protected : 클래스 내부와 자기가 상속하고 있는 클래스 까지만
	//	접근을 허용하는 지정자

	//	 private : 클래스 내부까지만 접근을 허용하는 지정자
#pragma endregion
private:
	int x;
protected:
	int y;
public:
	int z;

	int Z()
	{
		return z;
	}
};

void Swap(int& x, int& y)
{
	int a = x;
	x = y;
	y = a;
}

int main()
{
#pragma region 클래스

	//	사용자 정의 데이터 유형으로 속성과 함수가 포함되어 있으며, 
	//	클래스를 통해 객체를 생성하고 접근하고 사용하는 집합체

	//	GameObject gameObject; // [ ] -> Stack
	//	
	//	gameObject.z = 10;
	//	
	//	std::cout << "gameObject의 z값 : " << gameObject.z << std::endl;
	//	
	//	GameObject gameObject1;
	//	gameObject1.z = 5;
	//	GameObject gameObject2;
	//	gameObject2.z = 10;
	//	GameObject gameObject3;
	//	gameObject3.z = 20;
	//	
	//	std::cout << "gameObject1의 z 값 : " << gameObject1.Z() << std::endl;
	//	std::cout << "gameObject2의 z 값 : " << gameObject2.Z() << std::endl;
	//	std::cout << "gameObject3의 z 값 : " << gameObject3.Z() << std::endl;

	//	클래스의 경우 클래스 내부에 있는 변수는 클래스의 메모리 영역에 포함되지만,
	//	정적 변수와 함수의 메모리는 클래스 영역에 포함되지 않는다.

#pragma endregion

#pragma region 참조자
	//	어떤 변수의 메모리 공간에 다른 이름을 지정하는 지정자

	//	int data = 10;
	//	
	//	int& reference = data;
	//	
	//	std::cout << "data의 값 : " << data << std::endl;
	//	std::cout << "reference의 값 : " << reference << std::endl;
	//	
	//	reference = 20;
	//	
	//	std::cout << "data의 값 : " << data << std::endl;
	//	std::cout << "reference의 값 : " << reference << std::endl;

#pragma endregion

	//	int a = 10;
	//	int b = 20;
	//	Swap(a, b);
	//	std::cout << "a의 값 : " << a << std::endl;
	//	std::cout << "b의 값 : " << b << std::endl;
	//	return 0;
}