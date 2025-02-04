#include <iostream>

using namespace std;

template <typename T>
class List
{
private:
	int size;
	int index;
	T* pointer;
public:
	List()
	{
		size = 0;
		index = 0;
		pointer = nullptr;
	}
	void Resize(int size)
	{
		this->size = size;
		pointer = new T[size];
		for (int i = 0; i < size; i++)
		{
			pointer[i] = 0;
		}
	}
	void Add(T data)
	{
		if (index >= size)
		{
			cout << "Index Out of Range" << endl;
		}
		else
		{
			pointer[index++] = data;
		}
	}
	const T& operator[](int index)
	{
		return pointer[index];
	}
	~List()
	{
		if (pointer != nullptr)
		{
			delete[] pointer;
		}
	}
};

template <typename T>
bool Same(T agument, T parameter)
{
	return agument == parameter;
}
template<>
bool Same(const char* x, const char* y)
{
	cout << "템플릿 특수화" << endl;
	return strlen(x) == strlen(y);
}

int main()
{
#pragma region 템플릿
	//	데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터 형식을
	//	가질 수 있는 기술에 중점을 두어 재사용성을 높일 수 있는 기능

	//	List<int> list;
	//	list.Resize(5);
	//	list.Add(1);
	//	list.Add(2);
	//	list.Add(3);
	//	list.Add(4);
	//	list.Add(5);
	//	list.Add(6);
	//	for (int i = 0; i < 5; i++)
	//	{
	//		cout << list[i] << endl;
	//	}

#pragma endregion

#pragma region 템플릿 특수화
	//	특정 자료형에 대해 다르게 처리하고 싶은 경우 특정한 자료형만
	//	다른 형식으로 동작시키는 템플릿 기능

	//	cout << Same(10, 10) << endl;
	//	cout << Same('A', 'B') << endl;
	//	cout << Same(12.5f, 12.5f) << endl;
	//	cout << Same("banana", "orange") << endl;
#pragma endregion

}
