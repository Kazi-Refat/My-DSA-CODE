#include<bits/stdc++.h>
using namespace std;
int n,m;
char grid[101][101];
bool visited[101][101];
int level[101][101];
vector<pair<int,int>>mov={{-2,-1},{-2,1},{2,-1},{2,1},{-1,-2},{-1,2},{1,-2},{1,2}};
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
    for(int i=0;i<8;i++)
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
  int t;
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    int ki,kj;
    cin>>ki>>kj;
    int qi,qj;
    cin>>qi>>qj;
    memset(visited,false,sizeof(visited));
    memset(level,-1,sizeof(level));
    bfs(ki,kj);
    if(visited[qi][qj])
      cout<<level[qi][qj]<<endl;
    else
      cout<<-1<<endl;
  }
  
}
/*
4
8 8
0 0
7 7
5 6
0 1
0 1
4 4
0 0
0 1
2 2
0 0
0 1
*/
/*
6
0
3
-1
*/