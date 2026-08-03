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
void pre_order(Node *root)
{
  if(root==NULL)
    return ;
  cout<<root->data<<" ";
  pre_order(root->left);
  pre_order(root->right);
}
void post_order(Node *root)
{
  if(root==NULL)
    return ;
  post_order(root->left);
  post_order(root->right);
  cout<<root->data;
}
void in_order(Node *root)
{
  if(root==NULL)
    return ;
  in_order(root->left);
  cout<<root->data;
  in_order(root->right);
  
}
int main()
{
  Node *root=input_tree();
  pre_order(root);

  return 0;
}