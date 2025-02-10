#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main()
{
#pragma region Iterator
	//	컨테이너 내에 있는 원소를 순회하기 위해 사용되는 포인터

	//	std::vector<int> vector;
	//	std::vector<int>::iterator iterator;
	//	vector.push_back(10);
	//	vector.push_back(20);
	//	vector.push_back(30);
	//	vector.push_back(40);
	//	vector.push_back(50);
	//	for (iterator = vector.begin(); iterator != vector.end(); iterator++)
	//	{
	//		cout << *iterator << " ";
	//	}
#pragma endregion

#pragma region set
	//	std::set<int> set;
	//	set.insert(10);
	//	set.insert(20);
	//	set.insert(30);
	//	set.insert(40);
	//	set.insert(50);
	//	if (set.find(10) != set.end())
	//	{
	//		cout << "Find" << endl;
	//	}
	//	else
	//	{
	//		cout << "Not Ket Found" << endl;
	//	}
	//	
	//	for (std::set<int>::iterator iterator = set.begin(); iterator != set.end(); iterator++)
	//	{
	//		cout << *iterator << " ";
	//	}
	//	cout << sizeof(set) << endl;
#pragma endregion

#pragma region map
	std::map<string, int>map;
	map.insert({ "Sword",1000 });
	map.insert({ "Armor",2000 });
	if (map.find("Armor") != map.end())
	{
		cout << "Find" << endl;
	}
	else
	{
		cout << "Not Key Found" << endl;
	}
	map.erase("Sword");
	for (std::map<string, int>::iterator iterator = map.begin(); iterator != map.end(); iterator++)
	{
		cout << iterator->first << endl;
		cout << iterator->second << endl;
	}
#pragma endregion


}
