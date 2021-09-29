#include<bits/stdc++.h>
#include "Driver.h"
using namespace std;

void Driver::StartDriver(){
  Input I1;
  input=I1.CLI();
  int src,det;
  for(auto i : input){
    Network.push_back(Edge(i.first.first,i.first.second,i.second));
    S.insert(i.first.first);
    S.insert(i.first.second);
  }
  
  vector<string> Nodes;
  for(auto i : S){
    Nodes.push_back(i);
  }
  for(int i=0;i<Nodes.size();i++){
    if(Nodes[i]==I1.source){
    src=i;
    }
    if(Nodes[i]==I1.destination){
    det=i;
    }
  }  
  
  vector<int> parent;
  findshortest findpath(Network,src,det,Nodes);

  parent=findpath.dijkstra();

  cout<<Nodes[src];
  Output O1;
  O1.printPath(parent,det,Nodes);
}