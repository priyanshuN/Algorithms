#include<bits/stdc++.h>
using namespace std;

int setbitdp(int n){
    vector<int>dp(n+1);
    dp[0]=0;
    dp[1]=1;
    int ans=1;
    for(int i=2;i<=n;++i){
        if(i&1){
            dp[i]=dp[i-1]+1;
        }
        else{
            dp[i]=dp[i/2];
        }
        ans+=dp[i];
    }
    return ans;
}

int setbit(int n){
    n++;
    int ans=n/2;
    int z=2;
    while(z<=n){
        int g=n/z;
        ans+=(g/2)*z;
        ans+=(g&1)?(n%z):0;
        z<<=1;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<setbitdp(n)<<endl;
    cout<<setbit(n)<<endl;
    return 0;
}