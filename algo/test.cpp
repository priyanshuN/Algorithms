#include<bits/stdc++.h>
using namespace std;

int sol(vector<int>&A,int s){
    int n=A.size();
    int dp[n+1][s+1];
    for(int i=0;i<=n;++i)dp[i][0]=1;
    for(int i=0;i<=s;++i)dp[0][i]=0;
    for(int i=0;i<=n;++i){
        for(int j=1;j<=s;++j){
            int x=dp[i-1][j];
            int y=(A[i-1]>=j)?dp[i-1][j-A[i-1]]:0;
        }
    }
    return dp[n][s];
}

int main(){
    return 0;
}