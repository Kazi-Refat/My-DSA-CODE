#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
      this->data=val;
      this->left=NULL;
      this->right=NULL;
    }
};
Node *input_tree()
{
  int val;
  cin>>val;
  Node *root;
  if(val==-1)
  {
    root=NULL;
    return root;
  }
  else
    root=new Node(val);
  queue<Node *> q;
  q.push(root);
  while(!q.empty())
  {
    Node *p=q.front();
    q.pop();
    int l,r;
    cin>>l>>r;
    Node *left=NULL,*right=NULL;
    if(l!=-1)
      left=new Node(l);
    if(r!=-1)
      right=new Node(r);
    p->left=left;
    p->right=right;
    if(p->left)
      q.push(p->left);
    if(p->right)
      q.push(p->right);
  }
  return root;
}
void left_nodes(Node *root)
{
    if(root == NULL) 
        return;
    if(root->left)
      left_nodes(root->left);
    else if(root->left==NULL && root->right!=NULL)
      left_nodes(root->right);
    cout << root->data << " ";
    
}
void right_nodes(Node *root)
{
    if(root == NULL) 
        return;
    cout << root->data << " ";
    if(root->right)
      right_nodes(root->right);
    else if(root->right==NULL && root->left!=NULL)
      right_nodes(root->left);
}

int main()
{
  Node *root=input_tree();
  if(root->left)
    left_nodes(root);
  if(root!=NULL && root->left!=NULL)
    right_nodes(root->right);
  else if(root!=NULL && root->left==NULL)
    right_nodes(root);
  return 0;
}
