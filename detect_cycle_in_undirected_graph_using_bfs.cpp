#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[101];
bool visited[101];
int parent[101];
bool flag;
void bfs(int src)
{
  queue<int>q;
  q.push(src);
  visited[src]=true;

  while(!q.empty())
  {
    int p=q.front();
    q.pop();
    for(int child: adj_list[p])
    {
      if(visited[child] && parent[p]!=child)
        flag=false;
      if(!visited[child])
      {
        q.push(child);
        parent[child]=p;
        visited[child]=true;
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
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
  }
  memset(visited,false,sizeof(visited));
  memset(parent,-1,sizeof(parent));
  flag=true;
  for(int i=0;i<n;i++)
  {
    if(!visited[i])
      bfs(i);
  }
  if(flag==true)
    cout<<"No cycle";
  else
    cout<<"Cycle detected";
}
/*
6 4
0 1
1 2
2 3
3 0
4 5
*/