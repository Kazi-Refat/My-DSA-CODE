#include<bits/stdc++.h>
using namespace std;

int main()
{
  /*** MAX PRIORITY QUEUE ***/
  priority_queue<int>pq_max;
  pq_max.push(10);
  pq_max.push(5);
  pq_max.push(30);
  cout<<pq_max.top()<<endl;
  pq_max.push(100);
  cout<<pq_max.top()<<endl;
  pq_max.pop();//100
  pq_max.pop();//30
  cout<<pq_max.top()<<endl;

  /*** MIN PRIORITY QUEUE ***/

  priority_queue<int,vector<int>,greater<int>>pq_min;
  pq_min.push(10);
  pq_min.push(5);
  pq_min.push(30);
  cout<<pq_min.top()<<endl;
  pq_min.push(2);
  cout<<pq_min.top()<<endl;
  pq_min.pop();//2
  pq_min.pop();//5
  cout<<pq_min.top()<<endl;

  return 0;
}