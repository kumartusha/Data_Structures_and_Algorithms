//  Character Array and String and solve multiple problems for the strings..

#include <bits/stdc++.h>
using namespace std;

int getLength(char arr[])
{
    int ans = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        ++ans;
    }
    return ans;
}

void reverseString(char arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
}

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        return ch - 'A' + 'a';
    }
}

bool checkPalindrome(string s)
{
    int start = 0;          // 0
    int end = s.size() - 1; // 3
    string str2;

    //  Remove all space and special symbol...
    for (char ch : s)
    {
       if(isalpha(ch)){
        str2 += ch;
       }
    }
    string str3 = str2;
   cout<<str3<<" and "<<str2<<endl;
//  Reverse the string.
    // reverse(str3.begin(), str3.end());
    //              OR
    while(start <= end){
        if(str3[start] != str3[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
cout<<str3<<" "<<str2;
    return str3 == str2;

}
int main()
{

    // char name[20];
    //  cout<<"Enter your name:- ";
    //  cin>>name;

    //  cout<<"Your name is:- "<<name<<endl;

    //  Calculate the length of an string of char array.
    // cout<<getLength(name);
    //   int size = getLength(name);
    // reverseString(name,size);
    // cout<<"Your name is:- "<<name;

    // string s = "5?36@6?35";

    // string result = "";

    // int start = 0;
    // int end = s.size() - 1;

    // string str = "@ m #ad am";
    // string str2;
    // for(char ch: str){
    //     if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= 0 && ch <= 9){
    //       str2 += ch;
    //     }
    // }
    // if(s == str2)
    // return true;

    // return false;

    string str = "n oon";
    cout << checkPalindrome(str);
}