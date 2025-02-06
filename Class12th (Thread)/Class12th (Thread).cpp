#include <iostream>
#include <thread>

using namespace std;

void input()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "input..." << endl;
	}
}

void Renderer()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Renderer" << endl;
	}
}

int main()
{
#pragma region 스레드
	//	프로세스 내에서 실행되는 하나의 작업 단위
	//	thread thread1(input);
	//	thread thread2(Renderer);
	//	thread1.join();
	//	thread2.join();
#pragma endregion
}
