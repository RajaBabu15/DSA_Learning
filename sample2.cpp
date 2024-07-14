#include<bits/stdc++.h>
using namespace std;

class sampleclass {
private: int a = 10;
public:
	sampleclass() {
		cout << "Hellow" << endl;
	}
	void show();
};

void sampleclass::show() {
	cout << a << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	sampleclass obj;
	obj.show();
	return  0;
}