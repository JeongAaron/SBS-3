#include <iostream>
#include <stack>
using namespace std;

int main()
{
#pragma region Stack
	stack<int> stack;
	stack.push(10);
	stack.push(20);
	stack.push(30);
	cout << stack.size() << endl;
	while (stack.empty() != 1 )
	{
		cout << stack.top() << endl;
		stack.pop();
	}
	cout << stack.size() << endl;
	cout << stack.empty() << endl;
	std::stack<int> stack1;
	stack1.push(5);
	stack1.push(7);
	stack1.push(9);
	std::stack<int> stack2;
	stack2.push(4);
	stack2.push(6);
	stack2.push(8);
	stack2.push(10);
	stack1.swap(stack2);
	while (stack1.empty() != 1)
	{
		cout << stack1.top() << endl;
		stack1.pop();
	}
#pragma endregion

}
