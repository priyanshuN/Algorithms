#include<bits/stdc++.h>
using namespace std;

void topo(list<int>*g,bool vi[],stack<char>&st,int k,int i){
    vi[i]=1;
    for(auto it=g[i].begin();it!=g[i].end();++g){
        if(!vi[*it]){
            topo(g,vi,st,k,*it);
        }
    }
    st.push(i+'a');
}

void toposort(list<int>*g,int k){
    bool vi[k];
    memset(vi,0,sizeof(vi));
    stack<char>st;
    for(int i=0;i<k;++i){
        if(!vi[i]){
            topo(g,vi,st,k,i);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<' ';
        st.pop();
    }
    cout<<endl;
}
int main(){
    vector<string>v;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        v.push_back(s);
    }
    list<int>*g=new list<int>[k];
    // vector<int>g[n];
    for(int i=0;i<n-1;++i){
        string w1=v[i],w2=v[i+1];
        for(int j=0;j<min(w1.size(),w2.size());++j){
            if(w1[j]!=w2[j]){
                g[w1[j]-'a'].push_back(w2[j]-'a');
            }
        }
    }
    toposort(g,k);
    return 0;
}