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
void preordered(node *root){

    if(root==NULL)
     return ;

     stack<node*>st;
     struct node *curr=root;
     while (!st.empty() || curr!=NULL)
     {
         /* code */
         while(curr!=NULL){
             cout<<curr->data<<" ";
             if(curr->right)
              st.push(curr->right);

              curr=curr->left;
         }
         if(st.empty()==false){
             curr=st.top();
             st.pop();
         }
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

    preordered(root);
    

    return 0;

}