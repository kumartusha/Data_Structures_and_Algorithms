#include <iostream>
#include <unordered_map>
#include <bitset>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    // unordered_map<int, char> myMap = {{10, 'A'}, {11, 'B'},
    // {12, 'C'}, {13, 'D'}, {14, 'E'}, {15, 'F'}};

    // int decimal = 170;

    // //  we need to convert decimal to the hexadecimal..
    // while (decimal > 0)
    // {
    //     int remainder = decimal % 16;
    //     int quotient = decimal / 16;

    // }
    // Declare and initialize a bitset
    // bitset<8> originalBitset(255); // binary: 11111111

    // // Store the values of originalBitset in another variable using assignment
    // bitset<8> newBitset = originalBitset;

    // // Print both bitsets
    // cout << "Original Bitset: " << originalBitset << endl;
    // cout << "New Bitset: " << newBitset << endl;

    // int decimalValue = 255; // Example decimal number

    // // Print the decimal value as hexadecimal using std::hex
    // cout << "Decimal Value: " << decimalValue << endl;
    // string str = hex << decimalValue;
    // string str = "";
    // cout << "Hexadecimal Value: " << typeid( decimalValue).name() << endl;

    int decimalValue = 500;
    //  we need to convert from the decimal to the hexadecimal Value..
    char ch[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    string ans = "";

    while (decimalValue > 0)
    {
        int remainder = decimalValue % 16;
        int quotient = decimalValue / 16;

        ans = ch[remainder] + ans;
        decimalValue = decimalValue / 16;
    }

    cout << ans;
}