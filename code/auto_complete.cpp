#include<bits/stdc++.h>
using namespace std;

struct trie{
    bool flag;
    unordered_map<char,trie*>ch;
    trie(){
        flag=0;
    }
};

void insert(trie*& root,string s){
    if(root==NULL){
        root=new trie();
    }
    trie* curr=root;
    for(auto c:s){
        if(curr->ch.find(c)==curr->ch.end()){
            curr->ch[c]=new trie();
        }
        curr=curr->ch[c];
    }
    curr->flag=1;
}

bool search(trie* root,string s){
    if(root==NULL){
        return 0;
    }
    trie* curr=root;
    for(auto c:s){
        if(curr->ch.find(c)==curr->ch.end()){
            return 0;
        }
        curr=curr->ch[c];
    }
    if(curr->flag)return 1;
    return 0;
}

void suggest(trie* root,string str){
    if(root->flag){
        cout<<str<<endl;
    }
    bool end=(root->ch.size()<1)?1:0;
    if(end)return;
    unordered_map<char,trie*>:: iterator it;
    for(it=root->ch.begin();it!=root->ch.end();++it){
        str.push_back(it->first);
        suggest(it->second,str);
        str.pop_back();
    }
  
}

void autoc(trie* root,const string s){
    if(root==NULL)return;
    trie* curr=root;
    // cout<<"debug1"<<endl;
    for(auto c:s){
        if(curr->ch.find(c)==curr->ch.end()){
            return;
        }
        curr=curr->ch[c];
    }
    // cout<<"debug2"<<endl;
    bool end=(curr->ch.size()<1)?1:0;
    if(curr->flag && end){
        cout<<s<<endl;
        return;
    }
    // cout<<"debug3"<<endl;
    if(!end){
        string pre=s;
        suggest(curr,pre);
    }

}

int main(){
    trie* root=NULL;
    vector<string>v={"hell","help","hello","hel"};
    for(int i=0;i<v.size();++i){
        insert(root,v[i]);
    }
    // for(int i=0;i<v.size();++i){
    //     cout<<search(root,v[i])<<endl;
    // }

    autoc(root,"hel");
    return 0;
}