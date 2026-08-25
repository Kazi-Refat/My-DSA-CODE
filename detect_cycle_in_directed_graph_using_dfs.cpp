#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[101];
bool visited[101];
bool pathvisit[101];
bool flag;
void dfs(int src)
{
  visited[src]=true;
  pathvisit[src]=true;
  for(int child : adj_list[src])
  {
    if(visited[child] && pathvisit[child])
      flag=false;
    if(!visited[child])
    {
      dfs(child);
    }
  }
  //return 
  pathvisit[src]=false;
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
  }
  memset(visited,false,sizeof(visited));
  memset(pathvisit,false,sizeof(pathvisit));
  flag=true;
  for(int i=0;i<n;i++)
  {
    if(!visited[i])
      dfs(i);
  }
  if(flag==true)
    cout<<"No cycle";
  else
    cout<<"Cycle detected";
}
/*
4 4
0 1
1 2
2 3
0 3

*/