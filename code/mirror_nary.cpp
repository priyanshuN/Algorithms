#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    vector<node*>child;
};

void mirror(node* root){
    if(root==NULL)return ;
    int n=root->child.size();
    if(n<2)return ;
    for(int i=0;i<n;++i){
        mirror(root->child[i]);
    }
    reverse(root->child.begin(),root->child.end());
}

int main(){
    return 0;
}