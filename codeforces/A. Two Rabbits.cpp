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
    
    int t;
    cin>>t;
    for(int k=0;k<t;++k){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        if((y-x)%(a+b)==0){
            cout<<(y-x)/(a+b)<<endl;
        }
        else{
            cout<<-1<<endl;;
        }
    }

    return 0;
}
