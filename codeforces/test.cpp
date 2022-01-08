#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("G:/codes/Result/input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("G:/codes/Result/output.txt", "w", stdout);
    // for writing error to error.txt
    freopen("G:/codes/Result/error.txt", "w", stderr);
	#endif
	string s;
	cin>>s;
	cout<<s<<endl;
    float n=0.345;
    int t=2;
    while(t--){
    n=n*10;
    //cout<<int(n);
	    if(int(n)==34){
	        cout<<n;
	    }
    }
}
