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
void node_level(Node *root,int level,vector<int> &v)
{
  queue<pair<Node *,int>>q;
  if(root)
    q.push({root,0});
  while(!q.empty())
  {
    pair<Node *,int> parent=q.front();
    q.pop();
    Node* node=parent.first;
    int p_level=parent.second;
    if(p_level==level)
      v.push_back(node->data);
    
    if(node->left)
      q.push({node->left,p_level+1});
    if(node->right)
      q.push({node->right,p_level+1});
  }
}
int main()
{
  Node *root=input_tree();
  vector<int> v;
  int level;
  cin>>level;
  int height=max_height(root);
  node_level(root,level,v);
  if(level<=height)
  {
    for(int i=0;i<v.size();i++)
    {
      cout<<v[i]<<" ";
    }
  }
  else
    cout<<"Invalid";
  return 0;
}