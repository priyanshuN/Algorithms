#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("G:/codes/Result/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("G:/codes/Result/output.txt", "w", stdout);
    // for writing error to error.txt
    freopen("G:/codes/Result/error.txt", "w", stderr);
	#endif
	string s;
	getline(cin,s);
	int i;
	for(i=0;i<(s.length())/2;++i)
	{
	    if(s.size()==1)
            break;
		if(s[i]!=s[s.size()-i-1]||s[i]!=s[i+1])
		{
			break;
		}
	}
	if(i==(s.size())/2)
		cout<<0;
	else
		cout<<(s.size())-2*i;
	return 0;
}
