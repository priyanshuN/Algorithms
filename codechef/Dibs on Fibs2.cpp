#include<bits/stdc++.h>
using namespace std;

void multiply(long int F[2][2],long int M[2][2]);

void power(long int F[2][2], int n);

int fib(int n,long int z,long int m)
{
  int d=1000000007;
  long int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  else if(n==1)
    return z;
  else if(n==2)
    return m;
  power(F, n-2);
  return ((F[0][0])%d*(m%d))%d+((F[0][1])%d*(z%d))%d;
}


void power(long int F[2][2], int n)
{
  if( n == 0 || n == 1)
      return;
  long int M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  multiply(F, F);

  if (n%2 != 0)
     multiply(F, M);
}

void multiply(long int F[2][2], long int M[2][2])
{
  int d=1000000007;
  long int x =  ((F[0][0]%d)*(M[0][0]%d))%d + ((F[0][1]%d)*(M[1][0]%d))%d;
  long int y =  ((F[0][0]%d)*(M[0][1]%d))%d + ((F[0][1]%d)*(M[1][1]%d))%d;
  long int z =  ((F[1][0]%d)*(M[0][0]%d))%d + ((F[1][1]%d)*(M[1][0]%d))%d;
  long int w =  ((F[1][0]%d)*(M[0][1]%d))%d + ((F[1][1]%d)*(M[1][1]%d))%d;

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
int main()
{
	int t,n,m;
	long d1=1000000007;
	cin>>t;
	for(int i=0;i<t;++i)
	{
		cin>>m>>n;
		vector<long int>a,b;
		for(int j=0;j<m;++j)
		{
			long int x;
			cin>>x;
			a.push_back(x);
		}
		for(int j=0;j<m;++j)
		{
			long int x;
			cin>>x;
			b.push_back(x);
		}
		long int z=0,c;
		for(int j=0;j<m;++j)
		{
			for(int k=0;k<m;++k)
			{
				long int f1=a[j],f2=b[k];
				long int c=fib(n,f1,f2);
				//cout<<c<<endl;
				z=z+c;
				z=z%d1;
			}
		}
		cout<<z<<endl;
	}
	return 0;
}
