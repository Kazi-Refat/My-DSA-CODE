#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj_list[101];
int dist[101];
void dijkstra(int src)
{
  queue<pair<int,int>> q;
  q.push({src,0});
  dist[src]=0;

  while(!q.empty())
  {
    pair<int,int> par=q.front();
    q.pop();
    int par_node=par.first;
    int par_dist=par.second;

    for(pair<int,int> child: adj_list[par_node])
    {
      int child_node=child.first;
      int child_dist=child.second;
      if(par_dist+child_dist<dist[child_node])
      {
        dist[child_node]=par_dist+child_dist;
        q.push({child_node,par_dist+child_dist});
      }
    }
  }
}
int main()
{ 
  int n,e;
  cin>>n>>e;
  for(int i=0;i<n;i++)
    dist[i]=INT_MAX;
  
  while(e--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    adj_list[a].push_back({b,c});
    adj_list[b].push_back({a,c});
  }
  dijkstra(0);
  for(int i=0;i<n;i++)
    cout<<i<<"-> "<<dist[i]<<endl;
  
}
