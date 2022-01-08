#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int n,k=0;
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();+i)
	{
		if(s[i]==s[i+1]==s[i+2]=='x')
			k++;
	}
	cout<<k;
	return 0;
}
