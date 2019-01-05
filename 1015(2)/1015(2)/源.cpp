#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
struct node {
	int num, de, cai;
};
int cmp(struct node a, struct node b) {
	if (a.de + a.cai != b.de + b.cai)
		return (a.de + a.cai) > (b.de + b.cai);
	else if (a.de != b.de)
		return a.de > b.de;
	else
		return a.num < b.num;
	
	
}



int main() {
	int n, low, high;
	cin >> n >> low >> high;
	vector<node>v[4];
	node a;
	int total = n;
	for (int i = 0; i < n; i++) {
		cin >> a.num >> a.de >> a.cai;
		if (a.de < low || a.cai < low)
			total--;
		else if (a.de >= high && a.cai >= high)
			v[0].push_back(a);
		else if (a.de >= high && a.cai < high)
			v[1].push_back(a);
		else if (a.de < high&&a.cai >= high)
			v[2].push_back(a);
		else
			v[3].push_back(a);
	}
	cout << total << endl;
	for (int i = 0; i < 4; i++) {
		sort(v[i].begin(), v[i].end(), cmp);
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j].num << " " << v[i][j].de << " " << v[i][j].cai << endl;
		}
	}
	return 0;

}