#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int n,k=0;
	cin>>n;
	char s[n+1];
	for(int i=0;i<n;++i)
	{
	  cin>>s[i];
	}
	for(int i=0;i<n;++i)
	{
		if(s[i]=='x'&&s[i]==s[i+1]&&s[i+2]==s[i+1])
			k++;
	}
	cout<<k;
	return 0;
}

