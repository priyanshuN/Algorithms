#include<bits/stdc++.h>
using namespace std;

const long int MAX=100000;
//int f[MAX]={0};

int (*multiply(int (*a)[2],int (*c)[2]))[2]
{
	int (*b)[2];
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
			b[i][j]=0;
	}
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			for(int k=0;k<2;++k)
				b[i][j]+=a[i][k]*c[k][j];
		}
	}
	return b;
}

int (*fib(int (*a)[2],int n))[2]
{
	int (*b)[2];
	if(n==1)
		return a;
	b=fib(a,n/2);
	b=multiply(b,b);
	if(n%2==1)
		b=multiply(b,a);
	return b;
}

/*int fib(int n,int z,int m)
{
    int f[MAX];
    if(n==0)
        return 0;
    if (n == 1)
        return (z);
    if (n == 2)
       return (m);
    if (f[n])
        return f[n];
    int k = (n & 1)? (n+1)/2 : n/2;
    f[n] = (n & 1)? (fib(k,z,m)*fib(k,z,m) + fib(k-1,z,m)*fib(k-1,z,m))
           : (2*fib(k-1,z,m) + fib(k,z,m))*fib(k,z,m);

    return f[n];
}*/



int main()
{
	int t,n,m,d=1000000007;
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
				int d[][2]={(1,1),(1,0)};
				int (*e)[2]=multiply(d,d);
				for(int i1=0;i1<2;++i1){
                    for(int j1=0;j<12;++j1){
                        cout<<e[i1][j1]<<' ';
                    }
				}

				int f1=a[j],f2=b[k];
				int(*c)[2]=fib(d,n);
				z+=c[1][0]*f1+c[1][1]*f2;
				//c=c%d;
				//z=z%d+c%d;
				//z=z%d;
				cout<<z<<endl;
				//z=z+c;
			}
		}
		cout<<z<<endl;
	}
	return 0;
}
