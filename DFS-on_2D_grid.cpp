#include<bits/stdc++.h>
using namespace std;
int n,m;
char grid[1001][1001];
bool visited[1001][1001];
vector<pair<int,int>>mov={{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int i,int j)
{
  if(i<0 || i>=n || j<0 || j>=m)
    return false;
  return true;
}
void dfs(int si,int sj)
{
  cout<<si<<" "<<sj<<endl;
  visited[si][sj]=true;
  for(int i=0;i<4;i++)
  {
    int ci,cj;
    ci=si+mov[i].first;
    cj=sj+mov[i].second;
    if(valid(ci,cj)==true && visited[ci][cj]==false)
      dfs(ci,cj);
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
  int si,sj;
  cin>>si>>sj;
  dfs(si,sj);
}
/*
3 4
. . . .
. . . .
. . . .
1 2
*/