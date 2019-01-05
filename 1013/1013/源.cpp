#include<iostream>
using namespace std;


int isSushu(int n) {
	
	for (int c = 2; c*c <= n; c++) {
		if (n % c == 0)
			return 0;
	}	
	return 1;
	
}

int main() {
	int arr[1000] = { 0 };
	int k=0;
	int a, b;
	cin >> a >> b;
	for (int i = 2; i < 10000; i++) {
		if (isSushu(i)) {
			arr[k++] = i;
		}
	}
	/*
	for (int i = 0; i < k; i++) {
		cout << arr[i] << " ";
	}
	*/
	for (int i = a - 1; i < b; i++) {
		if ((i - a+2) % 10 == 0)
			cout << arr[i] << endl;
		else
			cout << arr[i] << " ";
	}
	return 0;
}