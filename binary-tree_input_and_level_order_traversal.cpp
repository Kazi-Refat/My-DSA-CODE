#include<bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node *left;
  Node *right;
  Node(int data)
  {
    this->data=data;
    this->left=NULL;
    this->right=NULL;
  }
};
Node *input_tree()
{
    int val;
    cin>>val;
    Node *root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root)
        q.push(root);
    while(!q.empty())
    {
        Node *p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node *left,*right;
        if(l==-1)left=NULL;
        else left=new Node(l);
        if(r==-1)right=NULL;
        else right=new Node(r);

        p->left=left;
        p->right=right;

        if( p->left)
          q.push( p->left);
        if(p->right)
          q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
{
  if (root == NULL){
    cout<<"Tree Empty"<<endl;
    return;
  }
  queue<Node*>q;
  q.push(root);

  while(!q.empty())
  {
    Node *p=q.front();
    q.pop();
    cout<<p->data<<" ";
    if(p->left)
      q.push(p->left);
    if(p->right)
      q.push(p->right);
  }
}
int main()
{
  Node *root=input_tree();
  level_order(root);
  
  return 0;
}
/*
10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1
*/