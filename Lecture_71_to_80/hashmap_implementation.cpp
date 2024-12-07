#include <bits/stdc++.h>
using namespace std;

int main(){

//  Create of a Hashmap.
unordered_map<string, int> m;

//  Insertion in Hashmap..
//  1st Method..
pair<string, int>p = make_pair("first", 1); 
m.insert(p);

// 2nd Method...
pair<string,int> pair2("second", 2);
m.insert(pair2);

//  3rd Method...
m["third"] = 3;
m["fourth"] = 4;

for(auto element: m){
    cout<<element.first<<" "<<element.second<<" "<<endl;
}

}