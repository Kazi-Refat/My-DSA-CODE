#include<bits/stdc++.h>
using namespace std;
vector<int>edge_list[1001];
bool visited[1001];
int level[1001];
void bfs(int src)
{
  queue<int>q;
  q.push(src);
  visited[src]=true;
  level[src]=0;

  while(!q.empty())
  {
    //bar kore ana
    int p= q.front();
    q.pop();
    //oi node k niye kaj kora
    //cout<<p<<" ";
    //children guli k push kora
    for(int child:edge_list[p])
    {
      if(visited[child]==false)
      {
        q.push(child);
        visited[child]=true;
        level[child]=level[p]+1;
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
  memset(level,-1,sizeof(level));
  int src;
  cin>>src;
  bfs(src);
  for(int i=0;i<n;i++)
  {
    cout<<i<<"->"<<level[i]<<endl;
  }
  return 0;
}
/*
7 8
0 1
1 3
3 2
1 4
3 5
2 5
5 6
4 6
0
*/