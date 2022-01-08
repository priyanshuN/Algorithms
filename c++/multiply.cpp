#include<bits/stdc++.h>
using namespace std;

void multiply(int a[][2],int b[][2],int e[][2])
{
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
			e[i][j]=0;
	}
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<2;++k)
				e[i][j]+=a[i][k]*b[k][j];
		}
	}
}
int main()
{
    int d[2][2]={{1,1},{1,0}};
    int e[2][2];
    for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
			e[i][j]=0;
	}
    multiply(d,d,e);
    for(int i1=0;i1<2;++i1)
    {
        for(int j1=0;j1<2;++j1)
        {
            cout<<e[i1][j1]<<' ';
        }
    }
}
