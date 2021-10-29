/*
#include <iostream>
using namespace std;


int dp[10000];
int arr1[35];
int arr2[35];

int mv, mp;
int main()
{
	cin >> mv >> mp;
	int m, n;

	for (int i = 0; i < mp; i++)
	{
		cin >> arr1[i] >> arr2[i];

		arr2[i] *= arr1[i];
	}



	for (int i = 1; i <= mp; i++)
	{
		for (int j = mv; j >= 0; j--)
		{
			if (j >= arr1[i])
			{
				dp[j] = max(dp[j], dp[j - arr1[i]] + arr2[i]);
			}

		}
	}
	cout << dp[mv] << endl;



	return 0;
}*/