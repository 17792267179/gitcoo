
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

	//����forѭ����ó�ʼ����������i=0:[((a,b),d),c];i=1:[((b,c),a),d];i=2:[(c,d),(a,b)]��
	for (int i = 0; i < n; i++)
	{

		for (int j = i + 1; j < n; j++)
		{
			int a, b;  //a������һ�������Ľ����b������һ�ν�Ҫ��������

			a = number[i];  //������һ�������Ľ�������ݳ�ʼi�Ĳ�ͬ��a,b,number�Ĺ����軥����
			b = number[j];  //������һ����������
			number[j] = number[n - 1]; //��ȡ��һ��Ҫ��������

	
			number[i] = a + b;                          //�洢�����Ľ��
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

			number[i] = a;//�ָ�
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





