#include <bits/stdc++.h>
using namespace std;
struct ListNode{
  int val;
  struct ListNode* next;
  ListNode(int x){
    this->val=x;
    this->next=NULL;
  }
};
ListNode* insert(ListNode* h,int x){
  if(h==NULL){
    h=new ListNode(x);
    return h;
  }
  ListNode* t=h;
  while(t->next!=NULL){
    t=t->next;
  }
  ListNode* q=new ListNode(x);
  t->next=q;
  return h;
}
ListNode* cinsert(ListNode* h,int x){
  if(h==NULL){
    h=new ListNode(x);
    return h;
  }
  ListNode* t=h;
  while(t->next!=NULL){
    t=t->next;
  }
  ListNode* q=new ListNode(x);
  q->next=h;
  t->next=q;
  return h;
}
void print(ListNode* h){
  ListNode* t=h;
  while(t!=NULL && t->next!=NULL && t->next!=h){
    cout<<t->val<<' ';
    t=t->next;
  }
  cout<<t->val;
  cout<<endl;
}
ListNode* remove(ListNode* h){
  if(h==NULL){
    return NULL;
  }
  ListNode* t=h,*r=h;
  while(t!=NULL && t->next!=NULL && t->next!=h){
    if(t->val==t->next->val){
      ListNode* q=t->next;
      t->next=q->next;
      free(q);
    }
    else{
      r=t;
      t=t->next;
    }
  }
  r->next=h;
  return h;
}
int main() {
  int n;
  cin>>n;
  int a[n];
  ListNode* head=NULL;
  for(int i=0;i<n;++i){
    cin>>a[i];
    head=insert(head,a[i]);
  }
  head=cinsert(head,1);
  print(head);
  head=remove(head);
  print(head);
  return 0;
}