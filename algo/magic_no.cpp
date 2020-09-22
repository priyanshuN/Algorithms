#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,a,b) for(ll i=a;i<b;i++)

int main(){
    int n;
    cin>>n;
    bitset<32>br(n);
    cout<<br<<endl;
    long z=0;
    fr(i,0,32){
        z+=br[i]*((int)pow(5,i+1));
    }
    cout<<z<<endl;
    return 0;
}