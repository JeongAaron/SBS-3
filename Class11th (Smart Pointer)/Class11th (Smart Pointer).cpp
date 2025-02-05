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
	const int& ErrorCode()
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
	shared_ptr<Resource> sharedPointer;
public:
	Resource()
	{
		cout << "Created Resource" << endl;
	}
	void Share(const shared_ptr<Resource>& resource) //	순환참조
	{
		sharedPointer = resource;
	}
	~Resource()
	{
		cout << "Destroyed Resource" << endl;
	}
};

class Character
{
private:
	weak_ptr<Character> weakPointer;
public:
	Character()
	{
		cout << "Created Character" << endl;
	}

	void Partner(const weak_ptr<Character>& character)
	{
		weakPointer = character;
	}
	~Character()
	{
		cout << "Destroyed Character" << endl;
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

	//	shared_ptr<Resource> oil = make_shared<Resource>();
	//	cout << "Reference Count : " << oil.use_count() << endl;
	//	shared_ptr<Resource> mineral = oil;
	//	cout << "Reference Count : " << oil.use_count() << endl;
	//	shared_ptr<Resource> gas = mineral;
	//	cout << "Reference Count : " << oil.use_count() << endl;
	//	shared_ptr<Resource> oil = make_shared<Resource>();
	//	shared_ptr<Resource> mineral = make_shared<Resource>();
	//	oil->Share(mineral);
	//	mineral->Share(oil);
	//	cout << "oil Reference count : " << oil.use_count() << endl;
	//	cout << "mineral Reference count : "<< mineral.use_count() << endl;

#pragma endregion

#pragma region weak pointer
	//	자원 객체를 소유하지 않기 때문에 공유 포인터로 관리되는 자원 객체를 가리켜서
	//	참조 개수에 영향을 미치지 않게 하는 포인터

	//	shared_ptr<Character> character1 = make_shared<Character>();
	//	shared_ptr<Character> character2 = make_shared<Character>();
	//	character1->Partner(character2);
	//	character2->Partner(character1);
	//	cout << character1.use_count() << endl;
	//	cout << character2.use_count() << endl;

#pragma endregion

#pragma endregion
}
