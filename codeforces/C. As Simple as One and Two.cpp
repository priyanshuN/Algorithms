#include<bits/stdc++.h>
using namespace std;
void zero(int a[],int n){
    for(int i=0;i<n;++i){
        a[i]=0;
    }
}
void auxf(int aux[],int n,string s){
    int i=1,m=0;
    zero(aux,s.size());
    while(i<s.size()){
        if(s[i]==s[m]){
            m++;
            aux[i]=m;
            i++;
        }
        else if(s[i]!=s[m] && m!=0){
            m=aux[m-1];
        }
        else{
            aux[i]=0;
            i++;
        }
    }
}

void ch(vector<int>&v,string &t,int aux[],int n,string s){
    int i=0,j=0,z=1;
    if(s=="twone"){
        z=2;
    }
    else if(s=="one"){
        z=1;
    }
    while(j<t.size()){
        if(s[i]!=t[j]){
            if(i==0)
                j++;
            else
                i=aux[i-1];
        }
        else{
            i++;
            j++;
            if(i==n){
                t[j-i+z]='x';
                v.push_back(j-i+z+1); //occurence
                i=aux[i-1];     //if want to search multiple occurence
            }
        }
    }
}

int main(){
    int n1;
    cin>>n1;
    for(int h=0;h<n1;++h){
        
        string t;
        cin>>t;
        vector<int>v;
        int aux[4],aux1[4],aux2[6];
        auxf(aux,3,"one");
        auxf(aux1,3,"two");
        auxf(aux2,5,"twone");
        ch(v,t,aux2,5,"twone");
        ch(v,t,aux1,3,"one");
        ch(v,t,aux2,3,"two");
        cout<<v.size()<<endl;
        for(int l=0;l<v.size();++l){
            cout<<v[l]<<' ';
        }
        cout<<endl;
    }
    return 0;
}