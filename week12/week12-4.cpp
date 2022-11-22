#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n],b[n][n],c[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>b[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
		printf("%3d",c[i][j]);
		cout<<" ";
	}
		cout<<endl;
	}
}
