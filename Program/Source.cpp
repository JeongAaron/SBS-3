#include <iostream>
#include <vector>

using namespace std;

int main()
{
#pragma region vector container
	vector<int> vector;
	for (int i = 0; i < 5; i++)
	{
		vector.push_back((i + 1) * 10);
		cout << vector[i] << " ";
	}
	cout << endl;
	cout << "vector size : " << vector.size() << endl;
	cout << "capacity °ª : " << vector.capacity() << endl;
	vector.pop_back();
	vector.pop_back();
	vector.reserve(10);
	for (int i = 0; i < 15; i++)
	{
		vector.push_back((i + 1) * 10);
		cout << vector[i] << " ";
	}
	cout << endl;
	cout << "vector size : " << vector.size() << endl;
	cout << "capacity °ª : " << vector.capacity() << endl;
#pragma endregion

}
