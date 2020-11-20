#include<bits/stdc++.h>
using namespace std;

int sol(int n){
    if(sqrt(n)-floor(sqrt(n))==0)return 1;
    if(n<0)return 0;
    if(n<=3)return n;
    int rmin=n;
    for(int i=1;i<=n;++i){
        int t=i*i;
        if(t>n)break;
        else
            rmin=min(rmin,1+sol(n-t));
    }
    return rmin;
}

int soldp(int n){
    int dp[n+1];
    for(int i=0;i<=3;++i){
        dp[i]=i;
    }
   
    for(int i=4;i<=n;++i){
        dp[i]=i;
        for(int k=1;k<=ceil(sqrt(i));++k){
            int t=k*k;
            if(t>i)break;
            dp[i]=min(dp[i],1+dp[i-t]);
        }
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    cout<<sol(n)<<endl;
    cout<<soldp(n)<<endl;
    return 0;
}