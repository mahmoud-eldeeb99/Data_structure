#ifndef TREES_H_INCLUDED
#define TREES_H_INCLUDED
#include<queue>
using namespace std;

 struct BSTNODE{
 int data ;
 BSTNODE*right ;
 BSTNODE*left ;
 };
BSTNODE *get_node(int data){
BSTNODE *new_one =new BSTNODE();
new_one->data=data;
new_one->right=new_one->left=NULL;
return new_one;
}
BSTNODE *add (BATNOSE*root,int data){
if (root==NULL){
    root=new_one(data);
}
else if (data<=root->data ){
  root->left=add(root->left,data);
}
else(data>=root->data ){
  root->right=add(root->right,data);
}
return root ;
}
bool finding (BSTNODE*root , int data ){
if (root==NULL) return ;
else if (data ==root->data) return true;
else if (data <=root->data ) return finding(root->left,data);
else if (data >=root->data ) return finding(root->right,data);

}
/* traversal bst
1) breadth first search
2) depth first search */
// 1) level order using staderd tl

void BFS (BSTNODE* root){
if (root==NULL)return;
queue<BSTNODE*>q;
q.push(root); // discover the node
// keep discove nodes and visisting it'sparents
while(!q.empty()){
    BSTNODE* temp=q.front();
    cout <<temp->data<<" "; //print the front node
    if (temp->left!=NULL)q.push(temp->left); //dicover it's left children
    if (temp->right!=NULL)q.push(temp->right);//dicover it's right  children
    q.pop(); // remove visited noded

}

}
// DFS
// 1) preorder : D-L-R
void preorderDFS(BSTNODE*root){
if (!root) return;
cout <<root->data<<" ";
 preorderDFS(root->left);
  preorderDFS(root->right);

}

// 2)inorder : L-D-R

void inorderDFS(BSTNODE*root){

if (!root) return;
preorderDFS(root->left);
if (!root) return;
cout <<root->data<<" ";
preorderDFS(root->right);
}

// postorder : L-R-D


void inorderDFS(BSTNODE*root){

if (!root) return;
preorderDFS(root->left);

preorderDFS(root->right);
if (!root) return;
cout <<root->data<<" ";

}





























#endif // TREES_H_INCLUDED
