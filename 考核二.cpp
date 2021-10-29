#include <iostream>
#include <cstdio>

using namespace std;
const int Edge = 500;//设定一个边界的值
int n, m, a = 0;//m,n为边界的值 a为最后结果的值
int F[Edge][Edge];//利用边界创建二维数组
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };


void dfs(int x, int y)
{
	if (x<0 || x>n + 1 || y<0 || y>m + 1||F[x][y])
		return;
	F[x][y] = 1;
	for (int i = 0; i < 4; i++)
	{
		int a = x + dx[i], b = y + dy[i];

		dfs(a, b);//遍历数组搜索

	}


}

int main()
{
	cin >> n >> m;//输入想要的边界长度
	for (int i =1;i<=n;i++)
		for(int j = 1;j<=m;j++)//经过二维数组
		{
			char q;
			cin >> q;//输入该位置上是0还是*
			if (q == '*')
				F[i][j] = 1;
			else
				F[i][j] = 0;
		//如果该位置上是星号，则该位置值为一，否则为零
		}
	dfs(0, 0);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (!F[i][j])//如果该位置值为0 则a+1
				a++;


				cout << a << endl;//输出a


	return 0;
}

