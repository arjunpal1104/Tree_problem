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
void Inordered(node* root){
    if(root==NULL){
        return;
    }
    stack<node*>st;
    node* curr=root;
    while(!st.empty() ||curr!=NULL ){
        while(curr!=NULL){
            st.push(curr);
            curr=curr->left;
            
        }
        curr=st.top();
        st.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
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
    Inordered(root);
  return 0;
}