#include<bits/stdc++.h>
#include "findshortest.h"
using namespace std;
typedef pair<int, int> iPair;

findshortest::findshortest(vector<Edge> Edges , int source,int destination, vector<string> Nodes){
this->R=Edges;
this->src=source;
this->det=destination;
this->N=Nodes;
}
int findshortest::getIndex(vector<string> v, string K)
{
    auto it = find(v.begin(), v.end(), K);
    if (it != v.end())
    {
        int index = it - v.begin();
        return index;
    }
    else {

        return -1;
    }
}

 vector<int> findshortest::dijkstra()
{ 
   
   int n=N.size(); 
    int dist[n]; 
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
    bool sptSet[n];
    vector<int> parent(n,-1);
    parent[src] = -1;
    for (int i = 0; i < n; i++)
    {
     
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }
    pq.push(make_pair(0, src));
    dist[src] = 0;
    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        sptSet[u] = true;
        for(auto i : R){
          if(i.N_1.name==N[u]){
            int v=getIndex(N,i.N_2.name);
            if (!sptSet[v] &&
                dist[u] + i.dist < dist[v])
            {
                parent[v] = u;
                dist[v] = dist[u] + i.dist;
                pq.push(make_pair(dist[v], v));
            } 
          }
    }
    }
   return parent;
    

}
