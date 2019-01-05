#include<iostream>
#include<string>
using namespace std;

int main() {
	int c = 0;
	int d = 0;
	string a, b;
	int Da, Db;
	cin >> a >> Da >> b >> Db;
	for (int i = 0; i < a.size(); i++) {
		if (Da == a[i]-'0') {
			c++;
		}
	}
	for (int i = 0; i < b.size(); i++) {
		if (Db == b[i]-'0') {
			d++;
		}
	}
	int n=Da;
	if (c == 0)
		n = 0;
	else{
		for (int i = 0; i < c-1; i++) {
			n = n * 10 + Da;
		}
	}
	int m=Db;
	if (d == 0)
		m = 0;
	else {
		for (int i = 0; i < d - 1; i++) {
			m = m * 10 + Db;
		}
	}
	cout << n +m << endl;
	
	/*
	string a = "123";
	int b = atoi(a.c_str());
	cout << b;
	*/

	return 0;
}