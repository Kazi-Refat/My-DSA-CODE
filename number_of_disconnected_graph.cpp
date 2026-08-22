#include<bits/stdc++.h>
using namespace std;

vector<int>adj_list[1001];
bool visited[1001];

void dfs(int src)
{
  //base case
  // cout<<src<<" ";
  visited[src]=true;
  for(int child : adj_list[src])
  {
    if(visited[child]==false)
      dfs(child);
  }
}
int main()
{
  int n,e;
  cin>>n>>e;
  memset(visited,false,sizeof(visited));
  while(e--)
  {
    int a,b;
    cin>>a>>b;
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
  }
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(visited[i]==false)
    {
      count++;
      dfs(i);
    }
  }
  cout<<count<<endl;
  return 0;
}
/*
8 6
1 2
0 5
2 3
6 7
4 5
1 3
*/