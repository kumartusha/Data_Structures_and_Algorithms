// #include <iostream>
// using namespace std;

// int main(){
// // int a = 12;
// // int b = 13;

// // bool isTrue = "Hello Bhai";

// // char character = 'a';

// // float isFloat = 34.23;

// // double isDouble = 34./222232;

// // cout<<"The number are :- "<< isTrue<<character <<endl;
// // cout<<"The maximum number are:- "<< a <<endl;

// // cout<<"The sum of a and b are "<< (a+b)<< endl;

// int a = 'a';
// cout<<a;

// }

#include <iostream>
#include <cmath> // For log2 function
using namespace std;

int main(){
// int scope;
// int first = 34;
// char second = 230;
// double third = 54;
// float fourth = 45;
// bool fifth = 3;

// scope = cin.get();
// cout<<first<<" "<<second<<" "<<third<<" "<<fourth<<" "<<fifth;

//  Character Program in C++
//     char ch = cin.get();

// if(ch >= 97 && ch <= 122){
//   cout<<"The Character in Lowercase";
// }else if(ch >= 65  && ch < 97){
//     cout<<"The Character is in Upper Case";
// }else{
//     cout<<"The character is number";
// }

//  Prime Number Program in C++
// int isPrime = 8;

// for(int first = 2; first < 10 ; ++first){
//     if(isPrime % first == 0){
//         cout<<"The Number is Not Prime";

//     }else{
//         cout<<"The Number is Prime Number";
//         break;
//     }
// }

//  Fin the sum of all the even numbers..
// int sum = 0;
// for(int i = 1 ; i <= 1000000000; i++){
//       if(i % 2 != 0){
//         sum = sum + i;
//       }
// }

// cout<<"The sum of all the even numbers are:- "<<sum<<endl;


// int first = 5;
// int second = 6;

// cout<<(first & second)<<endl;
// cout<<(first | second)<<endl;
// cout<<~first<<endl;
// cout<<(first ^ second)<<endl;

//    FIbonacci Number using the for loop
// int sequence = 10;
// int first = 0,sum;
// int second = 1;
// cout<<0<<" "<<1<<" ";
// for(int i = 1 ; i <= sequence ; ++i){
//    sum = first + second;
//    cout<<sum<<" ";
//    first = second;
//    second = sum;
// }

// Continue Keyword in C++;
// for(int i = 0; i < 10 ; ++i){
//     if(i==2){
//         continue;
//     }
//     cout<<i<<" ";
//  }

// int number = 234;
// int prod = 1,sum = 0;
// while(number > 0){
//   int remainder = number % 10;  
// prod = prod * remainder;
// sum = sum + remainder;
// number = number/10;
// }
// cout<<prod<<" "<<sum;

int number = 5;
int returnValue = calculateBitLength(number);
cout<<returnValue;

}

int calculateBitLength(int num){
    if (num == 0) {
        return 1; // Special case: the number 0 requires 1 bit to represent
    }
    return floor(log2(num)) + 1;
}

