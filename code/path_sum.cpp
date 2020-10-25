#include<bits/stdc++.h>
using namespace std;

struct tree{
    int val;
    struct tree* left;
    struct tree* right;
    tree(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};

void path_sum(tree* root,int csum,vector<int>&p,vector<vector<int>>&ret){
    if(root ==NULL)return;
    csum-=root->val;
    p.push_back(root->val);
    if(root->left==NULL && root->right==NULL){
        if(csum==0){
            ret.push_back(p);
        }
        p.pop_back();
        return;
    }
    path_sum(root->left,csum,p,ret);
    path_sum(root->right,csum,p,ret);
    p.pop_back();
    return;
}


int main(){

    return 0;
}