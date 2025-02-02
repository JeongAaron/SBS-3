#include <iostream>

using namespace std;

class Vector2
{
private:
	float x;
	float y;
public:
	Vector2(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
	const float& X()
	{
		return x;
	}
	const float& Y()
	{
		return y;
	}
	Vector2& operator + (const Vector2& clone)
	{
		Vector2 vector(x + clone.x, y + clone.y);
		return vector;
	}
	Vector2& operator - (const Vector2& clone)
	{
		Vector2 vector(x - clone.x, y - clone.y);
		return vector;
	}
	Vector2& operator * (const Vector2& clone)
	{
		Vector2 vector(x * clone.x, y * clone.y);
		return vector;
	}
	Vector2& operator / (const Vector2& clone)
	{
		Vector2 vector(x / clone.x, y / clone.y);
		return vector;
	}
	Vector2& operator++()
	{
		this->x = ++x;
		this->y = ++y;
		return *this;
	}
	Vector2& operator--()
	{
		this->x = --x;
		this->y = --y;
		return *this;
	}
	Vector2& operator++(int)
	{
		Vector2 clone(x, y);
		this->x++;
		this->y++;
		return clone;
	}
	Vector2& operator--(int)
	{
		Vector2 clone(x, y);
		this->x--;
		this->y--;
		return clone;
	}


};

int main()
{
#pragma region 연산자 오버로딩 
	//	2항 연산자
	Vector2 direction1(2, 7);
	Vector2 direction2(5, 5);

	Vector2 direction = direction1 + direction2;

	cout << direction.X() << " " << direction.Y() << endl;


	Vector2 x = direction1 - direction2;

	cout << x.X() << " " << x.Y() << endl;

	Vector2 y = direction1 * direction2;

	cout << y.X() << " " << y.Y() << endl;

	Vector2 z = direction1 / direction2;

	cout << z.X() << " " << z.Y() << endl;

	//	전위증감 연산자

	++direction1;

	cout << direction1.X() << " " << direction1.Y() << endl;

	--direction1;

	cout << direction1.X() << " " << direction1.Y() << endl;

	// 후위증감 연산자

	cout << direction1++.X() << " " << direction1.Y() << endl;

	cout << direction1.X() << " " << direction1.Y() << endl;

#pragma endregion

	return 0;
}
