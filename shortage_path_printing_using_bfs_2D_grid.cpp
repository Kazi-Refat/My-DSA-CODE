#include<bits/stdc++.h>
using namespace std;
int n,m;
int di,dj;
bool flag=false;
char grid[1001][1001];
bool visited[1001][1001];
int level[1001][1001];
pair<int,int> parent[1001][1001];
vector<pair<int,int>>mov={{0,1},{0,-1},{-1,0},{1,0}};
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
      if(valid(ci,cj) && grid[ci][cj]=='D')
      {
        parent[ci][cj]={p_i,p_j};
        flag=true;
        return;
      }
      if(valid(ci,cj) && !visited[ci][cj] && grid[ci][cj]=='.' && !flag)
      {
        q.push({ci,cj});
        level[ci][cj]=level[p_i][p_j]+1;
        visited[ci][cj]=true;
        parent[ci][cj]={p_i,p_j};
      }
    }
  }
}
int main()
{
  
  cin>>n>>m;
  int si,sj;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>grid[i][j];
      if(grid[i][j]=='R')
      {
        si=i;
        sj=j;
      }
      if(grid[i][j]=='D')
      {
        di=i;
        dj=j;
      }
    }
  }
  memset(visited,false,sizeof(visited));
  memset(level,-1,sizeof(level));
  bfs(si,sj);
  if(flag)
  {
    pair<int,int> node=parent[di][dj];
    while(node.first!=si || node.second!=sj)
    {
      grid[node.first][node.second] = 'X';
      node=parent[node.first][node.second];
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cout<<grid[i][j];
    }
    cout<<endl;
  }
}
/*
5 6
...D.#
.R...#
....#.
..#...
.#.##.
*/
