#include<bits/stdc++.h>
using namespace std;
// only tree structure
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void postordered(node* root){
    if(root==NULL){
        return ;

    }
    stack<node*>s1,s2;
    node* node;
    s1.push(root);
    while(!s1.empty()){
        node=s1.top();
        s1.pop();
        s2.push(node);
        if(node->left)
         s1.push(node->left);
        if(node->right)
         s1.push(node->right);
    }
    while(!s2.empty()){
        node=s2.top();
        s2.pop();
        cout<<node->data<<" ";
        
    }
}
int main(){
    struct node * root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
  
  postordered(root);
   return 0;
}