#include<bits/stdc++.h>
using namespace std;

void multiply(int a[][2],int b[][2],int e[][2])
{
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<2;++k)
				e[i][j]+=a[i][k]*b[k][j];
		}
	}
}

void fib(int a[2][2],int n,int b[2][2])
{
	if(n==1)
		return a;
	fib(a,n/2,b);
	multiply(b,b,b);
	if(n%2==1)
		b=multiply(b,a);
	return b;
}

int main()
{
	int t,n,m,d1=1000000007;
	cin>>t;
	for(int i=0;i<t;++i)
	{
		cin>>m>>n;
		vector<int>a,b;
		for(int j=0;j<m;++j)
		{
			int x;
			cin>>x;
			a.push_back(x);
		}
		for(int j=0;j<m;++j)
		{
			int x;
			cin>>x;
			b.push_back(x);
		}
		int z=0;
		for(int j=0;j<m;++j)
		{
			for(int k=0;k<m;++k)
			{
				int d[2][2]={{1,1},{1,0}};
				int e[2][2];
				for(int i2=0;i2<2;++i2)
                {
                    for(int j2=0;j2<2;++j2)
                        e[i2][j2]=0;
                }
				multiply(d,d,e);
				for(int i1=0;i1<2;++i1){
                    for(int j1=0;j1<2;++j1){
                        cout<<e[i1][j1]<<' ';
                    }
				}

				int f1=a[j],f2=b[k];
				int c[2][2]={{0,0},{0,0}};
				fib(d,n,c);
				z+=c[1][0]*f1+c[1][1]*f2;
				//c=c%d;
				//z=z%d+c%d;
				//z=z%d;
				cout<<z<<endl;
				//z=z+c;
			}
		}
		//cout<<z<<endl;
	}
	return 0;
}

