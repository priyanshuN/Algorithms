#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cin>>n>>e;
    double d[n+1][n+1];
    // intialise distance between all pair as infinity
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            d[i][j]=DBL_MAX;
        }
    }
    //update the distance between pair
    for(int i=0;i<e;++i){
        int r1,r2;
        double x;
        cin>>r1>>r2>>x;
        // we want 
        // r1*r2*..*rj>1
        //  1/r1 *1/r2*.. *1/rj <1
        //  log(1/r1)+log(1/r2)+..+log(1/rj) < log(1)
        // log(1/r1)+log(1/r2)+...+log(1/rj) < 0 
        // we need to find a cycle with negative edge where weights are modified
        // floyd warshall algo
        d[r1][r2]=log(1/x);
        d[r2][r1]=log(x);
    }
    for(int k=0;k<n;++k){
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                if((d[i][j]-(d[i][k]+d[k][j]))>0){
                    d[i][j]=d[i][k]+d[k][j];
                }
            }
        }
    }
    bool flag=0;
    for(int i=0;i<n;++i){
        // find negative edge 
        if(d[i][i]<0){
            flag=1;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(!flag){
        cout<<"NO"<<endl;
    }
    return 0;
}