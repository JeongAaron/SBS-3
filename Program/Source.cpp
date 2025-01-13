#include <iostream>

int data = 1;

int main()
{
#pragma region 스트림

	/*시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름

	<< 삽입연산자
	자신이 참조하고 있는 값을 반환하여 출력하는 연산자
	 
	int errorCode = -9999;
	std::cout << "Hello world" << std::endl;
	std::cout << "Error" << std::endl;
	std::cout <<"ErrorCode : " << errorCode << std::endl;
	int* ptr = new int;
	*ptr = 1;
	std::cout << ptr;
	delete ptr;

	>> 추출연산자
	특정한 값을 입력받은 다음 버퍼에 저장하는 연산자

	int n = 0;
	std::cin >> n;
	std::cout << "n의 값 :" << n << std::endl;*/

#pragma endregion

#pragma region 범위 지정 연산자

	/*여러 범위에서 사용되는 식별자를 구분하는데 사용되는 연산자*/

	/*int data = 10;
	std::cout << "지역 변수 data의 값 : " << data << std::endl;
	std::cout << "전역 변수 data의 값 : " << ::data << std::endl;*/

	/*범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가
	선언 되었을 때 가장 가까운 범위에 선언된 변수의 이름을
	사용 하는 범위 규칙이 존재하기 때문에 전역 변수가 호출되지 않는다	*/

#pragma endregion

#pragma region 동적 할당

	/*프로그램을 실행 중에 필요한 만큼 메모리를 할당하는 작업*/

	/*int* p = new int;
	*p = 100;
	std::cout << "p의 주소 : " << p << std::endl;
	std::cout << "p의 값 : " << *p << std::endl;
	delete p;
	p = nullptr;
	p = new int[3];
	std::cout << "p[]의 주소 : " << p << std::endl;
	for (int i = 0; i < 3; i++)
	{
		p[i] = (i + 1) * 10;
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << "p[" << i << "] 의 주소 : " << &p[i] << std::endl;
		std::cout << "p[" << i << "] 의 값 : " << p[i] << std::endl;

	}
	delete[] p;*/

#pragma endregion

	return 0;
}