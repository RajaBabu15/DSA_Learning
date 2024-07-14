#include<bits/stdc++.h>

using namespace std;

// class A {
// public:
// 	A() {
// 		cout << "A";
// 	}
// 	~A() {
// 		cout << "~A";
// 	}
// };
// class B {
// public:
// 	B() {
// 		cout << "B";
// 	}
// 	~B() {
// 		cout << "~B";
// 	}
// };
// class C {
// public:
// 	C() {
// 		cout << "C";
// 	}
// 	~C() {
// 		cout << "~C";
// 	}
// 	B c1, c2;
// };

// class D {
// public:
// 	D() {
// 		cout << "D";
// 	}
// 	~D() {
// 		cout << "~D";
// 	}
// };
// class E: public C {
// public:
// 	E() {
// 		cout << "E";
// 	}
// 	~E() {
// 		cout << "~E";
// 	}
// private:
// 	D e1, e2;
// };

class number
{
	float x;
public :
	number (float);
	number() {};
	~number()
	{
		cout << "\n In destructor";
	}
	void operator ++ (int) // postfix notation
	{ x++; }
	void operator --() // prefix notation
	{
		--x;
	}
	void show()
	{
		cout << "\n x=" << x;
	}
};
number :: number ( float k)
{
	if (k == 0)
		throw number();
	else
		x = k;
}




void solve() {
	// E e;

	try
	{
		number N(2.4);
		cout << "\n Before Increasing:";
		N.show();
		cout << "\n After Increasing:";
		N++; // postfix increment
		N.show();
		cout << "\n After Decrementation:";
		--N; // prefix decrement
		N.show();
		number N1(0);
	}
	catch (...)
	{
		cout << "\n invalid number";
		exit(1);
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	while (t--) {
		solve();
	}
	return 0;
}