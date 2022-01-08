#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
  int val;
  struct TreeNode* left;
  struct TreeNode* right;
  TreeNode(int x){
    this->val=x;
    this->left=NULL;
    this->right=NULL;
  }
  // TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int sum (TreeNode* h){
  if(h==NULL)
    return 0;
  int l=sum(h->left);
  int r=sum(h->right);
  return l+r+h->val;
}
void level(TreeNode* h,vector<int>&v){
  queue<TreeNode*>q;
  if(h==NULL){
    return;
  }
  q.push(h);
  while(!q.empty()){
    TreeNode* x=q.front();
    q.pop();
    v.push_back(x->val);
    if(x->left!=NULL){
      q.push(x->left);
    }
    if(x->right!=NULL){
      q.push(x->right);
    }
  }
}
int rsum(vector<int>&v,int i,int n){
  if(i>=n){
    return 0;
  }
  int l=rsum(v,2*i+1,n);
  int r=rsum(v,2*i+2,n);
  return l+r+v[i];
} 
int main() {
  TreeNode* head=new TreeNode(4);
  head->left=new TreeNode(2);
  head->right=new TreeNode(6);
  head->left->right=new TreeNode(3);
  head->left->left=new TreeNode(1);
  head->right->right=new TreeNode(7);
  head->right->left=new TreeNode(5);
  int x=sum(head->left);
  int y=sum(head->right);
  int z= sum(head);
  cout<<x<<' '<<y<<' '<<z<<endl;
  vector<int>v;
  level(head,v);
  for(int i=0;i<v.size();++i){
    cout<<v[i]<<' ';
  }
  cout<<endl;
  int a=rsum(v,1,v.size());
  int b=rsum(v,2,v.size());
  int c=rsum(v,0,v.size());
  cout<<a<<' '<<b<<' '<<c<<endl;
  return 0;
}