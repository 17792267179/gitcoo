#include<iostream>
#include<cmath>
using namespace std;

int sushu(int n)
{
	int i, flag = 1;
	for (i = 2; i <= (int)sqrt(n); i++)
	{
		if (n % i == 0)
		{
			flag = 0;
		}
	}
	return flag;
}


int huiwenshu(int n) {
	int temp;
	temp = n / 10;
	while (temp != 0) {
		n = n * 10;
		n = n + temp % 10;
		temp = temp / 10;
	}
	return n;
	

}

int main() {
	int a, b,i,num;
	cin >> a >> b;
	if (a <= 11) {
		for (i = a; i <= 11&&i<=b; i++) {
			if(sushu(i)) {
				cout << i << endl;
			}
		}
	}
	if (b > 100) {
		for (i = 10; i < 99999; i++) {
			num = huiwenshu(i);
			if (num > b)
				break;
			if (num < a)
				continue;//小于A的输出过了
			if (sushu(num))
				cout << num << endl;
		}
	}
	
	return 0;
}

