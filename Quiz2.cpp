#include<bits/stdc++.h>

using namespace std;

class Base {
public:
	virtual void show() {
		cout << " In Base ";
	}
};
class Derived: public Base {
public:
	void show() {
		cout << "In Derived ";
	}
};

int global = 10;
void func(int &x, int y)
{	x = x - y; y = x * 10;
	cout << x << "\t" << y << "\n";
}


class First {
public:
	First() { cout << "First's constructor called" << endl; }
	~First() { cout << "First's destructor called" << endl; }
};

class Second {
public:
	Second() { cout << "Second's constructor called" << endl; }
	~Second() { cout << "Second's destructor called" << endl; }
};

class Third {
public:
	Third() { cout << "Third's constructor called" << endl; }
	~Third() { cout << "Third's destructor called" << endl; }
};

class Fourth : public Third, public Second, public First {
public:
	Fourth() { cout << "Fourth's constructor called" << endl; }
	~Fourth() { cout << "Fourth's destructor called" << endl; }
};

class Test {
public:
	Test() {
		cout << "Constructing an object of Test " << endl;
	}
	~Test() {
		cout << "Destructing an object of Test " << endl;
	}
};

// namespace A {
// int i;
// void dispI() {cout << i << endl;}
// }

class A {
public:
	A() {
		cout << "A";
	}
	~A() {
		cout << "~A";
	}
};
class B {
public:
	B() {
		cout << "B";
	}
	~B() {
		cout << "~B";
	}
};
class C {
public:
	C() {
		cout << "C";
	}
	~C() {
		cout << "~C";
	}
private:
	B c1; A c2;
};
class D {
public:
	D() {
		cout << "D";
	}
	~D() {
		cout << "~D";
	}
};
class E: public C {
public:
	E() {
		cout << "E";
	}
	~E() {
		cout << "~E";
	}
private:
	D e1; C e2;
};


class Test1 {
private:
	int x;
public:
	Test1(int _x): x{_x} {

	}
	friend void printValue(Test1 obj);
};


void printValue(Test1 obj) {
	cout << obj.x << endl;
}


class Complex {
private:
	int real, imag;
public:
	Complex(int _real = 0, int _imag = 0): real{_real}, imag{_imag} {}
	friend Complex* add(const Complex &c1, const Complex &c2);
	void disp() {
		cout << this->real << " + i" << this->imag << endl;
	}
};

Complex* add(const Complex &c1, const Complex &c2) {
	return new Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	Complex c1(1, 0), c2(0, 1);
	Complex* ans = add(c1, c2);
	ans->disp();
	delete ans();


	// Test1 obj(10);
	// printValue(obj);


	// E e;



	// namespace Inside {
	// int insideI;
	// void
	// dispInsideI() {
	// 	cout << insideI << endl;
	// }
	// }
	// A::i = 10;
	// cout << A::i << endl;
	// A::dispI();
	// Inside::insideI = 20;
	// cout << Inside::insideI << endl;
	// Inside::dispInsideI();


	// try {
	// 	Test t1;
	// 	throw 10;
	// } catch (int i) {
	// 	cout << "Caught " << i << endl;
	// }
	//Constructing an object of Test
// Destructing an object of Test
// Caught 10



	// Fourth obj;
// 	Third's constructor called
// Second's constructor called
// First's constructor called
// Fourth's constructor called
// Fourth's destructor called
// First's destructor called
// Second's destructor called
// Third's destructor called


	// int global = 7;
	// func(::global, global);
	// cout << global << "\t" <<::global << "\n";
	// func(global, ::global);
	// cout << global << "\t" <<::global << "\n";

	// int n;
	// cout << (n = 4) << endl;
	// cout << (n == 4) << endl; cout << (n > 3) << endl;
	// cout << (n < 4) << endl; cout << (n = 0) << endl;
	// cout << (n == 0) << endl; cout << (n > 0) << endl;
	// cout << "Raja" << endl;
	// cout << (n && 4) << endl; cout << (n || 4) << endl;
	// cout << (!n) << endl;


	// int found = 0, count = 5;
	// if (!found || --count == 0)  // Short circuiting concept
	// 	cout << "danger" << endl;
	// cout << "count = " << count << endl;
	// danger
	// count =5


	// int i, j, m;
	// int a[5] = {8, 10, 1, 14, 16};
	// i = ++a[2]; m = a[i++];
	// cout << i << m; //32





	// int x = -3;
	// if (x < 10)
	// 	if (x > 0)
	// 		cout << "The number is positive." << endl;
	// 	else
	// 		cout << "The number is ______________." << endl;




	// Base *bp, b;
	// Derived d;
	// bp = &d;
	// // bp ->show();
	// // bp = &b;
	// // bp->show();


	// //New
	// bp->Base::show();


	return 0;






	// double Op1 = 10, Op2 = 5, Res;
	// char Op; cout << Op << endl;
	// try {
	// 	if (Op != '+' && Op != '-' && Op != '*' && Op != '/')
	// 		throw Op;
	// 	switch (Op) {
	// 	case '+': Res = Op1 + Op2;
	// 		break;
	// 	case '-': Res = Op1 - Op2;
	// 		break;
	// 	case '*': Res = Op1 * Op2;
	// 		break;
	// 	case '/': Res = Op1 / Op2;
	// 		break;
	// 	}
	// 	cout << "\n" << Op1 << " " << Op << " " <<
	// 	     Op2 << " = " << Res;
	// }
	// catch (const char n)
	// {	cout << "\n" << " is not a valid operator";
	// } return 0;
}