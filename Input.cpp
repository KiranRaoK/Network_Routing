#include<bits/stdc++.h>
#include "Input.h"
using namespace std;

vector<pair<pair<string,string>,int>> Input::CLI(){
 int n;
 cout<<"Enter the Edges"<<endl;
 cin>>n;
 for(int i=0;i<n;i++){
   cin>>name1>>name2>>distance;
   input.push_back(make_pair(make_pair(name1,name2),distance));
 }
 cout<<"Enter the destination"<<endl;
 cin>>source;
 cout<<"Enter the Destination"<<endl;
 cin>>destination;
 return input;
}
