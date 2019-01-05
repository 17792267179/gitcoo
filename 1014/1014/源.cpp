#include<iostream>
#include <cctype>
#include<string>
using namespace std;
const int MAX = 60;

int main() {
	string a, b, c, d;
	char t[2] ;
	
	cin >> a>>b>> c>> d;
	
	int i = 0; 
	int j = 0;
	while (i < a.length() && i < b.length()) {
		if (a[i] == b[i] && (a[i] >= 'A' && a[i] <= 'G')) {
			t[0] = a[i];
			break;
		}
		i++;
	}
	i = i + 1;
	while (i < a.length() && i < b.length()) {
		if (a[i] == b[i] && ((a[i] >= 'A' && a[i] <= 'N') || isdigit(a[i]))) {
			t[1] = a[i];
			break;
		}
		i++;
	}
	switch (t[0]) {
	case 'A':
		cout << "MON ";
		break;
	case 'B':
		cout << "TUE ";
		break;
	case 'C':
		cout << "WEN ";
		break;
	case 'D':
		cout << "THU ";
		break;
	case 'E':
		cout << "FRI ";
		break;
	case 'F':
		cout << "SAT ";
		break;
	case 'G':
		cout << "SUN ";
		break;

	}
	int m = isdigit(t[1]) ? t[1] - '0' : t[1] - 'A' + 10;
	cout << m<<":";
	while (j < c.length() && j < d.length()) {
		if (c[j] == d[j] && isalpha(c[j])) {
			break;
		}
		j++;
	}
	if (j < 10)
		cout << "0" << j << endl;
	else
		cout << j << endl;
	
	return 0;
	
		
	

}