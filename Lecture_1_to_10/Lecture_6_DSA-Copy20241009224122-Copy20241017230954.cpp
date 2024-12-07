// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {

//     // int n = 4;
//     // int ans = 0;
//     // int i = 0;
//     // while(n){

//     // int bit = n & 1;
//     // ans = (bit * pow(10, i)) + ans;
//     // n = n >> 1;
//     // i++;
//     // }

//     int number = 10;
//     int ans = 0;
//     int i = 0;
//     while (number)
//     {
//         int remainder = number % 2;
//         cout<<remainder<<" ";
//         number = number / 2;
//     }

//     // cout<<" The binary represent is:- "<<ans;
// }

#include <iostream>
using namespace std;

void decimalToBinary(int number) {
    if (number == 0) {
        cout << "0";
        return;
    }

    string binary = ""; // String to store binary digits

    // Convert decimal to binary
    while (number > 0) {
        binary =  (number % 2 == 0 ? "0" : "1") + binary;
        cout<<binary<<" ";
        number = number / 2;
    }

    // cout << binary;

}

int main() {
    int decimalNumber = 36;
    cout << "Decimal: " << decimalNumber << endl;
    cout << "Binary: ";
    decimalToBinary(decimalNumber);
    cout << endl;
    return 0;
}
