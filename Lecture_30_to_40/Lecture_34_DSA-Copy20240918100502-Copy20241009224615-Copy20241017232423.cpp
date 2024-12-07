#include <bits/stdc++.h>
using namespace std;

// bool isReverse(string &str,int start, int end){
// //  Base Case for reverse the string..
// if(start > end){
//     return 0;
// }

// swap(str[start++], str[end--]);
// isReverse(str, start, end);
// }

// bool isReverse(string &str, int start, int end)
// {
//     if (start > end)
//         return 0;

//     swap(str[start++], str[end--]);

//     isReverse(str, start, end);
// }

// bool isPalindrome(string str, int size)
// {
//     int start = 0;
//     int end = size - 1;

//     while (start <= end)
//     {
//         if (str[start++] != str[end--])
//         {
//             return 0;
//         }
//         // else
//         // {
//         //     start++;
//         //     end--;
//         // }
//     }
//     return 1;
// }

// bool isPalindrome(string &str, int start, int end){

//     if(start > end){
//         return 1;
//     }

//     if(str[start] != str[end]){
//         return 0;
//     }
//     else{
//         return isPalindrome(str, start + 1, end - 1);
//     }
// }

int isPower(int first, int second){

if(second == 0)
return 1;

if(second == 1)
return first;

int ans = isPower(first, second / 2);

if(second&1){
    return first * ans * ans;
}else{
    return ans * ans;
}
}

int main()
{

    // Question:- 1  Reverse the String using the C++.
    //   Method 1 to reverse the string.  (Using predefined Function)
    // string str = "tushar";
    // reverse(str.begin(), str.end());
    // cout<<str;

    //  Method 2 to reverse the string   (Using Loop)
    // string str = "tushar";
    // int start = 0;
    // int end = str.size() - 1;

    // while(start <= end){
    //     swap(str[start++], str[end--]);
    // }
    // cout<<str;

    // Method 3 to reverse the string  (Using Recursion)
    // string str = "Hello Bhai I am here";
    // int size = str.size();

    // isReverse(str,0, size - 1);

    // cout<<"The reverse string is:- "<<str;

    //  Method 4 to reverse the string (Only use one variable)

    // string str = "tushar";
    // int length = str.length();

    // for(int i = 0; i < length / 2; i++){
    //    swap(str[i], str[length - i -1]);
    // }

    // cout<<"The reversse string is:- "<<str;

    //  Question:- 2  Check Palindrome Using Recursion.

    //    Method:-1 Using the reverse with recursion and then check both.
    // string str = "100010001";
    // string str2 = str;
    // int size = str.length();

    // isReverse(str, 0, size - 1);

    // if(str == str2){
    //     cout<<"The string is palindrome";
    // }else{
    //     cout<<"The string is not a palindrome";
    // }

    //  Method:-2  To Check the string is palindrome or not.
    // string str = "tushar";
    // int size = str.length();

    // if (isPalindrome(str, size))
    //     cout << "The string is palindrome";
    // else
    // {
    //     cout << "The string is not the palindrome";
    // }

    // Method:-3 To check the string is palindrome or not using recursion.
    // string str = "kdjjdk";
    // int size = str.length();

    // if(isPalindrome(str, 0, size - 1)){
    //     cout<<"The string is palindrome";
    // }else{
    //     cout<<"The string is not the palindrome";
    // }

    // Question:-3 Calculate the power of a number.  (Method:- 1)
    //   int base = 2;
    //   int power = 10;
       
    //   cout<<"The power of base with power is:- "<<pow(base,power);

    //  Method:-2  using the recursion for decrease the time complexity.

    // int first = 2;
    // int second = 5;

    // int ans = isPower(first, second);
    // cout<<"The exponentiation of first to the second is:- "<<ans;




}