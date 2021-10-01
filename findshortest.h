#include<bits/stdc++.h>
#include "Edge.h"
using namespace std;
typedef pair<int, int> iPair;

class findshortest{
private:
vector<Edge> R;
int src,det;
vector<string> N;
int getIndex(vector<string> v, string K);
public:
findshortest(vector<Edge> Edges , int source,int destination, vector<string> Nodes);
vector<int> dijkstra();

};