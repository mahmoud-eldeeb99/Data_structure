#ifndef TREES_H_INCLUDED
#define TREES_H_INCLUDED
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


#endif // TREES_H_INCLUDED
