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
#pragma region 스마트 포인터
	//	포인터를 사용하는 동시에 자동으로 메모리 관리를 해주며,
	//	경계 확인과 같은 추가 기능을 제공하는 추상데이터 포인터 형식	

#pragma region unique pointer
	//	특정한 객체를 하나의 스마트 포인터만 가리킬 수 있도록 되어 있는 포인터

	//	unique_ptr<Packet> uniquePointer = make_unique<Packet>();
	//	cout << "uniquePointer Error Code : " << uniquePointer->ErrorCode() << endl;
	//	unique_ptr<Packet> uniqueReference = move(uniquePointer);
	//	cout << "uniquePointer Error Code : " << uniquePointer->ErrorCode() << endl; 포인터가 해제되어 있음으로 터짐
	//	cout << "uniqueReference : " << uniqueReference->ErrorCode() << endl;
#pragma endregion

#pragma region shared pointer
	//	하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며,
	//	모든 포인터 객체가 자원 객체를 필요하지 않을 때 해제하도록 설계되어 있는 포인터

	shared_ptr<Resource> oil = make_shared<Resource>();
	cout << "Reference Count : " << oil.use_count() << endl;
	shared_ptr<Resource> mineral = oil;
	cout << "Reference Count : " << oil.use_count() << endl;
	shared_ptr<Resource> gas = mineral;
	cout << "Reference Count : " << oil.use_count() << endl;
#pragma endregion


#pragma endregion
}
