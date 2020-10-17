#include<bits/stdc++.h>
using namespace std;

struct tree{
    int val;
    struct tree* left;
    struct tree* right;
    tree(int x){
        this->val=x;
        this->left=NULL;
        this->right=NULL;
    }
};


struct tree* lca(int a,int b,tree* root){
    if(root ==NULL)return NULL;
    if(root->val==a || root->val==b)return root;
    tree* tleft=lca(a,b,root->left);
    tree* tright=lca(a,b,root->right);
    if(tleft !=NULL &&  tright!=NULL){
        return root;
    }
    if(tleft!=NULL)return tleft;
    if(tright!=NULL)return tright;
}

int main(){

    return 0;
}