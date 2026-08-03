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
// input:6 3 5 -1 2 0 -1 -1 1 -1 -1 -1 -1
int max_height(Node *root)
{
  if(root==NULL)
    return 0;
  if(root->left==NULL && root->right==NULL)
    return 0;
  int l=max_height(root->left);
  int r=max_height(root->right);
  return max(l,r)+1;
}
int main()
{
  Node *root=input_tree();
  cout<<max_height(root);

  return 0;
}