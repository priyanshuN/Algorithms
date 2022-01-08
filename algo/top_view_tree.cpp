#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/
    void level(Node* h){
        unordered_set<int>s;
        queue<pair<Node*,int>>q;
        if(h==NULL){
            return;
        }
        vector<pair<int,int>>a;
        q.push(make_pair(h,0));
        while(!q.empty()){
            Node* x=q.front().first;
            int i=q.front().second;
            q.pop();
            if(s.find(i)==s.end()){
                s.insert(i);
                a.push_back(make_pair(i,x->data));
            }
            if(x->left!=NULL){
            q.push(make_pair(x->left,i-1));
            }
            if(x->right!=NULL){
            q.push(make_pair(x->right,i+1));
            }
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();++i){
            cout<<a[i].second<<' ';
        }
    }
    void topView(Node * root) {
        level(root);
    }

}; //End of Solution