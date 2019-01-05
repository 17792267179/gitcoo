
#include<cstdlib>
#include <iostream>
#include <string>
using namespace std;
int  number[10];

bool PointGame(int n)
{
	if (n == 1)
	{
		if (number[0]==24 )
				return true;
		else
				return false;
	}

	//两个for循环获得初始的两个数（i=0:[((a,b),d),c];i=1:[((b,c),a),d];i=2:[(c,d),(a,b)]）
	for (int i = 0; i < n; i++)
	{

		for (int j = i + 1; j < n; j++)
		{
			int a, b;  //a保存上一步操作的结果，b保存这一次将要操作的数

			a = number[i];  //保留上一步操作的结果（根据初始i的不同，a,b,number的功能需互换）
			b = number[j];  //保留这一步操作的数
			number[j] = number[n - 1]; //获取下一步要操作的数

	
			number[i] = a + b;                          //存储操作的结果
			if (PointGame(n - 1))
				return true;

			number[i] = a - b;
			if (PointGame(n - 1))
				return true;

			number[i] = b - a;
			if (PointGame(n - 1))
				return true;

			number[i] = a * b;
			if (PointGame(n - 1))
				return true;

			if (b != 0)
			{
				number[i] = a / b;
				if (PointGame(n - 1))
					return true;
			}

			if (a != 0)
			{
				number[i] = b / a;
				if (PointGame(n - 1))
					return true;
			}

			number[i] = a;//恢复
			number[j] = b;
		}
	}
	return false;

}

int  main()
{
	int r;
	cin >> r;
	int m, n;
	int a = 1;
	int b =1;
	while(r>0){
		for (int i = 0; i < 4; i++)
			cin >> number[i];

		if (PointGame(4))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		r--;
	}
	return 0;
	
}





