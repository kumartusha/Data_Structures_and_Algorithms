#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    // string str;

    // getline(cin, str);

    // cout<<"The string are:- "<<str;

    //  Swap Alternate

    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    // for(int i = 0; i < 10 - 1; i += 2){
    //     swap(arr[i], arr[i+1]);
    // }

    // for(auto element: arr){
    //     cout<<element<<" ";
    // }

    // Decimal to binary conversion using the C++.
    // int number = 128;
    // string str = "";
    // while(number != 0){
    //     int remainder = number % 2;
    //     str += to_string(remainder);
    //     number = number / 2;
    // }

    // reverse(str.begin(), str.end());
    // cout<<str;
    //

    // int n = 456;
    // int number = n;
    // int ans = 0;
    // int i = 0;

    // while(number != 0){
    // int digit = number % 10;
    // ans = digit * pow(10, i) + ans;
    // number = number / 10;
    // ++i;
    // }

    // cout<<ans;

    // int n = 23;
    // int ans = 0;
    // int i = 0;

    // while (n > 0)
    // {
    //     int digit = n & 1;
    //     ans = (digit * pow(10, i++)) + ans;
    //     // cout<<ans<<" ";
    //     n = n >> 1;
    // }
    // cout << ans;

    // int number = 100000;
    // int ans = 0;
    // int i = 0;

    // while(number != 0){
    //        int bit = number % 10;
    //       ans = ans + (bit * pow(2, i++));
    //       number = number / 10;
    // }
    // cout<<ans;

    // unsigned int value = -10;
    // cout<<value;

    // signed int value = -10;
    // cout<<value;
    //     return 0;
   int x = -123;
    int ans = 0;
    while (x != 0)
    {
        int remainder = x % 10;

        // if( ans > INT_MAX  || ans < INT_MIN){
        //     ans = ans / 10;
        // }

        ans = ans * 10 + remainder;
        x = x / 10;
    }
    cout<<ans;
}