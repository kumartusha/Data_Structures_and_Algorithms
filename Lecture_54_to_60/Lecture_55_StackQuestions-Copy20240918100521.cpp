#include <bits/stdc++.h>
using namespace std;

int main()
{

    // string str = "Tushar";
    // stack<char> charStack;

    // for(char ch: str){
    // charStack.push(ch);
    // }

    // while(!charStack.empty()){
    //    cout<<charStack.top()<<"";
    //    charStack.pop();
    // }

    //  Delete the middle element from the stack..

    // int size = st.size();
    // int position = (size) / 2;
    // int count = -1;

    // while (!st.empty())
    // {
    //     ++count;
    //     if (count == position)
    //     { 
    //         st.pop();
    //     }
    // }
    //  st.pop();
    //   cout<<element<<endl;

    //   while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    //   }

    stack<int> st;
    st.push(5);
    st.push(-2);
    st.push(9);
    st.push(-7);
    st.push(3);

vector<int> arr;
  while (!st.empty())
  {
       cout<<st.top()<<" ";
       arr.push_back(st.top());
       st.pop();
  }
  cout<<endl;
  sort(arr.begin(), arr.end());

for(auto element: arr){
    st.push(element);
  }

while (!st.empty())
  {
       cout<<st.top()<<" ";
      //  arr.push_back(st.top());
       st.pop();
  }
  // for(auto element: arr){
  //   cout<<element<<" ";
  // }
  


}
