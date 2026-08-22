#include<bits/stdc++.h>
using namespace std;
int n,m;
char grid[1001][1001];
bool visited[1001][1001];
int level[1001][1001];
vector<pair<int,int>>mov={{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int i,int j)
{
  if(i<0 || i>=n || j<0 || j>=m)
    return false;
  return true;
}
void bfs(int si,int sj)
{
  queue<pair<int,int>>q;
  q.push({si,sj});
  visited[si][sj]=true;
  level[si][sj]=0;
  while(!q.empty())
  {
    pair<int,int> p=q.front();
    q.pop();
    int p_i=p.first;
    int p_j=p.second;
    // cout<<p_i<<" "<<p_j<<endl;
    for(int i=0;i<4;i++)
    {
      int ci=p_i+mov[i].first;
      int cj=p_j+mov[i].second;
      if(valid(ci,cj) && !visited[ci][cj])
      {
        q.push({ci,cj});
        level[ci][cj]=level[p_i][p_j]+1;
        visited[ci][cj]=true;
      }
    }
  }
}
int main()
{
  
  cin>>n>>m;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>grid[i][j];
    }
  }
  memset(visited,false,sizeof(visited));
  memset(level,-1,sizeof(level));
  int si,sj,di,dj;
  cin>>si>>sj>>di>>dj;
  bfs(si,sj);
  cout<<level[di][dj];
}
/*
3 4
. . . .
. . . .
. . . .
1 2
*/