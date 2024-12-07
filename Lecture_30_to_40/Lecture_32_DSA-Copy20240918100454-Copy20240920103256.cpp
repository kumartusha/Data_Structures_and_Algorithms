#include <bits/stdc++.h>
using namespace std;

void recursive(int number, string *arr)
{
    // Using Recursive Approach..
    if (number)
        return ;

    recursive(number / 10, arr);
     cout<<arr[number % 10]<<" ";

}

int main()
{
    int number = 412;
    int ans = 0;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Using Iterative Approach...
    // vector<string> strVect;

    // while(number > 0){
    //     int remainder = number % 10;
    //     // strVect.push_back(vect[remainder]);
    //     cout<<vect[remainder]<<" ";
    //     number /= 10;
    // }

    // reverse(strVect.begin(), strVect.end());

    // for(auto element: strVect){
    //     cout<<element<<" ";
    // }

    recursive(number, arr);
}