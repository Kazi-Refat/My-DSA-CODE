#include<bits/stdc++.h>
using namespace std;

class myqueue
{
  public:
    list<int>l;

    void push(int val)    //O(1)
    {
      l.push_back(val);
    }
    void pop()        //O(1)
    {
      l.pop_front();
    }
    int front()
    {
      return l.front();
    }
    int back()
    {
      return l.back();
    }
    int size()
    {
      return l.size();
    }
    bool empty()
    {
      return l.empty();
    }
};
int main()
{
  myqueue q;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    q.push(x);
  }

  while(!q.empty())
  {
    cout<<q.front()<<" ";
    q.pop();
  }

}