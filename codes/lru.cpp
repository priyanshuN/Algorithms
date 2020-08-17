#include<bits/stdc++.h>
using namespace std;

void insert(list<int>&l,unordered_map<int,list<int>::iterator>&m,int x,int h){
    if(m.find(x)==m.end()){
        if(l.size()==h){
            int y=l.back();
            l.pop_back();
            m.erase(y);
            
        }
    }
    else{
        l.erase(m[x]);
    }
    l.push_front(x);
    m[x]=l.begin();
}

void display(list<int>&l){
    for(auto it=l.begin();it!=l.end();++it){
        cout<<(*it)<<' ';
    }
    cout<<endl;
}

int main(){
    list<int>l;
    unordered_map<int,list<int>::iterator>m;
    int h=4;
    insert(l,m,1,4);
    display(l);
    insert(l,m,2,4);
    display(l);
    insert(l,m,3,4);
    display(l);
    insert(l,m,4,4);
    display(l);
    insert(l,m,5,4);
    display(l);
    insert(l,m,1,4);
    display(l);
    return 0;
}