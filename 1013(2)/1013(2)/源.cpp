#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int a) {
	for (int i = 2; i*i <= a; i++){
		if (a%i == 0)
			return false;
	}
	return true;
}
int main() {
	int N, M, num = 2, cnt = 0;
	cin >> N>>M;
	vector<int>v;
	while (cnt < M) {
		if (isPrime(num)) {
			cnt++;
			if (cnt >= N)
				v.push_back(num);
		}
		num++;
	}
	cnt = 0;
	for (int i = 0; i < v.size(); i++) {
		cnt++;
		if (cnt % 10 != 1)
			cout << " ";
		cout << v[i];
		if (cnt % 10 == 0)
			cout << "\n";
	}
	return 0;
}