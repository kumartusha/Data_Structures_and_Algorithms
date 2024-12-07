#include <bits/stdc++.h>
using namespace std;

// char isLowerCase(char ch)
// {
//     if (ch >= 'a' && ch <= 'z')
//     {
//         return ch;
//     }
//     else
//     {
//         return ch - 'A' + 'a';
//     }
// }

// bool checkPalindrome(string palin, int size)
// {
//     string secPalin;
// for (char ch : palin)
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
//     {
//         secPalin += ch;
//     }
// }

//     for(char ch: palin){
//         if(std::isalnum(ch)){
//             secPalin += ch;
//         }
//     }
//            cout<<secPalin;
//     // cout << secPalin << endl;

//     string thrPalin = secPalin;
//     int start = 0;
//     int end = secPalin.size() - 1;

//     while (start <= end)
//     {
//         if (isLowerCase(thrPalin[start]) != isLowerCase(thrPalin[end]))
//         {
//             return 0;
//         }
//         else
//         {
//             ++start;
//             --end;
//         }
//     }
//     return secPalin == thrPalin;
// }

// char isLowerCase(char ch){
//    if(ch >= 'a' && ch <= 'z'){
//     return ch;
//    }else{
//     return ch - 'A' + 'a';
//    }
// }

// bool validPalindrome(string str, int size){
// string secStr;
// for(char ch: str){
//     if(isalnum(ch)){
//      secStr += ch;
//     }
// }

// int start = 0;
// int end = secStr.size() - 1;
// string thrStr = secStr;

// while(start <= end){
//        if(isLowerCase(thrStr[start]) != isLowerCase(thrStr[end])){
//         return false;
//        }
//        else{
//         start++;
//         end--;
//        }
// }
// return thrStr == secStr;
// }
// int main(){

//     // string str = "tushar1234";
//     // int size = str.size();
//     // if (checkPalindrome(str, size))
//     // {
//     //     cout << "The string is Palindrome";
//     // }
//     // else
//     // {
//     //     cout << "The string is not Palindrome";
//     // }

//     string str = "0P";
//     int size = str.size();
//     if(validPalindrome(str,size)){
//         cout<<"The string is Palindrome";
//     }else{
//         cout<<"The string is not Palindrome";
//     }
// }

// string reverseWord(string str, int size)
// {  string word;
//    vector<string> words;
//    istringstream iss(str);

//    while(iss >> word){
//      words.push_back(word);
//    }

//     reverse(words.begin(), words.end());

//    using the string variable and traverse loop..
//   string variable= "";
//     for(int i = 0; i < words.size() ; i++){
//         variable += words[i] + " ";

//     }
//     return variable;

//      Using the predefined function (ostringstream)
//    ostringstream oss;
//     for (size_t i = 0; i < words.size(); ++i) {
//         if (i != 0) {
//             oss << " ";
//         }
//         oss << words[i];
//     }

//     return oss.str();
// }

// int main()
// {
// string str = "Hello i am the monster";
//   string result = reverseWord(str, str.size());
//   cout<<result<<" ";

//   Here we are divide any string into words withour using inbuilt function.
// string str = "I am here to represent my country";
// vector<string> result;
// string word = "";
//  for (char ch : str) {
//     if (ch == ' ') {
//         if (!word.empty()) {
//             result.push_back(word);
//             word.clear();
//         }
//     } else {
//         word += ch;
//     }
// }
// if(!word.empty()){
//     result.push_back(word);
// }

// int start = 0;
// int end = result.size() - 1;

// while (start <= end)
// {
//     swap(result[start++], result[end--]);
// }

// string variable = "";
// for(int i = 0; i < result.size(); ++i){
//    variable += result[i]+ " ";
// }
// cout<<variable;

//    Reverse the words that present into the string..

// }

// int main(){
//  Reverse the words that present into the string..
// string str = "Hello Bhai Kaise";
// //   we make them like "olleH iahB esiaK";
// string word = "";
// vector<string> words;
// for (char ch : str) {
//         if (ch == ' ') {
//             if (!word.empty()) {
//                 words.push_back(word);
//                 word.clear();
//             }
//         } else {
//             word += ch;
//         }
//     }
//     if(!word.empty()){
//         words.push_back(word);
//     }

//      for(auto element: words){
//         reverse(element.begin(), element.end());
//      }
// }

// Question :-  Maximum occurance character in the string...
// int isLowerCase(char ch)
// {
//     if (ch >= 'a' && ch <= 'z')
//     {
//         return ch - 'a';
//     }
//     else if (ch >= 'A' && ch <= 'Z')
//     {
//         return ch - 'A';
//     }
// }

// char getMaxOccuringChar(string str, int size)
// {
//     int ans = 0;
//     // we need to calculate the maximum occurance character in the string.
//     //  Here we create a array Count of each and every element..
//     int arr[26] = {0};
//     for (char ch : str)
//     {
//         int number = isLowerCase(ch);
//         ++arr[number];
//     }

//     //  Get the maximum occurance character and return the character for that index..
//     int max = INT_MIN;
//     for (int i = 0; i < 26; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//             ans = i;
//         }
//     }
//     char result = 'a' + ans;
//     return result;
// }

// int main()
// {
//     //  We need to calculate the no. of occurance.
//     string str = "missisippi";
//     cout << "The maximum no. of occurance character are:- " << getMaxOccuringChar(str, str.size());
// }

//   Custom Delimeter in the C++;
// int main()
// {
//     std::string input;

//     std::cout << "Enter a comma-separated list: ";
//     std::getline(std::cin, input, '-'); // Use ',' as the delimiter

//     std::cout << "You entered: " << input << std::endl;
// }

//  Question:- Replace the space with "@40";

// string replaceSpace(string str, int size)
// {
//     string result = "";
//     for (char ch : str)
//     {
//         if (ch == ' ')
//         {
//             result += "@40";
//         }
//         else{
//             result += ch;
//         }
//     }
//     return result;
// }

// int main()
// {

//     // Replace method in C++ for the string.
//     string str = "Hello my name is tushar";
//     string result = replaceSpace(str, str.size());
//     cout << result;
// }

//   Question:-  Replace space with "@40" in O(1) complexity..
// int main(){
// string str = "Hello Bhai I am here";
//  char space = ' ';
//  string value = "@4a";

//   for(int i = 0; i < str.size() ; i++){
//     if(str[i] == space){
//          str.replace(i,1,value);
//          i += value.length();
//     }
//   }
//   return str;
// }

//    Question :- Find the pattern after removing the part string..
// int main()
// {

//     string str = "daabcbaabcbc";
//     string part = "abc";

//    while(str.length() > 0 && str.find(part) < str.length()){
//     // cout<<str.find(part)<<" "<<part.length()<<endl;
//     str.erase(str.find(part), part.length());
//    }
//    cout<<str;
// }

// Question:-  Permutation of strings using C++.

// bool windowSame(int arr1[26], int arr2[26])
// {

//     for (int i = 0; i < 26; i++)
//     {
//         if (arr1[i] != arr2[i])
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// bool checkInclusion(string s1, string s2)
// {
//     //  First Get the occurance/count for the window variable...
//     int count1[26] = {0};
//     for (int i = 0; i <= s1.size(); ++i)
//     {
//         int index = s1[i] - 'a';
//         ++count1[index];
//     }

//     int i = 0;
//     int windowSize = s1.length();
//     int count2[26] = {0};
//     //  Slide the window on first two elements in the string..

//     while (i < windowSize && i < s2.length())
//     {
//         int index = s2[i] - 'a'; // Return the index of the first window element.
//         ++count2[index];
//         i++;
//     }

//     //  Check if the first window is exactly same to the s1
//     if (windowSame(count1, count2))
//         return 1;

//     //  traversing the rest window element into the string..
//     while (i < s2.length())
//     {
//         //    In this case we need the next one element..
//         int newCharIndex = s2[i] - 'a';
//         ++count2[newCharIndex];

//         //  And also we need to decrement the previous window element
//         int oldCharIndex = s2[i - windowSize] - 'a';
//         --count2[oldCharIndex];

//          ++i;

//         //  Again compare the rest window
//         if(windowSame(count1,count2)){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main()
// {

//     string s2 = "eidbaooo";
//     string s1 = "a";

//     // cout<<"Hello Bhai";
//     if(checkInclusion(s1, s2)){
//         cout<<"The s1 is exist in the s2";
//     }else{
//         cout<<"The s1 is not exist in the s2";
//     }
// }

//   Question:- Remove all adjacent duplicates in strings...
// int main(){
//     string s1 = "abbaca";
//     int i = 0;
//     int j = 1;

// }

//    Question :- compress the strings using the C++;
//  int compress(vector<char>& chars) {
//         int n = chars.size();
//         int writeIndex = 0; // Position to write compressed characters
//         int readIndex = 0;  // Position to read characters

//         while (readIndex < n) {
//             char currentChar = chars[readIndex];
//             int count = 0;

//             // Count the number of consecutive characters
//             while (readIndex < n && chars[readIndex] == currentChar) {
//                 readIndex++;
//                 count++;
//             }

//             // Write the character
//             chars[writeIndex++] = currentChar;

//             // If count is greater than 1, write the count as well
//             if (count > 1) {
//                 string countStr = to_string(count);
//                 for (char digit : countStr) {
//                     chars[writeIndex++] = digit;
//                     cout<<chars[writeIndex];
//                 }
//             }
//         }

//         // Return the new length of the compressed array
//         return writeIndex;
//     }

// int main(){
//     vector<char> chars = {'a','c','b','b','b','b'};
//     cout<<compress(chars);

// }