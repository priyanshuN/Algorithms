#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;++i)
	{
	    string s1;
		getline(cin,s1);
		s[i]=s1[0];
	}
	cout<<6-n<<endl;
	string a={"pgbory"};
	string b[6]={"Power","Time","Space","Soul","Reality","Mind"};
	for(int i=0;i<6;++i)
	{
		int k=0;
		for(int j=0;j<n;++j)
		{
			if(a[i]==s[j])
			{
				k=1;
				break;
			}
		}
		if(k==0)
		{
			cout<<b[i]<<endl;
		}
	}
	return 0;
}
