#include <iostream>

int data = 1;

int main()
{
#pragma region ��Ʈ��

	/*�ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧

	<< ���Կ�����
	�ڽ��� �����ϰ� �ִ� ���� ��ȯ�Ͽ� ����ϴ� ������
	 
	int errorCode = -9999;
	std::cout << "Hello world" << std::endl;
	std::cout << "Error" << std::endl;
	std::cout <<"ErrorCode : " << errorCode << std::endl;
	int* ptr = new int;
	*ptr = 1;
	std::cout << ptr;
	delete ptr;

	>> ���⿬����
	Ư���� ���� �Է¹��� ���� ���ۿ� �����ϴ� ������

	int n = 0;
	std::cin >> n;
	std::cout << "n�� �� :" << n << std::endl;*/

#pragma endregion

#pragma region ���� ���� ������

	/*���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ���Ǵ� ������*/

	/*int data = 10;
	std::cout << "���� ���� data�� �� : " << data << std::endl;
	std::cout << "���� ���� data�� �� : " << ::data << std::endl;*/

	/*���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������
	���� �Ǿ��� �� ���� ����� ������ ����� ������ �̸���
	��� �ϴ� ���� ��Ģ�� �����ϱ� ������ ���� ������ ȣ����� �ʴ´�	*/

#pragma endregion

#pragma region ���� �Ҵ�

	/*���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾�*/

	/*int* p = new int;
	*p = 100;
	std::cout << "p�� �ּ� : " << p << std::endl;
	std::cout << "p�� �� : " << *p << std::endl;
	delete p;
	p = nullptr;
	p = new int[3];
	std::cout << "p[]�� �ּ� : " << p << std::endl;
	for (int i = 0; i < 3; i++)
	{
		p[i] = (i + 1) * 10;
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << "p[" << i << "] �� �ּ� : " << &p[i] << std::endl;
		std::cout << "p[" << i << "] �� �� : " << p[i] << std::endl;

	}
	delete[] p;*/

#pragma endregion

	return 0;
}