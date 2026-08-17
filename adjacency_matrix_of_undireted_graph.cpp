#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,e;
  cin>>n>>e;
  int adj_matrix[n][e];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<e;j++)
    {
      if(i==j)
        adj_matrix[i][j]=1;
      else
        adj_matrix[i][j]=0;
    }
  }
  int t=e;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    adj_matrix[a][b]=1;
    adj_matrix[b][a]=1;
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<e;j++)
    {
      cout<<adj_matrix[i][j]<<" ";
    }
    cout<<endl;
  }
}