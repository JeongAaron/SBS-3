#include <iostream>

using namespace std;

class Packet
{
private:
	int errorCode = -9999;
public:
	Packet()
	{
		cout << "Created Packet" << endl;
	}
	const int & ErrorCode()
	{
		return errorCode;
	}
	~Packet()
	{
		cout << "Destoryed Packet" << endl;
	}
};

class Resource
{
private:

public:
	Resource()
	{
		cout << "Created Resource" << endl;
	}
	~Resource()
	{
		cout << "Destroyed Resource" << endl;
	}
};

int main()
{
#pragma region ����Ʈ ������
	//	�����͸� ����ϴ� ���ÿ� �ڵ����� �޸� ������ ���ָ�,
	//	��� Ȯ�ΰ� ���� �߰� ����� �����ϴ� �߻����� ������ ����	

#pragma region unique pointer
	//	Ư���� ��ü�� �ϳ��� ����Ʈ �����͸� ����ų �� �ֵ��� �Ǿ� �ִ� ������

	//	unique_ptr<Packet> uniquePointer = make_unique<Packet>();
	//	cout << "uniquePointer Error Code : " << uniquePointer->ErrorCode() << endl;
	//	unique_ptr<Packet> uniqueReference = move(uniquePointer);
	//	cout << "uniquePointer Error Code : " << uniquePointer->ErrorCode() << endl; �����Ͱ� �����Ǿ� �������� ����
	//	cout << "uniqueReference : " << uniqueReference->ErrorCode() << endl;
#pragma endregion

#pragma region shared pointer
	//	�ϳ��� �ڿ� ��ü�� ���� ������ ��ü�� ����ų �� ������,
	//	��� ������ ��ü�� �ڿ� ��ü�� �ʿ����� ���� �� �����ϵ��� ����Ǿ� �ִ� ������

	shared_ptr<Resource> oil = make_shared<Resource>();
	cout << "Reference Count : " << oil.use_count() << endl;
	shared_ptr<Resource> mineral = oil;
	cout << "Reference Count : " << oil.use_count() << endl;
	shared_ptr<Resource> gas = mineral;
	cout << "Reference Count : " << oil.use_count() << endl;
#pragma endregion


#pragma endregion
}
