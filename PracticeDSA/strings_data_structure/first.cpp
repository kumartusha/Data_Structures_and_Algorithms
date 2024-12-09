#include <iostream>
// #include <bits/stdc++.h>
#include <unordered_map>
#include <map>
using namespace std;

// int main(){
// //  Here we see that the implementation of the string in c++
// cout<<"Tushar Kumar";
// }



int main(){

// cout<<"Hello world";
// I, V, X, L, C, D and M.
string s = "MCMXCIV";
unordered_map<char, int> myMap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M',1000}};

// int size = s.length();
// int sum = 0;
// for(int i = 0; i < size; ++i){
//         if(i < size - 1 && myMap[s[i]] < myMap[s[i + 1]]){
//             sum -= myMap[s[i]];
//         }else{
//             sum += myMap[s[i]];
//         }
// }

// cout<<sum;

// int sum = 0;
// for(auto ch: s){
//     int value = myMap[ch];
//     sum += value;
// }

// cout<<"The total sum of the Roman numbers are:- "<<sum;
//   for(auto element: myMap){
//        cout<<element.first<<" "<<element.second<<endl;
//   }

 int sum = 0;
    int prevValue = 0;

    // Traverse the string from right to left
    for (int i = s.length() - 1; i >= 0; --i) {
        int currentValue = myMap[s[i]];
        
        // If the current value is less than the previous value, subtract it
        if (currentValue < prevValue) {
            sum -= currentValue;
        } else {
            sum += currentValue;
        }

        // Update the previous value
        prevValue = currentValue;
    }

    cout<<sum;

}




