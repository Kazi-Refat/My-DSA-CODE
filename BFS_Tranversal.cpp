#include<bits/stdc++.h>
using namespace std;
vector<int>edge_list[1001];
bool visited[1001];
void bfs(int src)
{
  queue<int>q;
  q.push(src);
  visited[src]=true;

  while(!q.empty())
  {
    //bar kore ana
    int p= q.front();
    q.pop();
    //oi node k niye kaj kora
    cout<<p<<" ";
    //children guli k push kora
    for(int chaild:edge_list[p])
    {
      if(visited[chaild]==false)
      {
        q.push(chaild);
        visited[chaild]=true;
      }
    }
  }
}
int main()
{
  int n,e;
  cin>>n>>e;
  
  while(e--)
  {
    int a,b;
    cin>>a>>b;
    edge_list[a].push_back(b);
    edge_list[b].push_back(a);
  }
  memset(visited,false,sizeof(visited));
  bfs(0);
  return 0;
}