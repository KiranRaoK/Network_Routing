
#include<bits/stdc++.h>
#include "Output.h"
using namespace std;

void Output::printPath(vector<int> parent, int j, vector<string> Node)
{
    if (parent[j] == - 1)
        return;
   
    printPath(parent, parent[j], Node);
   
    cout<<"->"<<Node[j];
}
