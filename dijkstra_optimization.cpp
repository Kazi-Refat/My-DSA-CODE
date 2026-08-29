#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj_list[101];
int dist[101];
void dijkstra(int src)
{
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
  pq.push({0,src});
  dist[src]=0;

  while(!pq.empty())
  {
    pair<int,int> par=pq.top();
    pq.pop();
    int par_node=par.second;
    int par_dist=par.first;

    for(pair<int,int> child: adj_list[par_node])
    {
      int child_node=child.first;
      int child_dist=child.second;
      if(par_dist+child_dist<dist[child_node])
      {
        dist[child_node]=par_dist+child_dist;
        pq.push({par_dist+child_dist,child_node});
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
/*
5 8 
0 1 10
1 2 1
0 2 7
0 3 4
2 3 1
3 4 5
1 4 3
2 4 5
*/