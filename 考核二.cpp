#include <iostream>
#include <cstdio>

using namespace std;
const int Edge = 500;//�趨һ���߽��ֵ
int n, m, a = 0;//m,nΪ�߽��ֵ aΪ�������ֵ
int F[Edge][Edge];//���ñ߽紴����ά����
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

		dfs(a, b);//������������

	}


}

int main()
{
	cin >> n >> m;//������Ҫ�ı߽糤��
	for (int i =1;i<=n;i++)
		for(int j = 1;j<=m;j++)//������ά����
		{
			char q;
			cin >> q;//�����λ������0����*
			if (q == '*')
				F[i][j] = 1;
			else
				F[i][j] = 0;
		//�����λ�������Ǻţ����λ��ֵΪһ������Ϊ��
		}
	dfs(0, 0);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (!F[i][j])//�����λ��ֵΪ0 ��a+1
				a++;


				cout << a << endl;//���a


	return 0;
}

