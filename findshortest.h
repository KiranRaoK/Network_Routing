#include<bits/stdc++.h>
#include "Edge.h"
using namespace std;
typedef pair<int, int> iPair;

class findshortest{
public:
vector<Edge> R;
int src,det;
vector<string> N;
findshortest(vector<Edge> Edges , int source,int destination, vector<string> Nodes);
int getIndex(vector<string> v, string K);
vector<int> dijkstra();

};