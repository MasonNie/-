// ceShi.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "algorithm"
using namespace std;

void show(int matrix[][10], int n) {
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << matrix[i][j];
			if (j!=n)//最后一个不加空格
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}
int main()
{
	int a[10][10], b[10][10], ans[10][10];
	int n, k;
	n = k = 0;

	while (cin >> n >> k) {
		for (size_t i = 0; i < n; i++)//输入
		{
			for (size_t j = 0; j < n; j++)
			{
				cin >> a[i][j];
				b[i][j] = ans[i][j]=a[i][j];
			}
		}
		for (size_t i = 1; i < k; i++)
		{
			int x, y;
			for (x = 0; x < n; x++)
			{
				for (y = 0; y < n; y++)
				{
					int temp = 0;
					for (size_t z = 0; z < n; z++)
					{
						temp = temp + a[x][z] * b[z][y];
					}
					ans[x][y] = temp;
				}

			}
			for (size_t i = 0; i < n; i++)
			{
				for (size_t j = 0; j < n; j++)
				{
					a[i][j] = ans[i][j];
				}
			}
		}//计算幂
		show(ans, n);

	}

	//cout << "n:" << n <<ends<< "k:" << k;
	return 0;
}

