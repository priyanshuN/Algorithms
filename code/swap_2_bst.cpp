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

void swap(int* a ,int* b ){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void swaputil(tree* root,tree** prev,tree** first,tree** middle,tree** last){
    if(root==NULL)return;
    swaputil(root->left,prev,first,middle,last);
    if(*prev && (*prev)->val>root->val){
        if(*first==NULL){
            *first=*prev;
            *middle=root;
        }
        else{
            *last=root;
        }
    }
    *prev=root;
    swaputil(root->right,prev,first,middle,last);
}


void swapbst(tree* root){
    tree* prev,*first,*middle,*last;
    prev=first=middle=last=NULL;
    swaputil(root,&prev,&first,&middle,&last);
    if(first && last){
        swap(&(first->val),&(last->val));
    }
    if(first && middle){
        swap(&(first->val),&(middle->val));
    }
}


int main(){

    return 0;
}