#include<bits/stdc++.h>
#include "Input.h"
#include <fstream>

using namespace std;

vector<pair<pair<string,string>,int>> Input::CLI(){
 int n;

// cout<<"Enter the no of edges"<<endl;
// cin>>n;
// for(int i=0;i<n;i++){
//   cin>>name1>>name2>>distance;
//   input.push_back(make_pair(make_pair(name1,name2),distance));
// }

  ifstream file("input.txt");

  int weight, edgecounter=0;
  string distancestr, data = "";

  while(!file.eof())
  {
      getline(file, data,',');
      name1=data;
      getline(file, data,',');
      name2=data;
      getline(file, data,'\n');
      distancestr=data;
      distance = stoi(distancestr);
      edgecounter++;
      input.push_back(make_pair(make_pair(name1,name2),distance));
  }

  file.close();
  n=edgecounter/2;





 cout<<"Enter the Source"<<endl;
 cin>>source;
 cout<<"Enter the Destination"<<endl;
 cin>>destination;
 return input;
}
