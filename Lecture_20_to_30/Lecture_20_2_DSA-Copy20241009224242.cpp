// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // 6. Stack Data Structure in C++.
    // stack<int> stk;
    // stk.push(1);
    // stk.push(2);
    // stk.push(3);
    // stk.push(4);

    // stk.pop();
    // cout<<stk.top();

    // cout<<stk.top();
    // cout<<stk.size();
    // stk.empty();
    // cout<<stk.top();

    // 7. Queue Data Structure. in C++.
    // queue<int> que;
    // que.push(1);
    // que.push(2);
    // que.push(3);
    // que.push(4);

    // cout<<que.front();
    // cout<<que.size();
    // cout<<que.back();

    // que.pop();
    // que.empty();
    // cout<<que.front();
    // cout<<que.size();

    //  8. Priority Queue data structure in C++;

    priority_queue<int> maxi; // Max-heap based
    priority_queue<int, vector<int>, greater<int>> mini;

    // maxi.push(1);
    // maxi.push(2);
    // maxi.push(3);
    // maxi.push(9);
    // int n = maxi.size();

    // for(int i = 0; i < n; i++){
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }

    // mini.push(1);
    // mini.push(2);
    // mini.push(3);
    // mini.push(9);

    // int n = maxi.size();
    // for(int i = 0; i < n; i++){
    //     cout<<mini.top()<<" ";
    //     mini.pop();
    // }

    // cout<<mini.top();
    // cout<<maxi.top();

    // cout<<mini.empty()<<endl;

    // for(int i = 0; i < n; i++){
    //     cout<<mini.top()<<" ";
    //     mini.pop();
    // }

    // 9. Set Data Structure.

    set<int> s;
    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);

    // for(int element: s){
    //     cout<<element<<" ";
    // }

    // cout<<endl;

    // set<int>::iterator it = s.begin();
    // ++(++it);
    // s.erase(it);

    // for(int element: s){
    //     cout<<element<<" ";
    // }

    // cout<<s.count(5);
    // set<int>::iterator itr = s.find(3);

    // for(auto it = itr ; it != s.end() ; ++it){
    //      cout<<*it<<" ";
    // }

    // 10. Map Data Structure....
    // map<int , string> m;
    //  m[1] = "tushar";
    //  m[2] = "kumar";
    //  m[13] = "Great";

    //  m.insert({5,"Bhai"});

    //   cout<<"Before Erase"<<endl;
    //      for(auto i:m){
    //        cout<<i.first<<" "<<i.second<<endl;
    //      }
    //    cout<<"Finding 10 ->"<<m.count(10)<<endl;

    // m.erase(13);
    //     cout<<"After Erase"<<endl;
    //      for(auto i:m){
    //        cout<<i.first<<" "<<i.second<<endl;
    //      }

    // auto it = m.find(5);
    // for(auto i = it ; i != m.end() ; i++){
    //     cout<<(*i).first<<endl;
    // }

    // 11. Algorithm Part in STL in C++.
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(5);
    // v.push_back(8);

    // //   binary Search algorithm => (return 0 or 1)
    // // cout << binary_search(v.begin(), v.end(), 5)<<endl;
    
    // //  Lower and Upper Bound in c++ STL.
    // cout<<lower_bound(v.begin() , v.end(),5) - v.begin()<<endl;    // Return the 5 element index.
    // cout<<upper_bound(v.begin() , v.end(),5) - v.begin();          // Return the next index of 5 element.

    // int a = 10;
    // int b = 20;
    // cout<<min(a,b);
    // cout<<max(a,b);
    
    //  Swap Function.
    //    swap(a,b);
    //    cout<<a<<" "<<b;

    // string name = "Tushar";
    // reverse(name.begin(), name.end());
    // cout<<name;
    // rotate(name.begin(), name.begin() + 3,name.end());
    // cout<<name;

//     vector<int> vect;
//     vect.push_back(5);
//     vect.push_back(3);
//     vect.push_back(9);
//     vect.push_back(2);
//     vect.push_back(1);

//     sort(vect.begin() , vect.end());

//   for(int element: vect){
//     cout<<element;
//   }
}