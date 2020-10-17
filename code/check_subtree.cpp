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


bool is_identical(tree* root,tree* root_s){
    if(root == NULL && root_s==NULL)return true;
    if(root==NULL || root_s==NULL)return false;
    return(root->val && root_s->val && is_identical(root->left,root_s->right) && is_identical(root->right,root_s->right));
}

bool check_subtree(tree* T , tree* S){
    if(T == NULL)return 0;
    if(S == NULL)return 0;
    if (is_identical(T,S))return true;
    return check_subtree(T->left,S) || check_subtree(T->right,S);
}

int main(){

    return 0;
}