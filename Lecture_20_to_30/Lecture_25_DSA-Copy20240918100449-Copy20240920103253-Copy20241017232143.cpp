// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// <Question:- 1>
// float f = 10.5;
// float p = 2.5;
// float* ptr = &f;
// (*ptr)++;
// *ptr = p;
// cout << *ptr << " " << f << " " << p;

// <Question:- 2>
// int a = 7;
// int b = 17;
// int *c = &b;
// *c = 7;
// cout  << a << " " << b << endl;

// <Question:- 3>
// int *ptr = 0;
// int a = 10;
// *ptr = a;
// cout << *ptr << endl;

// <Question:- 4>
// Which of the following gives the memory address of variable 'b' pointed by pointer 'a' i.e.

// int b = 10;
// int *a = &b;

// <Question:- 5>
//  char ch = 'a';
//  char* ptr = &ch;
//  ch++;
//  cout << *ptr << endl;

// <Question:- 6>
// int a = 7;
// int *c = &a;
// c = c + 1;
// cout  << a << "  " << *c << endl;

// <Question:- 7>
// Assume the memory address of variable ‘a’ is 400 (and an integer takes 4 bytes), what will be the output -

// int a = 7;
// int *c = &a;
// c = c + 3;
// cout<< c << endl;

// <Question:- 8>
// Assume memory address of variable ‘a’ is : 200 and a double variable is of size 8 bytes, what will be the output -

// double a = 10.54;
// double *d = &a;
// d = d + 1;
// cout  << d << endl;

// <Question:- 9>
// Assume integer takes 4 bytes and integer pointer 8 bytes.

// int a[5];
// int *c;
// cout << sizeof(a) << " " << sizeof(c);

// <Question:- 10>
// int a[] = {1, 2, 3, 4};
// cout << *(a) << " " << *(a+1);

// <Question:- 11>
// Assume that address of 0th index of array ‘a’ is : 200. What is the output -

// int a[3] = {1, 2, 3};
// cout << *(a + 2);

// <Question:- 12>
// int a[] = {1, 2, 3, 4};
// int *p = a++;
// cout << *p << endl;

// <Question:- 13>
// int arr[] = {4, 5, 6, 7};
//   int *p = (arr + 1);
//   cout << *arr + 9;

// <Question:- 14>
// Assume address of 0th index of array ‘b’ is 200. What is the output -

// char b[] = "xyz";
// char *c = &b[0];
// cout << c << endl;

// <Question:- 15>
// char s[]= "hello";
// char ch[] = "abcde";
// char *p = ch;
// cout<<ch<<" "<<p<<" "<<*p<<" "<<*ch<<endl;
// cout << ch[0] << " " << p[0]<<endl;

// <Question:- 16>
// int arr[] = {1,2,3,4,5};
// int *ptr = arr;
// cout<<arr<<" "<<ptr<<" "<<*ptr<<" "<<*arr;
// cout << arr[0] << " " << ptr[4];

// <Question:- 17>
// char arr[20];
// int i = 0;
// for (i = 0; i < 10; i++)
// {
//     *(arr + i) = 65 + i;
// }
// *(arr + i) = '\0';
// cout << arr<<endl;   // ABCDEFGHIJ
// cout << arr[8];      // I

// <Question:- 18>
// int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// int i = 0;
// for (i = 0; i < 10; i++)
//     *(arr + i) = 65 + i;
// cout << arr[0];

//    <Question:- 19>
// char *ptr;
// char Str[] = "abcdefg";
// ptr = Str;
// ptr += 5;
// cout << ptr;

// <Question:- 20>
// int numbers[5];
// int *p;
// p = numbers;
// *p = 10;
// p = &numbers[2];
// *p = 20;
// p--;
// *p = 30;
// p = numbers + 3;
// *p = 40;
// p = numbers;
// *(p + 4) = 50;
// for (int n = 0; n < 5; n++)
//     cout << numbers[n] << ",";

// <Question:- 21>
// char st[] = "ABCD";
// for (int i = 0; st[i] != '\0'; i++)
// {
//     cout << st[i] << *(st) + i << *(i + st) << i[st]<<endl;
// }

// <Question:- 22>
// char st[] = "abcd";
// cout<<st<<" "<<*st;  // abcd  a
// cout<<st<<" "<<*st + 2; // 99

// <Question:- 23>
// float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
// float *ptr1 = &arr[0];
// float *ptr2 = ptr1 + 3;
// cout << *ptr2 << " ";
// cout << ptr2 - ptr1;

// <Question:- 24>
// void changeSign(int *p)
// {
//     *p = (*p) * -1;
// }

// int main()

// int a = 10;
// changeSign(&a);
// cout << a << endl;
// }

// <Question:- 25>
// void fun(int a[])
// {
//     cout << a[0] << " ";
// }

// int main()
// {
//     int a[] = {1, 2, 3, 4};
//     fun(a + 1);
//     cout << a[0];
// }

// <Question:- 26>
// void square(int *p)
// {
//     int a = 10;
//     p = &a;
//     *p = (*p) * (*p);
// }

// int main()
// {
//     int a = 10;
//     square(&a);
//     cout << a << endl;
// }

// <Question:- 27>
// void swap(char *x, char *y)
// {
//     char *t = x;
//     x = y;
//     y = t;
// }

// int main(){
// char *x = "ninjasquiz";
// char *y = "codingninjas";
// char *t;

// swap(x, y);
// cout << *x << " " << *y;
// }

// <Question:- 28>
//     void  Q(int z)
// {
//     z += z;
//     cout << z << " "; }

// void P(int *y)
// {
//     int x = *y + 2;
//     Q(x);
//     *y = x - 1;
//     cout << x << " ";
// }

// int main()
// {
//     int x = 5;
//     P(&x);
//     cout << x;
//     return 0;
// }

// <Question:- 29>
// int a = 10;
// int *p = &a;
// int **q = &p;
// int b = 20;
// *q = &b;
// (*p)++;
// cout << a << " " << b << endl;

// <Question:- 30>
// int f(int x, int *py, int **ppz)
// {
//     int y, z;
//     **ppz += 1;
//     z = **ppz;
//     *py += 2;
//     y = *py;
//     x += 3;
//     return x + y + z;
// }

// int main()
// {
//     int c, *b, **a;
//     c = 4;
//     b = &c;
//     a = &b;
//     cout << f(c, b, a);
//     return 0;
// }

// <Question:- 31>
// int main()
// {
//     int ***r, **q, *p, i = 8;
//     p = &i;
//     (*p)++;
//     q = &p;
//     (**q)++;
//     r = &q;
//     cout << *p << " " << **q << " " << ***r;
// }

// <Question:- 32>
// void increment(int **p)
// (**p)++;

// int main()
// {
//     int num = 10;
//     int *ptr = &num;
//     increment(&ptr);
//     cout << num << endl;
// }

// }

//   Interview Question:- what is jagged array in C++;
#include <iostream>
using namespace std;

int main()
{
    // Number of rows
    int rows = 3;

    // Create an array of pointers to arrays
    int *jaggedArray[3];

    // Define the size of each row and allocate memory
    jaggedArray[0] = new int[2]; // Row 0 has 2 elements
    jaggedArray[1] = new int[3]; // Row 1 has 3 elements
    jaggedArray[2] = new int[4]; // Row 2 has 4 elements

    // Initialize the jagged array with values
    for (int i = 0; i < 2; i++)
    {
        jaggedArray[0][i] = i + 1;
    }

    for (int i = 0; i < 3; i++)
    {
        jaggedArray[1][i] = i + 10;
    }

    for (int i = 0; i < 4; i++)
    {
        jaggedArray[2][i] = i + 20;
    }

    // Display the jagged array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < (i + 2); j++)
        {
            cout << jaggedArray[i][j] << " ";
        }
        cout << endl;
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++)
    {
        delete[] jaggedArray[i];
    }

    return 0;
}
