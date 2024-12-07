// Here we implementing the solution for the advance binary search Problem..

// 1. How to find the Pivot Element into the Sorted Array.

#include <bits/stdc++.h>
using namespace std;

// int findPivot(vector<int> vect)
// {

//     int start = 0;
//     int end = vect.size() - 1;

//     while (start < end)
//     {

//         int mid = start + (end - start) / 2;
//         if (vect[mid] >= vect[0])
//         {
//             start += 1;
//         }
//         else
//         {
//             end -= 1;
//         }
//     }
//     return vect[end];
// }

// int main()
// {
//     //  The Very First Question is How to Calculate the Pivot Element into the Sorted Array.

//     vector<int> vect = {1,2,3,4,5};

//     int pivotElement = findPivot(vect);

//     cout<<pivotElement;

//     // for (auto element : vect)
//     // {
//     //     cout << element << " ";
//     // }
// }

// int main()
// {

//     int n = 2;
//     int m = 9;

//     //  Here we use the binary seatch for solving the Questions..
//     int start = 0;
//     int end = m;

//     int result = -1;

//     while (start < end)
//     {
//         int mid = start + (end - start) / 2;

//         if (pow(mid, n) == m)
//             result = mid;

//         else if (pow(mid, n) > m)
//         {
//             end = mid;
//         }
//         else
//         {
//             start = mid;
//         }
//     }

//     cout<<result;
// }

// int main()
// {

//     vector<vector<int>> vect = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
//     int target = 12;

//     for (auto element : vect)
//     {
//         for (auto element2 : element)
//         {
//             cout << element2 << " ";
//         }
//         cout << endl;
//     }

// }

// int main()
// {

//     vector<int> vect = {1, 2, 3, 4, 5};

//     // sort(vect.begin(), vect.end(), greater<int>());

//     sort(vect.begin(), vect.end(), greater<int>());

//     for(auto element: vect){
//            cout<<element<<" ";
//     }
// }
//

// Here we write the program of the power of x to the n.

// long long modulo(long long a, long long b)
// {

//     const int mod = 1000000007;
//     long long result = 1;

//     while (b > 0)
//     {
//         if (b % 2 == 1)
//         {
//             result = (result * a) % mod;
//             a = (a * a) % mod;
//             b /= 2;
//         }
//     }
// return result;
// }

// int main()
// {

//     long long a = 48476734;
//     long long b = 9;

//     cout << modulo(a, b);
// }

// int main(){

//   int *p = 0;
//   cout<<*p;

// }

// inline int myFunction(int a, int b){
// return a * b;
// }

// int main(){

//    cout<<myFunction(10,10);

// }

// int main()
// {

//    //  Our Answer is the 2
//    vector<vector<int>> vect = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
//    int row = vect.size();
//    int col = vect[0].size();

//    int maxRow = INT_MIN;
//    int oneIndex = -1;
//    for (int i = 0; i < row; ++i)
//    {
//       int count = 0;
//       for (int j = 0; j < col; ++j)
//       {
//          if (vect[i][j] == 1)
//          {
//             count++;
//          }
//       }
//       if (maxRow < count)
//       {
//          maxRow = count;
//          oneIndex = i;
//       }
//    }

//    cout<<"The maximum number of ones are:- "<<maxRow<<endl;
//    cout<<"The maximum number of ones index are:- "<<oneIndex<<endl;

// }

// int main(){
//   vector<int> vect = {1,3,5,6,7,8,11,13,14,16,17,18,19,20,21,23,24,25,26,28,29,30,31,34,35,36,37,38,41,43,44,47,50,51,53,54,56,57,58,59,60,62,63,65,67,68,69,70,71,72,73,74,76,78,80,81,83,84,85,88,89,90,91,92,93,95,97,98,102,103,104,105,108,109,110,111,112,113,114,117,120,123,124,125,127,128,129,130,131,132,133,135,136,137,138,139,141,142,145,146,148,149,150,151,153,154,155,156,161,162,164,167,168,169,170,171,172,175,176,178,179,181,182,184,191,193,195,196,199,201,202,204,205,208,210,214,215,217,219,221,222,224,226,228,229,230,231,232,234,235,236,240,242,246,248,249,251,252,253,254,255,256,257,258,259,260,261,262,265,267,269,272,273,275,278,279,280,281,282,283,284,285,286,287,289,291,292,293,296,297,298,299,303,305,306,308,312,313,315,316,318,320,323,324,327,330,332,335,337,340,342,343,344,346,349,350,352,353,354,356,357,359,360,362,366,367,369,370,374,375,376,377,378,379,382,384,386,390,392,393,394,395,396,399,400,401,403,406,411,413,415,416,420,424,425,426,427,429,430,432,434,435,436,437,438,439,440,441,442,443,444,446,447,448,449,452,455,456,458,459,460,461,462,463,464,465,466,467,469,470,471,472,477,479,480,483,484,486,488,489,490,491,492,493,494,495,500,501,503,504,506,508,510,513,514,515,516,517,527,531,533,534,535,536,542,543,546,547,548,549,550,553,556,559,561,562,563,566,567,569,571,572,576,578,579,581,582,583,584,586,589,591,592,593,594,595,598,600,601,602,603,605,606,607,609,611,612,613,614,616,617,621,622,624,625,626,627,630,631,633,635,636,637,639,640,643,644,646,647,648,649,650,651,652,654,658,660,661,662,663,664,665,667,668,669,672,673,678,679,683,685,686,687,689,690,691,692,693,695,696,697,701,702,703,704,707,709,711,714,717,718,719,720,721,723,724,725,726,728,729,730,733,735,736,737,738,740,742,745,746,747,750,754,755,757,759,761,763,765,768,771,773,774,775,776,779,780,781,782,783,784,787,788,789,790,791,792,794,795,797,798,800,801,805,806,808,810,811,812,814,816,819,822,824,825,826,828,831,833,835,838,841,842,844,845,846,847,849,853,854,855,857,858,861,862,866,868,869,870,874,878,882,884,885,888,889,890,892,893,897,900,903,905,906,907,908,911,913,916,918,920,921,922,924,925,926,928,929,930,932,933,934,936,937,938,940,942,944,946,949,953,954,956,957,958,961,962,964,965,966,969,972,973,974,976,977,978,979,980,981,982,984,985,986,988,993,996,997,999};
//   cout<<vect.size();
// }

// void merge(int *arr, int start, int end){

//     //  Here we need to perform the Operation to sort the Array.
// //     Calculate the Mid for the Merge Function..
//     int mid = start + (end - start) / 2;

//     int length1 = mid - start + 1;
//     int length2 = end - mid;

//     //  Create the two Empty Array of Size length1 and length2..
//     int *arr1 = new int[length1];
//     int *arr2 = new int[length2];

//     int copy = start;
//     //  Copy the Value into the New Created Array..
//     for(int i = 0; i < length1; ++i){
//         arr1[i] = arr[copy++];
//     }

//     for(int i = 0; i < length2; ++i){
//         arr2[i] = arr[copy++];
//     }

//     //  Now Here we have the two sorted Array now we need to merge Them into the single Array..
//     copy = start;
//     int i = 0;
//     int j = 0;

//     while(i < length1 && j < length2){

//       if(arr1[i] <= arr2[j]){
//         arr[copy] = arr1[i++];
//       }else{
//         arr[copy] = arr2[j++];
//       }
//        copy++;
//     }

//     while(i < length1){
//         arr[copy++] = arr1[i++];
//     }
//     while(j < length2){
//         arr[copy++] = arr2[j++];
//     }
// }

// void mergeSort(int *arr, int start, int end){

// //     Base Condition for the Merge Sort..
//     if(start >= end){
//         return;
//     }

//     // Calculate the Mid for divide the Array.
//     int mid = start + (end - start) / 2;
//     //  Recursion Call for the Left Part right Part and then Merge..
//     mergeSort(arr, start, mid);
//     mergeSort(arr, mid + 1, end);
//     merge(arr, start, end);
// }

// int main(){

//   int arr[10] = {10,9,8,7,6,5,4,3,2,1};
//   int size = sizeof(arr) / sizeof(arr[0]);

//      cout<<"Before the Sorting:- ";
//      for(int i = 0; i < size; ++i){
//           cout<<arr[i]<<" ";
//      }
//      cout<<endl;
// //   We need to Implement the Merge Sort Algorithm..
//      mergeSort(arr, 0, size - 1);
//      cout<<"After the Sorting:- ";
//      for(int i = 0; i < size; ++i){
//           cout<<arr[i]<<" ";
//      }
// }

int pivot(int *arr, int start, int end)
{
    // Get the Pivot Element..
    int pivotElement = arr[start];

    int count = 0;
    //  Find the right index of the Pivot Element.
      for(int i = start + 1; i <= end; ++i){
            if(arr[i] < pivotElement){
                ++count;
            }
      }
     
    //  cout<<count<<endl;
    //    Place the pivot Element on the right Index.
    int pivotIndex = count + start;
    swap(arr[start], arr[pivotIndex]);

    //   Here we have the array which contain the right Position of the PivotElement..
    // Now we use the two pointer Approach for arranging the elements into the right order..
    
    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivotElement)
        {
            ++i;
        }
        while (arr[j] > pivotElement)
        {
            --j;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int start, int end)
{

    if (start >= end)
    {
        return;
    }

    // calculate the Mid Value.

    int pivotIndex = pivot(arr, start, end);

    quickSort(arr, start, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, end);
}

//  Implementation of the Quick Sort..
int main()
{

    int arr[10] = {8,9,3,1,5,2,6,4,7,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before the Sorting:- ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    quickSort(arr, 0, size - 1);

    cout << "After the Sorting:- ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
}
