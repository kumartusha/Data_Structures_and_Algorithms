// #include <bits/stdc++.h>
// using namespace std;

// // // int main()
// // // {
// // //     // numsor<int> nums1 = {0};
// // //     // int m = nums1.size();
// // //     // vector<int> nums2 = {1};
// // //     // int n = nums2.size();

// // //     // for(int i = 0, j = m; i < nums2.size() ; ){
// // //     //          nums1.push_back(nums2[i++]);
// // //     //          ++j;
// // //     // }

// // //     // sort(nums1.begin(), nums1.end());

// // //     // for(int i = 0; i < nums1.size() ; ++i){
// // //     //     cout<<nums1[i]<<" ";
// // //     // }
// // // }

// // class Queue
// // {

// //     int *arr;
// //     int arrSize;
// //     int front;
// //     int rear;

// // public:
// //     Queue(int size)
// //     {
// //         arr = new int[size];
// //         this->arrSize = size;
// //         this->front = -1;
// //         this->rear = -1;
// //     }
// //     //  Operations on the circular Queue.

// //     void enqueue(int data)
// //     {
// //         if ((front == 0 && rear == arrSize - 1) || (front == (rear % arrSize) + 1))
// //         {
// //             cout << "Queue is Full" << endl;
// //         }
// //         else if (rear == -1 && front == -1)
// //         {
// //             rear = front = 0;
// //             arr[rear] = data;
// //         }
// //         else
// //         {
// //             rear = (rear + 1) % arrSize;
// //             arr[rear] = data;
// //         }
// //     }

// //     void dequeue()
// //     {
// //         //   for handling the multiple conditions for delete the element from the circular Queue..
// //         if (rear == -1 && front == -1)
// //         {
// //             cout << "Queue is Empty" << endl;
// //         }
// //         else if (rear == front)
// //         {
// //             rear = front = -1;
// //         }
// //         else
// //         {
// //             //  So we traverse the front using the circular manner..
// //             cout << "The deleted element are:- " << arr[front] << endl;
// //             front = ((front + 1) % arrSize);
// //         }
// //     }

// //     void isEmpty()
// //     {
// //         if (rear == -1 && front == -1)
// //         {
// //             cout << "Queue is Empty" << endl;
// //         }
// //         else
// //         {
// //             cout << "Queue is not Empty" << endl;
// //         }
// //     }

// //     void peek()
// //     {
// //         if (rear == -1 && front == -1)
// //         {
// //             cout << "Queue is Empty" << endl;
// //         }
// //         else
// //         {
// //             cout << "The peek Element are:- " << arr[front] << endl;
// //         }
// //     }
// //     void back()
// //     {
// //         if (rear == -1 && front == -1)
// //         {
// //             cout << "Queue is Empty" << endl;
// //         }
// //         else
// //         {
// //             cout << "The back Element are:- " << arr[rear] << endl;
// //         }
// //     }
// //     void display()
// //     {
// //         //    For printing the queue element we want to move the front according the circular Queue.
// //         //    cout<<arr[front]<<endl;
// //         // for(int i = front; i < rear ;){
// //         //     cout<<arr[i]<<" ";
// //         //     i = (i + 1) % arrSize;
// //         // }cout<<arr[rear];

// //         int i = front;
// //         while(true){
// //             cout<<arr[i]<<" ";
// //             if(i == rear)
// //             break;
// //           i = (i + 1) % arrSize;
// //         }

// //     }
// // };

// // int main()
// // {

// //     //  Implementation of the circular queue using the array in C++.
// //     Queue *queue = new Queue(5);
// //     queue->isEmpty();

// //     queue->enqueue(1);
// //     queue->enqueue(2);
// //     queue->enqueue(3);
// //     queue->enqueue(4);
// //     queue->enqueue(5);
// //     // queue->enqueue(5);

// //     queue->peek();
// //     queue->back();

// //     queue->display();
// // }

// // int main(){

// // //  Find the perfect number..
// // int number = 6;
// // int sum = 0;
// // for(int i = 1; i < number ;++i){
// //     if(number % i == 0){
// //         sum = sum + i;
// //     }
// // }
// // if(sum == number)
// // return true;
// // else{
// //     return false;
// // }

// // }

// // int main(){

// //    int arr[] = {1,2,3,4,5,6,7,8,9};
// //    int size = sizeof(arr) / sizeof(arr[0]);

// //    auto arr1 = min_element(arr, arr + size);
// //    auto second = max_element(arr, arr + size);

// //    cout<<"The minimum and maximum element are:- "<<*first<<endl;
// //    cout<<"The maximum and maximum element are:- "<<*second<<endl;

// // vector<int> first = {1,2,2,3,4,5,4,5,6,6};
// // vector<int> second = {2,4,6,8};

// //  pair<int , int> result;

// // 	   set<int> mySet;

// // 	   for(auto element: first){
// // 		   mySet.insert(element);
// // 	   }
// // 	   for(auto element: second){
// // 		   mySet.insert(element);
// // 	   }

// //    for(auto element: mySet){
// //     cout<<element<< " ";
// //    }
// // cout<<mySet.size();

// // vector<int> arr;
// // int i = 0, j =0;
// // while(i < first.size() && j < second.size()){

// // if(first[i] < second[j]){
// //     ++i;
// // }else if(first[i] > second[j]){
// //     ++j;
// // }else if(first[i] == second[j]){
// //    arr.push_back(first[i]);
// //    ++i, ++j;
// // }
// // }

// // cout<<arr.size()<<" "<<mySet.size();

// // vector<int> first = {2,2,1,1,1,2,2};
// // int ans = 0;
// // map<int, int> myMap;
// // for(auto element: first){

// //     myMap[element]++;

// // }

// // for(auto element: myMap){
// //     if(element.second > first.size()/ 2){
// //         // cout<<element.second;
// //         ans = element.first;
// //     }
// // }
// // cout<<ans;

// // vector<int> arr = {64, 34, 25, 12, 22, 11, 90, 70, 56, 89, 78, 43, 5, 6, 27, 13, 17, 8, 32, 20};

// // sort(arr.begin(), arr.end());
// // sort(arr.begin(), arr.end(), greater<int>());

// // strsing result = "";
// // for(int i = 0; i < arr.size(); ++i){
// //     result += to_string(arr[i]);
// // }
// // cout<<result;

// // for(int i = 0; i < arr.size(); ++i){
// //     for(int j = 0; j < arr.size() - 1; ++j){
// //         if(arr[j] > arr[j + 1]){
// //             swap(arr[j], arr[j+1]);
// //         }
// //     }
// // }

// // for(auto element: arr){
// //     cout<<element<<" ";
// // }

// // }

// // void merge(int *arr, int low,int end){

// // int mid = low + (end - start) / 2;

// // //  Create a length for the arrays..
// //    int length1 = mid - start + 1;
// //    int length2 = end - mid;

// // //  Creating the two vector for storing the element of the main array..
// //   int *first = new int[length1];
// //   int *second = new int[length2];
// // //  Copying the elements into the vector..
// //   int pointerStart = start;
// //    for(int i = 0; i < length1; ++i){
// //     first[i] = arr[pointerStart++];
// //    }
// //   pointerStart = mid + 1;
// //    for(int i = 0; i < length2; ++i){
// //     second[i] = arr[pointerStart++];
// //    }
// // //  Merge two sorted array logic..
// // int i = 0, j = 0;
// // pointerStart = start;
// // while(i < length1 && j < length2){

// //     if(first[i] < second[j]){
// //           arr[pointerStart++] = first[i++];
// //     }else{
// //         arr[pointerStart++] = second[j++];
// //     }
// // }
// // while(i < length1){
// //     arr[pointerStart++] = first[i++];
// // }
// // while(j < length2){
// //    arr[pointerStart++] = second[j++];
// // }
// // }

// // void mergeSort(int *arr, int start, int end){

// //     //  Base Case..
// //      if(start >= end){
// //         return;
// //      }

// //      int mid = start + (end - start) / 2;
// //      mergeSort(arr, start, mid);         // Left Part Sort..
// //      mergeSort(arr, mid + 1, end);   // Right Part Sort..
// //      merge(arr, start, end);

// // }

// // int main(){

// //   int arr[] = {3,4,2,5,1};
// //   int size = sizeof(arr) / sizeof(arr[0]);

// // cout<<"Before:- ";
// // for(int i = 0;i < size; ++i){
// //     cout<<i[arr]<<" ";
// // }
// // cout<<endl;
// // mergeSort(arr, 0, size - 1);

// // cout<<"After:- ";
// // for(int i = 0; i < size; ++i){
// //     cout<<arr[i]<<" ";
// // }

// // vector<string> vect = {"98", "5", "2", "3"};

// // for(auto element:  vect){
// //     for(char ch: element){

// //     }
// // }

// // int arr[] = {8,7,3,4,2,5,1,6};
// // int size = sizeof(arr) / sizeof(arr[0]);

// // mergeSort(arr, 0, size - 1);
// // }

// // int pointerStart = start;
// //    for(int i = 0; i < length1; ++i){
// //     first[i] = arr[pointerStart++];
// //    }
// //   pointerStart = mid + 1;
// //    for(int i = 0; i < length2; ++i){
// //     second[i] = arr[pointerStart++];
// //    }

// // void merge(int arr[], int start, int end){

// // //  Calculate the mid for calculating the size of the array..
// // int mid = start + (end - start) / 2;

// // //  First Array Length..
// // int length1 = (mid - start) + 1;
// // //  Second Array Length..
// // int length2 = (end - mid);

// // int *first = new int[length1];
// // int *second = new int[length2];

// // //  Copy the value into the new array..
// // int pointerStart = start;
// // for(int i = 0;i < length1; ++i){
// //     first[i] = arr[pointerStart++];
// // }
// // pointerStart = mid + 1;
// // for(int j = 0; j < length2 ; ++j){
// //     second[j] = arr[pointerStart++];
// // }

// // //   Here we have the two ready array for merging..

// // int i = 0;
// // int j = 0;
// // int k = start;
// // while(i < length1 && j < length2){

// // if(first[i] < second[j]){
// //     arr[k++] = first[i++];
// // }else{
// //     arr[k++] = second[j++];
// // }
// // }

// // while(i < length1){
// //     arr[k++] = first[i++];
// // }

// // while(j < length2){
// //     arr[k++] = second[j++];
// // }
// // }

// // void mergeSort(int arr[], int start, int end){
// // //   Base Case for the Recursion Call..
// //  if(start >= end){
// //     return;
// //  }

// // //   Calculate mid for divide the main array into two parts..
// //      int mid = start + (end - start) / 2;      //  Also prevent the overflow condition for the mid variable.

// // //    Sort the left part of the array..
// //      mergeSort(arr, start, mid);
// //     //  Sort the right part of the array..
// //      mergeSort(arr, mid + 1, end);
// //     //   Merge the left part and the right part of the array..
// //      merge(arr, start, end);

// // }

// // int main(){

// // // int arr[] = {12, 11, 13, 5, 6, 7, 25, 22, 64, 34, 90, 88, 76, 45, 43};
// //   int arr[] = {45, 78, 23, 56, 89, 12, 67, 34, 90, 21, 76, 43, 88, 99, 54, 31, 61, 85, 44, 27, 73, 19, 49, 39, 62, 84, 97, 22, 41, 70, 53, 30, 81, 48, 59, 92, 26, 95, 40, 28};
// // int size = sizeof(arr) / sizeof(arr[0]);

// // cout<<"Before Sorting:- ";
// // for(int i = 0; i < size; ++i){
// //     cout<<arr[i]<<" ";
// // }
// // cout<<endl;

// // mergeSort(arr, 0, size - 1);

// // cout<<"After Sorting:- ";
// // for(int i = 0; i < size; ++i){
// //     cout<<arr[i]<<" ";
// // }
// // }

// // int partition(int *arr, int low, int high)
// // {
// //     //  Step 1. Take a pivot element...
// //     int pivotElement = arr[low];
// //     int countElement = 0;

// //     //  Count the element less than the pivotElement..
// //     for (int i = low + 1; i <= high; ++i)
// //     {
// //         if (arr[i] <= pivotElement)
// //         {
// //             ++countElement;
// //         }
// //     }

// //     // store the pivot indexof the pivot element..
// //     int pivotIndex = countElement + low;
// //     swap(arr[pivotIndex], arr[low]);

// //     //     Place the element in left and the right subarray and take two variable for pointing into the first and last element..
// //     int i = low;
// //     int j = high;

// //     while (i < pivotIndex && j > pivotIndex)
// //     {

// //         while (arr[i] <= pivotElement)
// //         {
// //             ++i;
// //         }
// //         while (arr[j] > pivotElement)
// //         {
// //             --j;
// //         }

// //         //     Swap Part for the elements..
// //         if (i < pivotIndex && j > pivotIndex)
// //         {
// //             swap(arr[i++], arr[j--]);
// //         }
// //     }
// //     return pivotIndex;
// // }

// // void quickSort(int *arr, int low, int high)
// // {
// //     //   Base Case for the recursive Call..
// //     if (low >= high)
// //     {
// //         return;
// //     }

// //     //   Find the index of the pivot element..
// //     int p = partition(arr, low, high);

// //     //     Sort the left part of the array...
// //     quickSort(arr, low, p - 1);

// //     //   Sort the right part of the array...
// //     quickSort(arr, p + 1, high);
// // }

// // int main()
// // {

// //     // int arr[] = {12, 11, 13, 5, 6, 7, 25, 22, 64, 34, 90, 88, 76, 45, 43};
// //     int arr[] = {45, 78, 23, 56, 89, 12, 67, 34, 90, 21, 76, 43, 88, 99, 54, 31, 61, 85, 44, 27, 73, 19, 49, 39, 62, 84, 97, 22, 41, 70, 53, 30, 81, 48, 59, 92, 26, 95, 40, 28};
// //     // int arr[] = {3, 1, 4, 5, 2};
// //     int size = sizeof(arr) / sizeof(arr[0]);

// //     cout << "Before Sorting:- ";
// //     for (int i = 0; i < size; ++i)
// //     {
// //         cout << arr[i] << " ";
// //     }
// //     cout << endl;
// //     quickSort(arr, 0, size - 1);
// //     cout << "After Sorting:- ";
// //     for (int i = 0; i < size; ++i)
// //     {
// //         cout << arr[i] << " ";
// //     }
// // }

// // int main()
// // {

// //     // vector<int> arr = {2,7,4};
// //     // // vector<int> arr = {1,2,0,0};
// //     // int k = 181;

// //     // vector<int> store;
// //     // int sum = 0;
// //     // int multiply = 1;
// //     // for (int i = arr.size() - 1, j = 0; i >= 0; --i)
// //     // {
// //     //     // sum = (arr[i] * (int) pow(10, j++)) + sum;
// //     //     sum += (arr[i] * multiply);
// //     //      multiply *= 10;
// //     // }

// //     // //  Add the value of k into the sum..
// //     // sum = sum + k;

// //     // // Now we push the elements form sum into our vector..
// //     // while (sum)
// //     // {
// //     //     int remainder = sum % 10;
// //     //     store.push_back(remainder);
// //     //     sum = sum / 10;
// //     // }

// //     vector<int> bubble = {5,4,3,2,1,7,3,4,1,7,66,4,334,5,1};

// //     for(int i = 0;i < bubble.size(); ++i){
// //         for(int j = 0; j < bubble.size() - 1; ++j){
// //             if(bubble[j] > bubble[j + 1]){
// //                 swap(bubble[j], bubble[j + 1]);
// //             }
// //         }
// //     }

// //  for(auto element: bubble){
// //     cout<<element<<" ";
// //  }
// // }

// // void bubbleSort(int *bubble, int size)
// // {

// //     //     Base Case..
// //     if (size == 1)
// //     {
// //         return;
// //     }

// //     //     Processing Part of the recursion..
// //     int i = 0;
// //     if (bubble[i] > bubble[i + 1])
// //     {
// //         swap(bubble[i], bubble[i + 1]);
// //     }

// //     //  Recursion Call.. for the function..
// //     bubbleSort(bubble + 1, size - 1);
// // }

// // int main()
// // {

// //     int bubble[5] = {5, 4, 3, 2, 1};
// //     int size = 5;

// //     for(int i = 0;i < size; ++i){
// //         bubbleSort(bubble, size);
// //     }

// //     for (int i = 0; i < size; ++i)
// //     {
// //         cout << bubble[i] << " ";
// //     }
// // }

// // int main(){

// // int arr[] = {0,1,0,3,12};
// // int size = 5;

// // for(int i = 1; i < size ; ++i){

// //     int element = arr[i];
// //     int j = i - 1;

// //     while(j >= 0 && element < arr[j]){
// //         arr[j + 1] = arr[j];
// //         --j;
// //     }
// //     arr[j + 1] = element;
// //     }

// //     for(int i = 0;i < size; ++i){
// //         cout<<arr[i]<<" ";
// //     }

// // int first = 0;
// // int second = 1;

// // for(int i = 0;i < size; ++i){

// // if(arr[first] == 0 && arr[second] != 0){
// //     swap(arr[first++], arr[second++]);
// // }else if(arr[first] == 0 && arr[second] == 0){
// //    ++second;
// // }else if(arr[first] != 0 && arr[second] == 0 || arr[first] == 1 && arr[second] == 1){
// // ++first, ++second;
// // }

// // for(int i = 0;i < size; ++i){
// //     cout<<arr[i]<<" ";
// // }
// // cout<<endl;
// // } }

// // int main()
// // {

// //  we need to add two array..
// // int first[] = {1,2,3,4};
// // int firstSize = sizeof(first) / sizeof(first[0]);
// // int second[] = {6};
// // int secondSize = sizeof(second) / sizeof(second[0]);
// // int carry = 0;
// // int i = firstSize - 1, j = secondSize - 1;
// // vector<int> result;
// // //     Logic to add the array..

// // while (i >= 0 || j >= 0 || carry)
// // {
// //     int val1 = 0, val2 = 0;

// //     if (i >= 0)
// //     {
// //         val1 = first[i--];
// //     }
// //     if (j >= 0)
// //     {
// //         val2 = second[j--];
// //     }

// //     int sum = val1 + val2 + carry;
// //     int digit = sum % 10;
// //     result.push_back(digit);
// //     carry = sum / 10;
// //     // if(carry){
// //     //     result.push_back(carry);
// //     // }
// // }

// // while (i >= 0)
// // {
// //     int sum = carry + first[i--];
// //     int digit = sum % 10;
// //     result.push_back(sum);
// //     carry = sum / 10;
// // }

// // while (j >= 0)
// // {
// //     int sum = carry + second[j--];
// //     int digit = sum % 10;
// //     result.push_back(sum);
// //     carry = sum / 10;
// // }
// // if (carry)
// // {
// //     result.push_back(carry);
// // }

// // for (auto element : result)
// // {
// //     cout << element << " ";
// // }

// // }

// // int main(){

// // vector<int> nums = {1,0,1,1,0,1};
// // int count= 0;
// // int maxCount = 0;

// // for(auto element: nums){

// //      if(element){
// //         ++count;
// //         if(count > maxCount){
// //             maxCount = count;
// //         }
// //      }else{
// //         count = 0;
// //      }
// // }

// // cout<<maxCount;
// // }
// // int main()
// // {

// //  Kadane ALgorithm.. Using the C++ and solving the problems..
// // int arr[] = {1,4,3,3,5,5};
// // int size = sizeof(arr) / sizeof(arr[0]);

// //    O(n*n*n) solution..
// // int maxSum = 0;
// // for (int i = 0; i < size; ++i)
// // {
// //     for (int j = i; j < size; ++j)
// //     {

// //         int sum = 0;
// //         for (int k = i; k <= j; ++k)
// //         {

// //             sum += arr[k];
// //         }
// //         maxSum = max(sum, maxSum);
// //     }
// // }

// //   O(n * n) solution for finding the subarray..
// //     int maxSum = 0;
// //     int k = 16;
// //     vector<int> result;
// //     for (int i = 0; i < size; ++i)
// //     {
// //         int sum = 0;
// //         for (int j = i; j < size; ++j)
// //         {
// //             sum += arr[j];
// //             // if (sum > maxSum)
// //             // {
// //             //     maxSum = sum;
// //             // }
// //             if(sum == k){
// //                 maxSum = max(maxSum, j - i + 1);
// //             }
// //         }
// //     }
// // cout<<"The maximum sum of subarray are:- " << maxSum<<endl;

// // cout<<"The number of maximum subarray are:- "<<count;

// //    Solution in O(n) for finding the subarray.. (Kadane Algorithm for this.)

// // int arr[] = {1, 2, 3, 4, 5};
// // int size = sizeof(arr) / sizeof(arr[0]);

// // int sum = 0, maxi = INT_MIN;

// // for(int i = 0; i < size; ++i){
// //     //  First Step is to store the sum of array elements..
// //     sum += arr[i];

// //     //  Second step is to update the maxi element form the sum and maxi;;
// //     maxi = max(maxi, sum);

// //     if(sum < 0){
// //         sum = 0;
// //     }
// // }
// // cout<<"The maximum subarray sum are:- "<<maxi;
// // }

// // int main()
// // {

// //     // int arr[] = {10, 15, -5, 15, -10, 5};
// //     int arr[] = {10, 5, 2, 7, 1, 9};
// //     int size = sizeof(arr) / sizeof(arr[0]);

// //     int currSum = 0, k = 15, start = 0, end = -1;
// //     map<int, int> mpp;

// //     for (int i = 0; i < size; ++i)
// //     {
// //         currSum += arr[i];
// //         //   First Step if the contain the single element..
// //         if (currSum - k == 0)
// //         {
// //             start = end = i;
// //         }
// //         // cout<<"I am chaling";
// //         if (mpp.find(currSum - k) != mpp.end())
// //         {
// //             //  check the prefix sum present into the map or not..
// //             //   if the subarray present into the map entry then return the start and the end pointer..
// //             start = mpp[currSum - k] + 1;
// //             end = i;
// //             cout << start << " " << end << endl;
// //             break;
// //         }
// //         cout << start << " " << end << endl;
// //         //  if no element present into the array and not the single element then simply push the element into the map..
// //         mpp.insert(make_pair(currSum, i));
// //     }

// //     cout << "The subarray are:- " << endl;

// //     for (int i = start; i <= end; ++i)
// //     {
// //         cout << arr[i] << " ";
// //     }
// // }

// //   Maximum Subarray Practivce problem in c++...

// // int main()
// // {

// // int arr[] = {6, 2, -1, 3, 4, -5};
// // int size = sizeof(arr) / sizeof(arr[0]);
// // // vector<vector<int>> result;
// // // pair<vector<vector<int>>, int> myPair;
// //  map<vector<int>, int> mpp;
// //  int maxSum = 0;
// // for (int i = 0; i < size; ++i)
// // {
// //     for (int j = i; j < size; ++j)
// //     {
// //         vector<int> temp;
// //         int sum = 0;
// //         for (int k = i; k <= j; ++k)
// //         {
// //             sum += arr[k];
// //             temp.push_back(arr[k]);
// //         }
// //         maxSum = max(maxSum, sum);
// //         cout<<" { ";
// //         for(auto element: temp){
// //             cout<<element<<" ";
// //         }
// //         cout<<" } ";
// //         cout<<"The sum are:- "<<sum<<endl;
// //     }
// // }

// // cout<<"The maximum sum are:- "<<maxSum<<endl;

// //     for(auto element: mpp){
// //         cout<<"{ ";
// //         cout<<"{ ";
// //         for(auto element2: element.first){
// //               cout<<element2<<" ";
// //         }
// //          cout<<" } ";
// //         cout<<"Sum:- "<<element.second<<" ";
// //         cout<<" } "<<endl;
// //     }
// // }

// // int main()
// // {

// //     int arr[] = {6, 2, -1, 3, 4, -5};
// //     int size = sizeof(arr) / sizeof(arr[0]);
// //     int maxSum = 0;
// //     int minSum = 0;
// //     for (int i = 0; i < size; ++i)
// //     {
// //         int sum = 0;
// //         for (int j = i; j < size; ++j)
// //         {
// //             sum += arr[j];
// //             minSum = min(minSum, sum);
// //             maxSum = max(maxSum, sum);
// //         }
// //     }
// //     cout << "The maximum sum of longest array are:- " << maxSum<<endl;
// //     cout << "The minimum sum of longest array are:- " << minSum;
// // }

// // int main()
// // {

// // int arr[] = {-2,-3,-1,-4};
// // int size = sizeof(arr) / sizeof(arr[0]);
// // int sum = 0;
// // int maxSum = 0;
// //  Kadane Algorithm used to find the maximum or minimum subarray sum under the O(n) time complexity.

// // for (int i = 0; i < size; ++i)
// // {

// //   First Step is to calculate the sum..
// // sum += arr[i];

// //     Second step is to find the maximum element along with the sum..
// // maxSum = max(sum, maxSum);

// //   Third step if the sum is negative then we will assign it to the 0;
// //    if(sum < 0)
// //       sum = 0;
// // }
// // cout<<"The maximum sum are :- "<<maxSum;
// // }

// // int kadane(int *arr, int size){

// //    int sum = 0;
// //    int maxSum = INT_MIN;

// //    for(int i = 0; i < size; ++i){
// //       sum += arr[i];
// //       maxSum = max(sum, maxSum);
// //       if(sum < 0){
// //         sum = 0;
// //       }
// //    }
// // return maxSum;
// // }

// // int main(){

// // //  Finding the maximum subarray sum from the circular array..

// // int arr[] = {4,-4,6,-6,10,-11,12};
// // int size = sizeof(arr) / sizeof(arr[0]);

// // int nonrapSum = 0,wrapSum = 0;

// // //   Find the nonrapSUm from the array means the normal kadane case into the array.
// // nonrapSum = kadane(arr, size);
// // int totalSum =0;
// // for(int i = 0; i < size; ++i){
// //    totalSum += arr[i];
// //    arr[i] = -arr[i];
// // }

// // wrapSum = totalSum - (-kadane(arr, size));

// // cout<<max(wrapSum, nonrapSum);

// // }

// // vector<int> checkPresent(int *arr, int size, int k)
// // {
// //     // int maxSum = INT_MIN;
// //     int minSum = INT_MAX;
// //     for (int i = 0; i < size; ++i)
// //     {
// //         int sum = 0;
// //         for (int j = i; j < size; ++j)
// //         {
// //             sum += arr[j];
// //             if (sum == k)
// //             {
// //                 //  cout<<"{";
// //                 // for(int p = j; p < size; ++p){
// //                 //     cout<<arr[p]<<" ";
// //                 // }
// //                 //  cout<<"}";
// //                 //     cout<<endl;
// //                 minSum = min(minSum, (j - i + 1));
// //             }
// //         }
// //     }
// //       minSum == INT_MAX ? 0: minSum;
// //     cout << "The maximum subarray length of equals to k is:- " << minSum;
// // }

// // int main()
// // {

// //     int arr[] = {10, 15, -5, 15, -10, 5};
// //     int size = sizeof(arr) / sizeof(arr[0]);
// //     int k = 5;

// //     for (auto element : checkPresent(arr, size, k))
// //     {
// //         cout << element << " ";
// //     }
// // }

// // int main()
// // {

// // int arr[] = {7, 1, 5, 3, 6, 4};
// //    int arr[] = {7,6,5,4,3,2,1};
// // int size = sizeof(arr) / sizeof(arr[0]);

// // int minPrice = INT_MAX;
// //     int maxProfit = INT_MIN;

// //     for (int i = 0; i < prices.size(); ++i)
// //     {
// //          for(int j = i + 1; j < prices.size(); ++j){

// //             int diff = prices[j] - prices[i];
// //               if(maxProfit < diff){
// //                  maxProfit = diff;
// //               }

// //          }
// //     }

// //    maxProfit = max(maxProfit, 0);

// //   cout<<"The maximum profit of the stock buy and sell are:- "<<maxProfit;

// // vector<int> nums = {3, 1, -2, -5, 2, -4};
// // int size = nums.size();
// // int result[size];

// // for (int i = 0, positive = 0, negative = 1; i < nums.size() ;)
// // {

// //     if (nums[i] > 0)
// //     {
// //         result[positive] = nums[i++];
// //         positive += 2;
// //     }
// //     else
// //     {
// //         result[negative] = nums[i++];
// //         negative += 2;
// //     }

// // }

// // for (int i = 0; i < size; ++i)
// // {
// //     cout << result[i] << " ";
// // }

// // vector<int> vect = {16, 17, 4, 3, 5, 2};
// // vector<int> result;

// // for(int i = 0; i < vect.size(); ++i){
// //     int leader = true;
// //       for(int j = i + 1 ; j < vect.size() ; ++j){
// //           if(vect[j] > vect[i]){
// //               leader = false;
// //               break;
// //           }
// //       }
// //       if(leader){
// //           result.push_back(vect[i]);
// //       }
// // }
// //     int maxLeader = INT_MIN;
// //     for (int i = vect.size() - 1; i >= 0; --i)
// //     {

// //         if (vect[i] > maxLeader)
// //         {
// //             maxLeader = vect[i];
// //             result.push_back(vect[i]);
// //         }
// //     }

// //    reverse(result.begin(), result.end());

// //     for (auto element : result)
// //     {
// //         cout << element << " ";
// //     }

// // vector<int> arr = {12,28,83,4,25,26,25,2,25,25,25,12};
// // int k = 213;
// // // int maxLen = INT_MAX;
// // int minlen = INT_MAX;
// //  for(int i = 0; i < arr.size(); ++i){
// //     int sum = 0;
// //     for(int j = i;j < arr.size(); ++j){
// //         sum += arr[j];
// //         if(sum >= k){
// //         //  maxLen = max(maxLen, j - i + 1);
// //          minlen = min(minlen, j - i + 1);
// //          break;
// //         }
// //     }
// //  }

// // if(minlen == INT_MAX || minlen < 0){
// //     minlen = 0;
// // }

// // cout<<"The min value is min:- "<<minlen;

// // vector<int> vect = {100, 4, 200, 1, 3, 2};

// // set<int> mySet(vect.begin(), vect.end());

// // int previuosDiff = 0;
// // int maxLength = INT_MAX;

// //  Processing Part of the problem..
// // for (int i = 0; i < mySet.size(); ++i)
// // {

// // }

// // int maxLength = 1;
// // for (int i = 0; i < vect.size(); ++i)
// // {
// //     int element = vect[i];

// //     while (linearSearch(vect, element + 1) == true)
// //     {
// //          ++maxLength;
// //     }
// // }

// // for (auto element : mySet)
// // {
// //     cout << element << " ";
// // }
// // }

// // bool linearSearch(vector<int> vect, int key)
// // {

// //     for (int i = 0; i < vect.size(); ++i)
// //     {

// //         if (key == vect[i])
// //         {
// //             return true;
// //         }
// //     }
// //     return false;
// // }

// // int main()
// // {

// //     vector<int> vect = {0,3,7,2,5,8,4,6,0,1};
// // sort(vect.begin(), vect.end());
// // vector<int> vect = {1,2};
// // int maxLength = 0;

// // for (int i = 0; i < vect.size(); ++i)
// // {
// //     int element = vect[i];
// //     int count = 1;
// //       while(linearSearch(vect, element + 1) == true){
// //         element += 1;
// //         count += 1;
// //       }
// //   maxLength = max(maxLength, count);
// // }

// // cout<<"The maxLength consecutive sequence is :- "<<maxLength;

// // int maxLength = 1;
// // int count = 1;

// // for (int i = 0; i < vect.size() - 1; ++i)
// // {

// //     // if the next element is greater than the previous element..
// //        if(vect[i + 1] == vect[i] + 1){
// //             ++count;
// //        }else{

// //                count = 1;
// //        }
// //        maxLength = max(count, maxLength);
// // }
// // cout<<"The maximum length of the consecutive subsequence:- "<<maxLength;

// //       set<int> mySet(vect.begin(), vect.end());
// //       int count = 1;
// //       int maxLength = 0;

// //       for(int i = 0; i < vect.size(); ++i){
// //         if(mySet.find(vect[i] + 1) != mySet.end()){
// //                ++count;
// //         }
// //         maxLength = max(maxLength, count);
// //       }

// //       cout<<"The maximum length are:- "<<maxLength<<endl;

// //       for(auto element: mySet){
// //         cout<<element<<" ";
// //       }

// // }

// // int main(){
// //    int row = 4;
// //    int col = 4;
// //    int matrix[row][col];

// //    cout<<"Enter the element for the matrix:- "<<endl;

// //     Take an input for the matrix element..
// //    for(int i = 0; i < row; ++i){
// //     for(int j = 0; j < col; ++j){
// //         cin>>matrix[i][j];
// //     }
// //    }

// // //  Print the Values of the matrix..
// //      for(int i = 0; i < row; ++i){
// //         for(int j = 0; j < col; ++j){
// //             cout<<matrix[i][j]<<" ";
// //         }
// //         cout<<endl;
// //      }
// // }

// // int main()
// // {

// // vector<int> arr = {10, 15, -5, 15, -10, 5};
// // vector<int> arr = {1, 2, 3, 7, 5};
// // int maxlength = INT_MAX;
// // vector<int> main;

// // for (int i = 0; i < arr.size(); ++i)
// // {
// //     int sum = 0;
// //     for (int j = i; j < arr.size(); ++j)
// //     {
// //         sum += arr[j];
// //         //   maxSum = max(sum, maxSum);
// //         if (sum > maxSum)
// //         {  main.clear();
// //             maxSum = sum;
// //             for (int p = i; p <= j; ++p)
// //             {
// //                 main.push_back(arr[p]);
// //             }
// //         }
// //     }
// // }

// // for(auto element: main){
// //     cout<<element<<" ";
// // }
// // cout<<endl;
// // cout<<"The maximum length are:- "<<main.size();

// // int k = 12;
// // bool isCheck = false;
// // vector<vector<int>> result;

// // for (int i = 0; i < arr.size(); ++i)
// // {
// //     int sum = 0;
// //     for (int j = i; j < arr.size(); ++j)
// //     {
// //         sum += arr[j];
// //         if (sum == k)
// //         {
// //             // // cout<<i<<" "<<j;
// //             // isCheck = true;
// //             // // break;
// //             // main.clear();
// //             // for (int p = i; p <= j; ++p)
// //             // {
// //             //     main.push_back(arr[p]);
// //             // }
// //             // result.push_back(main);

// //             // maxlength = max(maxlength, j - i + 1);
// //             if (maxlength > (j - i + 1))
// //             {
// //                 maxlength = (j - i + 1);
// //                 main.clear();
// //                 for (int p = i; p <= j; ++p)
// //                 {
// //                     main.push_back(arr[p]);
// //                 }
// //             }
// //         }
// //     }
// // if(isCheck){
// //     break;
// // }
// // }

// // isCheck ? cout << "Present" << endl : cout << "Not Present" << endl;
// //   if(isCheck){
// //     cout<<"Present"<<endl;
// //   }else{
// //     cout<<"Not Present";
// //   }

// // for (auto element : result)
// // {
// //     cout << "{";
// //     for (auto element2 : element)
// //     {
// //         cout << element2 << " ";
// //     }
// //     cout << "}" << endl;
// // }
// //     for(auto element: main){
// //         cout<<element<<" ";
// //     }
// // }

// // int main()
// // {

// // vector<int> arr = {10, 15, -5, 15, -10, 5};
// // vector<int> arr = {5};
// // int currSum = 0;
// // int sum = 5;
// // int start = 0;
// // int end = -1;
// // unordered_map<int, int> myMap;

// // for (int i = 0; i < arr.size(); ++i)
// // {
// //     //   Adding the sum of all elements from the array...
// //     currSum += arr[i];

// //     //  If the array contain only the single element...
// //     if (currSum - sum == 0)
// //     {
// //         start =0, end = i;
// //         break;
// //     }

// //     //  Search if the subarray present into the map..
// //     if (myMap.find(currSum - sum) != myMap.end())
// //     {
// //         // cout<<start<<" "<<end;
// //         start = myMap[currSum - sum] + 1;
// //         end = i;
// //         break;
// //     }

// //     //  store the elements into the map..
// //     myMap[currSum] = i;
// // }

// //  for (int i = start; i <= end; ++i)
// //         {
// //             cout << arr[i] << " ";
// //         }
// //         cout<<endl;

// // vector<int> arr = {1, 1, 0, 1, 1, 0, 0};
// // int target = 0;

// // for (int i = 0; i < arr.size(); ++i)
// // {
// //     if (arr[i] == 0)
// //     {
// //         arr[i] = -1;
// //     }
// // }

// // for (auto element : arr)
// // {
// //     cout << element << " ";
// // }

// // vector<int> main;
// // int maxLength = 0;
// // //  Logic for finding the maximum subarray which sum is equal to 0;

// // for (int i = 0; i < arr.size(); ++i)
// // {
// //     int sum = 0;
// //     for (int j = i; j < arr.size(); ++j)
// //     {
// //         sum += arr[j];

// //         if (sum == target && maxLength < (j - i + 1))
// //         {
// //                 maxLength = (j - i + 1);
// //                 main.clear();
// //                 for (int p = i; p <= j; p++)
// //                 {
// //                     main.push_back(arr[p]);
// //                 }

// //         }
// //     }
// // }

// // for(int i = 0; i < main.size(); ++i){
// //     if(main[i] == -1){
// //         main[i] = 0;
// //     }
// //     cout<<main[i]<<" ";
// // }
// // }

// // int main()
// // {

// //     vector<int> arr = {-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};
// //     // vector<int> arr = {10, 5, 2, 7, 1, 9};
// //     unordered_map<int, int> myMap;
// //     vector<int> result;
// //     int target = 15;
// //     int currSum = 0;
// //     int start = 0;
// //     int end = -1;
// //     int maxLength = INT_MIN;

// //     for (int i = 0; i < arr.size(); ++i)
// //     {
// //         //      First Step..
// //         currSum += arr[i];

// //         if (currSum - target == 0)
// //         {
// //             maxLength = i + 1;
// //         }
// //         if (myMap.find(currSum - target) != myMap.end())
// //         {

// // start = myMap[currSum - target] + 1; // 3
// // end = i;                             //  4

// // if (maxLength < ((end - start) + 1))
// // {
// //     maxLength = (end - start) + 1;
// //     // result.clear();
// //     // for (int p = start; p <= end; ++p)
// //     // {
// //     //     result.push_back(arr[p]);
// //     // }
// // }
// //             maxLength = max(maxLength, i - myMap[currSum - target]);
// //         }
// //         if (myMap.find(currSum) == myMap.end()){
// //         myMap[currSum] = i;
// //         }
// //     }
// //     if (maxLength == INT_MIN && maxLength < 0)
// //     {
// //         maxLength = 0;
// //     }
// //     cout << "The maximum length of the subarray which sum is equal to the given K value:- " << maxLength;
// // }

// // int main()
// // {

// //     vector<int> nums = {12,28,83,4,25,26,25,2,25,25,25,12};
// //     int target = 213;

// //     unordered_map<int, int> myMap;
// //     int minLength = INT_MAX;
// //     int currSum = 0;
// //     int start = 0;
// //     int end = -1;

// //     for (int i = 0; i < nums.size(); ++i)
// //     {
// //         currSum += nums[i];
// //         //    If we traverse a array and found the complete array is the
// //         //    maximum so what would be the case here..
// //         if (currSum == target)
// //         {
// //             // minLength = i + 1;
// //             start = 0, end = i;

// //             if (minLength >= (end - start) + 1)
// //             {
// //                 minLength = (end - start) + 1;
// //             }
// //         }

// //         //   If the
// //         if (myMap.find(currSum - target) != myMap.end())
// //         {
// //             start = myMap[currSum - target] + 1;
// //             end = i;

// //             if (minLength >= (end - start) + 1)
// //             {
// //                 minLength = (end - start) + 1;
// //             }

// //             // minLength = min(minLength, i - myMap[currSum - target]);
// //         }

// //         //  if the element not present into the hashmap.. then simply pushes
// //         //  it..
// //         if (myMap.find(currSum) == myMap.end())
// //         {
// //             myMap[currSum] = i;
// //         }
// //     }

// //     if (minLength == INT_MAX || minLength < 0)
// //     {
// //         minLength = 0;
// //     }
// //     cout<<"The minimal length are:- "<<minLength;
// // }

// // int main()
// // {

// //     // vector<int> main = {2,3,-2,4};
// //     vector<int> main = {-2,0,-1};
// //     // int maxProduct = 1;
// //     int maxProduct = INT_MIN;

// //     for (int i = 0; i < main.size(); ++i)
// //     {
// //         int currProduct = 1;
// //         for (int j = i; j < main.size(); ++j)
// //         {
// //             currProduct *= main[j];
// //             if (currProduct > maxProduct)
// //             {
// //                 maxProduct = currProduct;
// //             }
// //         }
// //     }

// //     cout << "The maximum product of the subarray are:- " << maxProduct;
// // }

// // int main()
// // {

// // vector<int> arr = {1, -3, 2, 3, -4};
// // // vector<int> arr = {2, -5, 1, -4, 3, -2};
// // //   Output is 5;
// // int maxSum = INT_MIN;

// // for (int i = 0; i < arr.size(); ++i)
// // {
// //     int currSum = 0;
// //     for (int j = i; j < arr.size(); ++j)
// //     {
// //         currSum += arr[j];
// //         if (maxSum < abs(currSum))
// //         {
// //             // cout<<abs(currSum)<<endl;
// //             maxSum = abs(currSum);
// //             cout<<maxSum<<endl;
// //         }
// //     }
// // }

// // cout << "The maximum absolute sum are:- " << maxSum;

// // vector<int> nums = {2,3,-2,4};

// // int maxi = INT_MIN;
// // int currProd = 1;

// // for (int i = 0; i < nums.size(); ++i)
// // {
// //     //      First Step of the kadane algorithm...
// //     currProd *= nums[i];

// //     //     Find the maximum element from both of them..
// //     maxi = max(maxi, currProd);
// //     cout<<"The value of maxi are:- "<<maxi<<endl;

// //     // if (currProd < 1)
// //     // {
// //     //     currProd = 1;
// //     // }
// // }

// // cout<<"The maximum subarray product are:- "<<maxi;

// // vector<int> nums = {4,-2,-3,4,1};
// // vector<int> nums = {1,3,3};
// // int k = 2;
// // // vector<vector<int>> result;
// // int maxSum = INT_MIN;
// // int count = 0;

// // for (int i = 0; i < nums.size(); ++i)
// // {
// //      int currSum = 0;
// //     for (int j = i; j < nums.size(); ++j)
// //     {
// //         // currSum += nums[j];
// //         //  if(abs(nums[j] - nums[i]) == k){
// //         //     maxSum = max(maxSum, currSum);
// //         //  }
// //         //    count += (nums[j] - nums[i]);

// //         //      Finding the max and min element..
// //            vector<int> temp;
// //             for(int p = i; p <= j; ++p){
// //                 temp.push_back(nums[p]);
// //             }
// //             count += *(max_element(temp.begin(), temp.end())) - *(min_element(temp.begin(), temp.end()));
// //     }
// // }
// // // cout<<"The maximum sum elements are:- "<<maxSum;
// // cout<<"The maximum count:- "<<count;

// // vector<int> nums = {1, -2, 2, -4};
// // // int k = 3;
// // int maxi = INT_MIN;
// // int currProd = 1;
// // // int currSum = 0;

// // for (int i = 0; i < nums.size(); ++i)
// // {

// //     //    Find the product of each and every element from the array..
// //     currProd *= nums[i];

// //     maxi = max(currProd, maxi);

// // }
// // cout<<"Maxi:- "<<maxi;
// // }

// // int main()
// // {

// // vector<int> nums = {1,-3,2,3,-4};
// // vector<int> nums = {2,-5,1,-4,3,-2};
// // int sum1 = 0;
// //     int sum2 = 0;
// //     int n = nums.size();
// //     int ans = 0;
// //     int ans2 = 0;
// //     for (auto i:nums) {
// //         sum1 += i;
// //         sum2 -= i;
// //         if (sum1 < 0) sum1 = 0;
// //         if (sum2 < 0) sum2 = 0;
// //         // ans = max({ans, sum1, sum2});
// //         ans = max(sum1, ans);
// //         ans2 = max(sum2, ans2);
// //     }

// //    cout<<"The answer are:- "<<max(ans, ans2);
// // }

// // // int main()
// // // {

// //     vector<int> nums = {7890, -9844, 1951, 7162, 3408, 7799, -509, 421, -1580, 6347, -9574, -9756, -9525, 9713, -1406, 4864, 5754, -8917, -2730, 491, 3240, 6514, -8238, -5114, 4745, -816, 4685, -3539, -3414, 837, 1949, 2733, 9215, -9886, 8097, 4345, -8740, -7791, 1418, 5903, -2668, 2619, 742, 7303, 6990, -9223, -5807, -5723, 4090, 653, 2609, -223, 3087, -5355, 1200, 7891, 1731, 146, -4509, 5497, -8403, -743, -8269, -5034, 9917, -9996, -8973, 1242, -4476, 6166, -5231, 7337, -8595, -193, 8269, 4471, 4917, 3989, 5400, 2405, 8698, -5529, -8640, 9745, -3915, -1833, 2404, -455, -7292, 3317, 9849, 5298, -9385, 2217, -1004, -7176, -5357, -6529, 8335, 6110, 3056, 6877, -8073, 4181, 5757, 8619, -855, 8939, -1383, 8219, -2806, 3982, 3244, -3694, -2262, -2672, -1975, 4959, 5185, -60, -4577, 8483, 2969, -2836, 1105, -3588, -1891, 1161, 3086, 5339, 6721, 7051, 3574, 3569, 8638, 3004, -1527, 2694, -2279, -8805, -2606, -2863, -6994, -3988, 9493, -2806, -7105, -8819, 4515, -5580, 5197, 3360, -6488, 6494, 1470, -4255, -5901, -2478, 2406, 4717, -972, -7411, 7860, 7247, -5521, 8311, 3495, 7487, 3716, -305, -9468, 7762, 72, -928, 2146, 1145, 9381, -7330, 5667, 8207, 6249, -2228, 9783, 5032, 3776, 6291, 1553, 3172, 8621, -6221, 4224, 3490, 4250, -7411, -1066, -7919, -6334, -5485, -4388, 2675, -1295, 5856, 4201, 5390, -1647, 3386, 3148, 2942, 1753, -4752, -302, 8442, 8004, -9689, 6719, -3973, 6307, 5746, -9961, -1081, 2663, 1040, 3339, 7007, 8402, 9456, 5903, -3513, 9980, 4764, -3437, 6582, -8598, 2576, -2664, 5398, -1153, 5701, 7635, -9802, 9663, -8846, -9000, -6430, -7337, 4682, -5962, 904, -6622, -2878, 4813, 4178, 4112, -7774, -5543, -2457, 8490, 4719, 3801, 5927, -1224, 4385, -416, 9884, 8714, -6905, 6098, 9620, -7878, -2724, 4531, 7724, -4245, -8832, 3869, -1566, 7987, -584, 9579, -7061, -7026, 4829, -6619, -3899, -2547, -4249, 4940, -5591, -8418, 6849, -3681, 8999, 7604, -1734, -3735, 9711, -833, -3544, 9866, 4978, -4179, 7831, -9568, -1418, 1104, -8355, -8973, 5071, -3939, 4983, 8224, -5025, 2069, -1536, 5493, 7079, -5953, 2261, -8283, -8800, 9221, -1023, -3135, -7532, 8236, -5067, 6808, 1305, -3191, -4866, -5450, 481, -8484, 6631, -9909, 9552, 3973, 5783, 6100, 4309, -5362, 6844, -1505, 8049, -1736, -2739, 905, 2421, 457, -3861, 1659, 3380, -1528, 1802, 8366, -6828, 3752, -1191, -6199, 312, -4991, 9640, 669, -5158, 413, 8899, -973, -2068, -692, 4308, 1201, -3606, 2805, -3161, 7987, 8187, 6507, -2604, -539, 7960, 2381, 2383, -7497, 1750, -385, -8171, 9475, -8210, 4806, -2880, -6255, -5889, 6948, -9867, -1028, -282, 2806, -5039, 2514, 1669, 6016, -673, -5571, 4761, 6315, -8808, 3211, 5436, 8090, -7068, -9776, 1632, 908, -4959, -1470, 3230, -6324, -2412, -2688, 1190, -9715, 8996, -4743, -5051, -7995, 7549, 4828, -6507, 6200, -6500, 6534, 1996, 4680, -6418, 742, 9418, -8455, -5685, 3657, 2700, 9752, -5071, 9599, -2152, 7652, 4270, -6906, 5940, -6620, -8889, 1905, -2250, -3982, 9934, 9477, 2001, 952, 9067, 6988, 2972, 4871, -3782, 4881, 9533, 6064, -4738, -237, 8452, 5110, 2564, 7514, -4444, 5974, 8314, 2767, 7319, -5528, 7246, -1582, 9627, 6016, -2425, 8485, 4485, -9715, -8930, -4508, 1352, 4282, -995, -1043, -4924, 1544, -7906, -8935, 6537, -3172, 4823, -534, -5161, -1057, -5205, 3251, -3106, 535, 4633, 6650, 7467, 6624, 3596, 893, -2052, -3287, -6669, 5831, 5977, -9820, 901, 8222, 4556, -7291, 1377, 4434, -3264, 3790, 8673, 6877, -6615, 3266, -7420, 3236, -6358, -4039, -5018, 101, 881, -6559, -7301, -5592, 250, 3154, -1448, 2819, 7210, 9384, -4085, 9376, 3430, 4802, 4503, 4004, 6686, 8724, 5930, -3351, 5186, -8229, -2763, 5888, -6080, 5547, -9954, -6759, -4953, 4270, -1647, 7974, 1580, 9488, -6018, 2915, 6382, 3259, 359, 1576, -4813, -2648, -7290, -6039, 8203, 488, -7545, 4769, -6066, 6168, -8921, 5527, -2672, -6377, 9810, 3865, 4840, -7924, 7050, 3399, 4673, 3290, -5061, -9356, 3301, 4020, -8764, -9389, 4133, -9390, -7104, 4207, 5551, 3830, -1236, -4180, -5583, 6368, -4503, -669, -3244, 4218, -8080, 3403, -3550, 4650, -5721, -3746, -9601, -6948, 2738, 5134, -2760, -3383, -5563, -4738, -2066, 2055, -5118, -9237, -7139, -8034, 5803, 8951, 3939, -151, 3178, -6024, 9153, -1900, 6770, 1843, -2044, -6986, 841, 3426, -2394, -4748, 8517, -3373, 6898, -6114, -1531, -4664, 7349, 9754, -3120, 5289, 1440, -7352, 1624, -8763, -5767, -9360, -7132, 3347, -4132, 6381, -608, -1836, 3474, -5900, 9188, -8110, -1157, -1192, 1143, -7561, -3695, -7870, 6379, 4436, 5863, 1249, -800, 2240, 6743, 6174, -328, 3256, -6171, -9844, -1452, -7860, 5125, 5934, -2991, 2270, -3675, -1607, 9131, -8353, -4957, -7953, 1228, -7778, 2163, 19, 2672, -779, 1263, 1177, 469, 9338, -6871, -5490, -7076, 7728, 9789, -9655, -1695, 5844, -547, -8367, 6957, -5744, 5471, -5078, -1717, -5456, -1600, -7454, 9686, -7789, -2247, 2706, 2684, 9060, -1370, -3012, -2916, -6863, 6900, -7097, 4902, -4825, -4297, 7595, 8616, -2961, -1230, -105, -5205, -5506, 3090, 5159, -8915, 687, -2172, 6554, 2255, -1993, -3095, -7797, 4685, 9227, 9041, 5584, 8341, 385, -3795, 6580, 5244, 8733, -69, -9113, 7162, 1086, 882, 8561, 9486, 1389, -6119, 7149, -4474, 2604, -5163, 1061, 8739, -6323, 8675, -9537, 9334, -96, 8499, -1450, 1322, 4342, -7954, 5598, -8699, -1929, -957, -763, 3442, 5049, -9847, 5870, -8060, -7255, -6207, -9123, -3552, 8395, -6415, 7830, -7634, -3227, 6549, -4210, 3993, -7833, 8591, -8742, -7128, 630, -9040, -9458, 186, 4399, -4209, 5266, -6514, 1088, 3404, 2967, 6679, 9213, -8582, 6054, -4814, -3680, -9693, 7354, -7246, 1225, -6340, -1234, 5713, 6325, -3943, -2145, -3923, 6238, 210, 9424, 9775, 5461, -200, -6917, -4649, 969, 6738, 2930, 7653, -356, 1336, 3494, -6041, 236, 208, -3656, -8227, -1211, 3425, -2284, -9280, 8224, -6721, -3291, 6432, -1362, 638, 9464, 5039, -1186, 8048, -1830, -9708, 6335, -810, -1610, -6267, -7139, -2102, -3634, 7452, -4884, -6229, -9735, -2197, 5658, 5911, 1357, -6377, -9706, -5989, -6330, 3198, -3689, 6216, 903, -9563, 2239, -4566, 1746, 4820, -3873, -7582, -3810, 678, 7184, 7990, 3142, 9973, -4523, 8341, 2632, 5099, 2307, -7499, -7760, -5441, -1224, -8512, -327, -8297, -2440, 4406, -9164, 5797, 3065, -4195, -4397, -2836, -3557, 8841, 6115, 1218, 3732, -4814, -9976, -8539, -4297, -2317, 6067, -8885, 5071, 7351, -6807, -7370, 2522, 1802, 9352, -4915, 6292, -139, -821, 8815, 5474, 4689, -8399, -6188, 9852, -9834, -6586, 7144, 4775, 4545, 2635, -3883, -7821, -4961, 3754, 1605, -9243, -3223, 6796, 980, -3016, -5792, 9368, -4617, -5845, 747, -2909, 7930, 277, -8215, -705, -4291, -6731, 8836, 6463, -30, -3265, 6872, 1532, -7606, -9234, -7706, -15, 6623, -5768, -7773, 4897, -7445, 2633, -3771, 7244, 4980, 3708, -5177, -8889, -679, 5907, 4388, 9296, 7973, -9649, 3428, 400, 2868, -1377, 141, 6519, 9610, 8584, -8909, 4295, -2628, 1527, 8186, 8119, 2311, -7499, -5220, 5100, -6557, 2441, -1931, 8064, 6287, 4047, -5667, -8663, 5005, -1261, -7114, -6413, 8162, -7850, 7661, 3730, -7405, 5558, -724, -453, -8811, -4385, 2052, -9953, 7098, -3773, -2285, -8950, -833, 8600, -3615, 7012, -4563, -9227, -8966, -8049, -4826, 9149, -743, -2321, 7971, -3568, 6840, -9047, 6470, -4119, -8391, -7271, -4496, -2682, -3285, -9618, 6916, 2645, -1123, 6449, 4848, -5119, 6117, -2343, -5775, 5479, -7518, -3732, 1234, -916, 8394, -3377, 2430, 8857, 1923, -2194, -9968, 1804, 2978, 738, -9355, 1261, 1128, -8329, -5279, 9479, 6636, 7554, 7736, 7161, -7174, -231, 4302, -6063, -7430, 1314, -4549, -6470, -3109, 6775, -6549, -7742, -1996, -6188, -6483, -5293, -650, -5548, -4476, 4730, 3589, 3964, -4488, 9932, -7874, 5727, 8492, -9271, 9260, 2127, 2831, -6819, -1155, 2900, 2807, 1396, 3630, 8424, 4434, 4950, 2151, -1846, -5134, -6581, 1587, 1728, -9212, -202, 7808, 5936, -6385, 4901, -1802, 3864, -6553, 1833, -839, -8896, -8584, -7700, 2246, -2322, -2710, 3397, 6480, 9931, 513, 1266, -6469, -8905, -3802, 8893, -1655, 6819, -4939, -8548, 4259, 8348, 8712, -9094, -8581, -3986, -1773, -8369, -6353, -7774, 1859, -5149, 8017, -434, 4689, 5773, 2253, 2061, -6044, -4449, 1657, -1260, -519, -2642, 83, -4719, -2096, 2739, 7499, -7702, 3356, -5064, 7834, -3939, 6986, -3182, 5176, 6520, -1199, 2483, 1341, 9653, -2285, -993, -6202, -4804, 4177, -2933, 1593, -3928, 7842, -56, -1121, 3502, -4922, 637, -3870, -3739, -9217, 2803, -9134, -8497, 9870, 2697, -2260, -4011, -3630, 3821, -9784, -6570, 1663, 1414, -2920, 6210, 8506, -4381, 8243, 2752, -3850, 6160, 2265, 7002, -4098, -6593, 7202, 5679, 8057, -6252, 6903, 4065, 6759, 3234, -6299, -3044, -5664, -5455, -5981, 3106, -7250, 9931, -1159, -5188, -8784, 1170, -3505, 9926, 7740, -2581, -1467, -1763, -2800, 4137, -5184, -4607, 8892, 4284, -6901, 3569, 3207, -3960, 7440, 6820, 6755, -9043, 8038, 9907, -9664, 531, -7117, 7243, 9926, 7091, -8241, -1873, 7674, 3635, -9191, -6989, -3969, -2260, -4293, -6486, -1915, -8824, 776, -6350, 1210, -8040, -1284, 4603, 559, -7916, 5695, 3667, 8008, 9908, 2234, 1173, 9251, 1829, 1593, 7668, -6807, -5169, 7287, 8976, -2136, 2168, -3949, -7085, -4829, 4674, -9138, -1024, -8756, 82, -7762, -6886, -7928, -3617, -6230, 2479, 7457, 2554, -2637, -2398, -4300, -3217, -8898, -8943, -6331, -1916, 8951, -7187, -8607, -4369, -259, 1622, 1710, 1337, -7716, 1932, -1935, 9357, 4159, 5324, 333, 9829, 520, -1587, 4894, -8777, -2128, 8257, 9643, -449, -6646, -5837, -5428, 848, 9740, 8829, -917, 593, -6972, 8968, -8435, 2276, 6029, -3432, 9310, 9282, -5430, 4678, -1962, -5147, -6585, 2207, 3754, 9620, -1644, -2335, -9016, 9289, -9313, 6756, -4726, -4736, 7300, 806, 579, -8533, -5713, 8652, 8774, 4971, 5757, -115, 8104, 1202, -2433, -5756, -2411, 6858, -6368, -7389, -8517, 9047, 5177, 4476, 8534, -2147, 2309, -2536, 7051, -5413, 3315, 7177, -3317, -1109, -7249, -2851, 113, 6460, -10, 161, -5893, 9474, -3668, -2826, -7329, 7951, -2315, 1293, -6601, 7737, 3241, -8474, -2206, 3694, 5498, -7544, -7263, 8172, -1052, -4234, 241, -6393, -4922, -6008, 2758, -4636, 1549, -8988, -3898, -3453, -7680, -3980, 7664, 7102, -4384, 6054, 6143, -5371, 8574, -6640, -3679, -8050, 8623, 6503, 728, -3524, 2603, 5086, -8989, 9495, 3099, 1270, -380, -7942, 7751, -8587, 4592, 5143, -4159, 6881, -1773, 6653, 1107, 4800, -92, 6600, -8148, -8209, 3518, 1567, -7138, -8137, -5535, -8083, -3606, 3321, 5681, 8623, 7678, -5440, -4060, 1507, -4801, -3408, 9079, 6628, -9622, -5436, 9535, 1461, -1789, 6836, -9779, 6920, 324, -4384, 3997, -8537, 2860, 4415, -4543, -2661, -1815, -743, 5114, 8898, -930, 4947, -8489, -442, -8691, -7192, -9009, -705, 6282, -8262, -3220, 3484, 1265, 3130, 2429, 5140, -7885, 4050, 669, -5427, -3824, 5640, 2709, -5212, 5224, 5920, 7173, -6010, 8008, -4796, 1211, 507, 8954, -196, 9753, 8512, -7375, 6119, -8053, 8391, -4351, -9838, -3337, 6783, -3525, -5946, 6685, -2633, 5406, 1339, -8509, 6138, -7213, 1893, -6756, -3508, -4557, -4845, 7933, 7609, -2734, 681, 7349, 3387, -6722, 2609, 8798, 7491, -6210, -9448, -6693, -182, 4249, -4383, 7709, -9127, -2268, 8219, 8974, 2795, 6440, 1974, -7892, -721, 6997, -7575, -6782, -3486, -3363, -4608, 2618, -8577, -7627, 8637, -2537, -8291, 6551, 7810, 3656, -4754, 5396, 9798, -460, 8658, -8993, -4262, -5880, 2912, 6498, -5095, -9722, 2026, 2070, 7815, -5177, 536, -9460, -193, -7737, 1759, -2276, -3140, -7372, 8694, -4281, -3107, -2042, -8334, -5705, 9433, 9820, 2310, 3593, -6849, 7099, 7600, -857, -5363, 3045, 8900, -4577, -1504, -9295, 6213, 2074, 7950, 9715, 2997, 82, 3195, 2954, 1102, 6653, 4473, 1108, 6879, -5467, 5789, 8910, -942, -7022, -9528, 763, -30, -9857, 1127, -1398, 30, -5148, -347, 3080, 4148, -1708, -8546, -8705, 5362, -7983, -214, 5711, -2201, 4093, 4481, -1272, -6525, -8865, 5299, 7222, 9831, -4878, -7856, 9142, 6185, -9890, -3308, 9890, -7073, -2312, 4857, -9894, 5722, 5181, -446, -1765, -5379, 5971, -1400, 1446, -5296, -8871, 9811, 9166, 9378, -6694, -3569, -1371, 3755, 6756, -8544, -72, -5087, 4616, -4622, -8898, 9094, 9729, -5430, -1580, -5809, 3899, 9553, 8870, 6471, -4250, -4584, -4672, -2804, 9913, -1696, 6312, -6570, -9583, -1450, -2269, -3767, -6092, -7263, 5300, 6108, -5141, 5612, -464, 464, 9307, -1566, -9256, -493, -2780, 4524, -9502, -8687, 3425, 9592, 3410, 8698, 6869, -5862, -5933, 7912, 4897, 9972, -9195, 5176, -8257, -3929, 7618, -5344, -7865, 4190, -5169, 8681, -7486, -217, 2197, -9265, 7620, -7117, -6012, 6143, 9695, 4178, -6521, -4403, -5138, 2717, -7089, -3914, 4351, -2373, 2349, 925, -2090, 6248, 9525, 49, -1079, -5650, 9783, 94, -3038, -4482, -9979, 4984, 271, -944, 978, -4653, -4585, -1441, -5061, -6996, -7273, 7938, -4361, 8506, -9209, 9989, 5398, 3546, 856, -3072, -5456, -7932, 2547, 1295, 3117, 7788, 4144, -6236, -1434, -5116, 5554, -4608, 5569, -3478, 6627, -5370, 8951, -9057, -5099, 3479, 8916, 5090, 8719, 6184, -9001, -6041, 6608, 542, 1841, 8538, 256, -8225, -6969, -1537, -7898, -2060, 2880, -6703, 1113, 6156, -4421, -7802, -5253, -478, -5962, 6989, 9009, -5146, 1264, 4029, -4809, -3647, -1115, -8787, -1744, 3520, 4735, 4426, -5132, 2134, 7409, 7986, 5531, -6541, -8362, -2194, 9723, -834, -396, -4788, 7331, -7860, 3302, 1615, 6182, 4469, -612, -7541, -8575, 1054, 3898, 6759, 6876, 1953, -4236, 6145, -9438, -7283, -8371, 6343, 4763, 1348, -6290, 1383, 5366, 6402, -7817, -2896, -1050, 6444, 7682, 1842, -820, -4574, 1676, 9552, 32, 4829, -4411, -8707, 8761, 3943, -2447, 4586, -1029, -6185, -4813, -7896, 7923, -7465, -4350, 6905, 3829, -3862, -6074, -1036, -9174, -5064, -825, 2515, -6193, -7628, 2397, 141, 3496, 6756, 4424, 335, 166, -580, -2262, 2781, 1324, 5244, -6253, 9548, -1403, 961, 5913, -1791, 131, 4846, -9125, -4027, -6711, -3915, 7125, -5692, 9763, 169, 9911, 6455, -2902, -5132, -8737, 2560, -8728, 5596, -5417, -4196, 8412, -5468, 4728, -8871, 80, -1158, 7494, 289, 1759, -663, -2894, 8626, -6651, 5304, -2984, 8692, -6863, 4725, 7093, -9413, -9541, -4757, -1320, 5874, -9368, -5017, 6146, -5689, 3120, -2972, -7787, -8134, -9600, -7475, 5356, 1124, -7196, 6230, 2292, 6474, 6834, 8356, 7239, 1893, 7170, 1780, 3353, 5169, -7596, 3048, 1073, -7238, -6309, -1481, 4626, 9621, 6211, 7357, -6941, -9657, -7339, -7954, -5729, -5389, -7434, 775, -2656, 6199, -2680, -2237, -9352, -8407, 4248, -5249, 8551, -8202, 6315, -5719, 779, 8752, 188, 4636, -539, 2841, -1625, 9235, 7261, -4610, -9089, -2566, 7788, -4409, -4304, 4787, 574, -8207, -6320, 4883, -2407, 1928, 6580, 4104, -9811, 8290, -1831, -7938, 647, -8222, -3432, 8461, 6088, 5766, -7891, 5573, 6118, -3167, -6153, 61, 4575, -4001, 4608, -4235, -2819, 7703, -1052, 5563, -4726, 8581, 4383, -979, -8653, 6702, 6973, 5332, 4287, 1804, -7415, 5284, 4648, -8775, -2170, -7516, -6982, -410, 8533, 7408, -9620, -947, -8105, 3728, 9889, 3267, -3491, -6901, -8627, -8394, -7223, 6544, -6320, 5319, -2349, -6317, 7728, 5761, 2672, 3417, 7689, 8349, -2048, 9793, -7560, 283, -8828, 9821, -347, 7692, 7547, -4544, -4587, 4367, 6004, -6845, 3211, -9065, 1261, 475, 1154, 227, -7595, 9241, 9250, 7851, -1617, -5298, -251, 4169, -788, -8459, 5107, -7167, -3427, 6416, 1757, 5126, -1405, -5592, 9425, 2373, 813, 1165, -6972, -9211, 498, 4324, -2011, -6940, -2104, 1411, 1297, 6683, 5535, -4345, 1575, 927, -7834, -2469, 4716, -6590, 5291, 511, -6279, 9625, -6777, 5252, -1937, -5761, -9436, 9101, 3353, 3730, 2141, -6402, -25, -6567, -8888, -6711, 8165, 972, -7093, 2472, 2410, -7278, -8534, 4744, 5560, -8450, 6434, 5799, -5067, -6898, 5858, 9379, 5069, -8009, 7725, -5966, -840, 3950, -834, 5254, -9856, -5386, 9437, 1349, -8543, 3325, -8391, -8761, 1916, 5659, 1898, 5913, 1132, 9059, -9346, 1207, 9643, 5155, -3551, -2366, -6705, 4014, -2118, 4336, 3501, -4701, 6729, 1259, 286, 156, -3458, -168, 4649, -3738, 7878, 4730, 8283, 904, -5493, -3260, -179, -5109, -2113, 5674, 1384, 1366, -9993, -8954, -9251, -5032, 8692, 8189, -5756, 1818, -6483, 3466, -3141, 9585, 6785, -7989, 1066, -4629, -7431, 6703, 2133, -6120, 8855, -2440, 138, -7317, 8951, -1791, 3938, -1537, 7944, -4738, -8986, 970, 6860, -4734, 2068, -3815, -130, 3547, -502, -2136, 4302, 9896, 9290, -7327, 5216, 2556, 9361, 1581, -5303, -3053, -7298, 7314, -3619, 1972, 563, 8673, -7853, -9181, 2659, 1605, 7260, -9162, 2146, -9800, -8113, 2830, -2281, 6631, 5369, 8253, -401, -2259, 8385, -4258, -9953, 5982, -7267, 460, 6900, 3416, 857, -5329, -8155, -4043, -7396, 8201, -1761, -1924, -1379, 7787, -4890, 9111, -5405, 4601, 1281, 8547, 944, 297, -1495, 9900, 134, -2624, 4886, 420, 2360, -5930, 9478, 8922, 7975, 550, -1159, -4679, 1701, -157, -9187, -2295, 9839, 9817, -4984, -5201, -9998, -7892, -539, 5194, 906, 969, 6958, 7532, 6880, -9157, -6036, -4467, -7057, 2560, 1640, 5490, 748, 2594, 320, -3434, -138, -5453, -737, -9639, 8911, -4638, -9476, -6069, 1936, 8047, -2903, -596, -9608, -6558, 4595, -7190, -1598, 6830, 1100, -9232, 2850, -5227, -856, -3172, 51, 9792, -5141, -2446, -5000, 3376, 2569, 1023, -3877, -3076, 2686, 3536, -3308, -5399, -3743, 5277, -726, -6467, -4416, -7010, 4671, 5818, 5690, 3604, -2993, -6904, 6066, -306, 661, 2344, 7029, 4928, -4676, -786, 1050, -898, 2490, 1255, 1521, 9009, -4084, -5108, -2597, 7790, 5923, 9305, -7347, -2791, -1619, 8831, 1496, 6796, 4854, 5052, 1407, -8611, -6819, -2582, 1299, 1105, -8498, -1512, -4487, -8069, -3795, 9254, -588, -3308, 1242, 7508, -7117, 4950, -5258, -5488, 1659, 640, 1167, 8796, -7348, 8462, -1528, -9257, 6943, -3916, -8139, -7325, 4468, -6189, 801, -7798, -5644, 6008, 3060, 3619, -396, 2485, 3162, 1258, -7777, -6674, -9853, -1255, -7063, -6477, -4148, 8632, 1746, -9846, 4158, -9972, 5648, -845, -4083, -99, -7171, 8542, -6312, 6362, 2843, 6307, -4103, 2746, -5980, -4691, 2134, -7689, -3789, 5188, 8712, 1190, -9567, 4083, -7395, 4562, -9197, -1358, 3871, 5755, -4523, 3489, -750, 2606, -4655, 6520, -3078, -2857, -8254, 2578, 8441, -9046, 5897, -1261, -5074, 9792, -8582, 3478, 3954, 8330, -1788, 5717, -2073, 8003, -721, -4710, 6946, 876, -5838, -4242, 2382, -8026, -8427, -5769, -6123, 984, -6308, -1769, 3362, -4972, 103, 6120, -6415, -6473, -3667, 9321, -3703, -7806, 5029, -2351, -8045, 5619, 9224, 7632, -1914, 8735, -8829, 8028, 4120, -975, 9335, -3424, -367, 9320, 5288, 380, 3783, -8927, -5066, -7701, -3107, 5704, 6631, -9150, -5927, 817, 3695, 2536, 9051, -378, 4354, -5942, -1185, -4132, 1308, -7375, -2288, -4274, 3295, -3795, -2506, -2865, -7063, -5236, 8591, 162, 6971, -7970, 9301, -1196, 6708, -2071, -444, 2066, -8592, -3226, -3430, -8165, 9053, 8291, 6253, -6527, -8795, 2031, 5525, 1240, -6129, 1001, 5124, -7681, 3191, 9633, -2528, -7406, 9154, 5485, -4562, 723, 5179, 2653, -9453, 4407, -3404, -7155, -5229, 8423, -695, -959, 1911, 9375, -4255, 382, -352, -1795, -1858, -4168, -3640, 7452, -3434, -671, -1786, -6887, 9536, 1851, -7991, -7839, 9468, -8759, 8473, -9911, 7118, 9186, 3391, -2989, -8493, -6976, -3433, -935, 2021, -3457, -2479, -4078, -7714, 9744, -1139, -5866, -3523, 1541, -9895, 3244, -9791, -281, -4392, 5055, 4841, -6712, -9997, -3064, 9693, 8831, 8265, -1719, 364, -1441, 271, 414, -8580, -8467, 7922, -680, 81, 3634, -6440, -7702, -9216, 9518, 140, 9261, 5456, -7715, 8303, -7904, 7328, -4506, -3050, 9560, 3437, -8159, -6038, 6416, 2779, -6720, 6347, -7663, 5644, -4190, -5371, -3540, 8184, -5868, -2060, -6736, 3130, -3541, -2743, 6341, -7775, 2021, -5905, 7623, -2761, 1864, 8491, 2249, -1290, 4444, -7566, 6225, 9434, 3384, 308, 3266, 7023, -3899, -1053, -9558, 176, 797, -578, 4794, -6978, 2647, -2138, -4911, -5716, -1244, -5091, -5614, 620, -1968, 8552, -8782, -9816, 4431, -3929, 5516, 1735, -2224, 9279, 511, 1991, 2372, 1842, -9637, -5604, -3324, 9175, 2878, 1589, 1267, -2579, 5008, 7387, 7522, -9031, 5190, -701, 3006, -6371, 414, -2781, 1524, -4813, 417, 5997, -9437, 6159, 5412, 1637, 9097, -5756, 6249, 2920, 6160, 1018, 2056, 3602, 3424, 651, 8316, -2921, 5249, 1805, 1132, 7444, 8106, -3306, 2106, 6364, -3576, -4975, 6189, 5518, 3818, 4485, 5825, -8748, -4150, -6133, -3618, -5969, -6148, 2661, 3868, -3333, 3822, 1243, 6823, -8947, 607, -3439, -651, 7603, 9679, 4994, -7283, -9352, -4972, 9901, 3237, -7044, 6184, -7476, -1014, 2680, 4686, -5849, 3057, -9980, -7956, 3177, 185, 9398, -777, 4634, -9278, 8217, -5736, 999, -4871, 8501, -8132, 6306, -7054, -9721, -7599, 2337, -7517, 9072, 2365, 8931, -6570, 5692, -756, 7913, -7234, -4193, 8945, 7764, 1461, 8715, -9676, -4663, 5454, 2230, 7263, 759, 1471, -8920, -4601, -9087, 9142, -2740, -2596, 8843, 4556, 5134, 2424, 536, 8371, -5606, -5230, -9939, -9078, -5239, 7862, -8844, -9688, -6448, 5193, 4983, -6478, -366, 7312, 3705, -7355, 6389, 3752, -4718, 195, 9283, 9831, 7903, -2464, -6550, -2734, 2741, -8265, 1589, -172, -2239, -2507, -3833, -3926, 6250, -6735, -3279, 4420, 7582, 9821, 5424, -9183, -8500, 2603, 6198, 527, 7644, -6058, -9586, 1747, 5372, 681, 3335, -9345, -1901, 2227, -4645, -9441, -3005, -2958, 9626, 8315, -4130, 9919, 8681, 6992, -8518, -261, -1413, 8719, -9711, -9470, -1816, -3307, -6375, 1317, 5163, 8009, -7986, 4991, 4008, -3091, 6586, 7636, 7083, 7567, 9717, -9184, -8381, 831, -7812, -3175, -7070, -3493, -3511, -854, 1535, 6208, -6536, 1326, 7082, -2297, -847, 6563, 7194, 4666, -5136, 410, 3663, 1605, -2234, 9404, 5893, 8128, 4945, -7858, 6555, 8833, 9910, -3254, 3071, 8230, 6612, -5375, -7252, 9473, -8428, -3011, -6971, 5242, -1167, -414, 7569, 5551, 5243, 3888, -6751, 1370, 5008, 503, -3156, 5563, -1515, 7495, 1939, 5892, -1196, -2026, -559, 5443, -503, 1573, -2452, 8460, 6165, 6579, -6170, 3241, 9266, -9322, 9494, 9360, 7027, -545, -7410, -4171, -9842, 9481, 6762, 294, -2519, 789, 353, -4555, 1772, -3522, 1575, 8341, -1021, 1720, -1038, 2735, 8172, 7815, -5094, -3104, 8828, 4181, -9899, 4867, -922, 3282, 6770, 9639, 8971, 6316, -4173, 3415, 2679, -9122, 5463, -3586, 5644, 7631, 4628, -4201, -9278, -4614, -9766, 6562, 1168, 8093, 3677, -8432, -6580, -9491, -4502, -1935, -4591, -4101, -7632, -1404, 2704, -5620, -1993, -489, 7932, -2636, -9406, -9134, -9256, -743, -61, -696, 2733, -4213, 4492, -5063, 63, -3113, 2199, -8475, -5350, -8689, 9888, -5660, -7503, 6654, -5390, -4064, -9962, -2290, -366, 2201, 9563, 7930, 363, -1960, 7921, 4263, 2879, -9396, -3753, -1784, -2360, -4592, -4068, 4242, 1229, -1168, 6306, 4953, -6793, -6832, 3796, -5442, -8578, 7387, 2383, -302, -7419, 9355, 8409, 6414, 1540, -9931, 5873, -8457, -3958, -5973, 3427, 6947, 1849, 2720, -398, -5780, 7603, -6274, 347, 7830, -5228, -1932, -6331, -3548, 9157, 2716, 9090, -4440, -1927, -40, 5881, 7696, 5177, -3710, 747, 6473, 9426, 76, 602, 7555, 6623, 4614, -6056, -8265, 6416, -4754, 7570, -749, 152, 4291, 3002, -3771, 1813, -3885, 9096, -1036, 8497, 329, 6504, -2265, -1564, 3675, 923, -4734, -1380, -251, 1516, 2928, 7302, 7117, 4212, 278, 9671, -8254, 9581, 7163, 4575, -1561, -3574, -2271, -215, -2649, -9619, 3591, -5271, -326, 8258, -1909, 2174, 2265, 187, -6178, 950, -1091, -6621, -3986, -4650, 846, -9583, -7083, 9344, 8036, -9619, -9781, 2714, 7752, -5964, -7419, -8722, 8445, -613, 5359, 4371, 1452, -5065, 5138, 2091, -6297, -8960, -634, 2367, 2850, -1620, -6311, 9478, 2230, -1722, -8548, -7485, 73, -7546, 4708, -2130, 8649, 2352, -9132, -7209, -1887, -4094, 1698, 5926, -2969, 5025, 8983, 5743, 4413, -1768, -9230, -6737, 9429, -6332, 8094, 9917, 3321, 6350, 2997, 2614, 4421, 7326, 5572, 485, 6615, -3894, -4977, -6871, -9571, -1461, -9137, -9261, 1413, -451, -8592, 467, 4771, 4801, -2337, 7621, -9644, 3914, -5472, 8448, -3541, 5930, -4582, -1697, 677, 172, -2085, -637, -6459, -6918, -1044, 920, 5615, -8011, 8547, 8478, -1039, -707, 9191, -2875, 2275, -8021, 4957, 8456, -5547, 1469, 4472, -7004, 3315, 2498, 6250, -2178, -8805, -3800, 1615, -1899, -9141, 7945, -239, -6400, 5376, 3869, -4708, -9514, 7468, 4565, 3729, -6134, -4840, -8216, 6295, -8323, -8525, -4949, 6873, -9831, 9540, -3322, 9740, -6368, 6563, -6966, 5843, 1080, 6615, -5358, 440, 2881, -1680, 4995, 6985, -7952, -5455, 4450, -6956, 377, -4459, -2176, -1302, 6378, 8639, -6877, 9703, -8612, 2330, 538, 7827, -9998, 1765, 6065, -4312, 8218, 3150, 3931, 8417, 1214, 9924, -7289, -7822, -7750, -8797, 1850, -6064, 35, 7295, -3825, -6434, -9824, 1232, -233, 3977, -4523, 221, -6441, -2493, 7744, 9650, -4151, -729, 1527, -9720, -8895, -3502, -8517, -4410, -7732, -2611, -9500, -1459, -4057, 5190, -7285, 4010, 189, 9319, -3807, 8245, 3805, 6001, -6965, 5531, 1653, -14, 1011, -6076, 181, -5398, 5676, 5742, -7499, 4351, -9256, -1437, -7485, 6166, 7611, 2204, -8900, -8335, -9935, 1363, -3721, 2350, 7817, -5102, -5521, 9753, 8242, 3460, -9175, 8674, -6926, -1861, -4726, 6060, -334, -314, -711, 1297, 9176, 708, 6911, -8638, -1200, 4029, -651, -5586, 5177, -5014, 9827, 6698, -3836, 7801, 2784, -4021, -5114, -2080, -5346, 447, 8021, 7906, -5374, -1521, -9764, -1650, 9280, -7055, -8889, -7119, -667, 7948, -333, -5765, -3264, 4060, 136, -4158, -5372, -9972, 2166, 5839, 4128, 2434, 6256, 4523, 7325, 8633, -2076, 8895, -8021, -6719, -6217, -2250, -4385, -7942, -1653, -7631, -1524, -7810, 7373, 4007, 9902, -1771, -2506, 5971, -4806, -7728, -6173, -6915, 2108, 4340, -7667, -1157, -2037, -9707, 4516, 9103, 4624, 146, -5340, -6046, 4736, 7764, 6989, -1536, 2303, 7687, -7920, -6257, 8952, -5374, 4852, 342, 3647, -4427, 6157, 6457, 705, 1727, 6909, -7142, 7820, 4248, 4699, -9364, -1642, 103, -4842, 7295, 3732, 4000, 8641, -7502, 1513, -3938, 9930, -1173, 8142, -3876, 4906, -1998, -6580, -330, 9666, -8549, -5570, 3726, 9231, -2943, -4146, 1540, 82, 2375, -6459, 5135, 4570, 476, -4786, -8627, -3451, 779, 4420, 2561, -6120, -9721, -4152, 5510, -6787, 2058, 8335, -9070, -9745, 4581, -5496, 8318, 755, -2753, -1169, -5322, -898, 2725, -6176, 1178, 2531, 8722, -2712, 8487, 2123, 5703, 9258, -7614, 5233, -9596, -1966, 159, 8789, -3664, 8642, -6534, 2369, 3645, 1691, -5582, -4837, 1118, 2505, -9551, 1381, -586, 9404, 2401, -2296, 4780, -7500, 275, -1272, 445, -5774, 5437, -9536, -1060, 7055, -5142, -143, -3340, -3541, 444, 7913, 6830, -8525, 3603, 2659, 6952, 1396, 7665, -8071, 9227, 8864, -4211, -8118, 8049, 4881, -6498, 7984, -7857, 6656, -7913, 7220, -1991, 6883, 439, 5902, 9658, -5957, -573, 8632, 1839, 4638, 1127, -550, 3490, 1913, -4989, 7924, 9311, -797, 3227, -648, 1537, -9657, -2292, -3068, -7129, -9328, -2850, -4197, -8463, -7864, -2125, -8185, -961, -9705, -2119, 7816, -5929, 2149, 53, 8523, -6824, 6306, -7472, -7274, 6083, 6479, 3348, 483, -9760, 8705, 3626, -3822, 33, 1725, 8953, -360, -4377, -4982, 3194, -5146, 2928, 7498, 9490, 1310, -3056, 5263, 6173, 486, 4999, -4960, -1992, 5021, -1634, 1163, -940, -9294, -3920, 8743, 4139, -1175, -812, 5670, -5653, 124, -5429, -7755, 9258, 9808, -935, -5066, 6018, -1661, -2711, -4805, 3583, 9445, -3626, 7909, -9902, 8719, 103, -7884, 1718, 4265, 4552, -5793, -2083, 1610, 9744, 9681, -2518, -4739, 3255, 3034, 9186, 1393, -9586, 6158, 7301, -8528, -4638, 4211, 3012, -4070, 9629, -4749, -393, 2171, 5835, 9405, 6191, -1897, -7749, 5307, -8187, -9537, -4874, -6967, -9725, -8799, -8360, 74, -3220, -1407, 2793, 3318, 8761, -2922, 7069, 1946, -6466, 5267, 7124, 9719, 6967, -9559, -1065, 2501, 3236, 3591, -2691, -6140, 2041, 3074, -7354, 3572, 1614, 5716, 961, -1944, 1217, 1865, 7318, -1333, -5142, -3766, -6349, 9770, 8229, -5197, -6164, -133, 2344, 9772, -1355, 5095, -882, -8410, -8321, 1490, -9938, 9087, 1527, -9772, 8810, -9050, -899, 2071, 8727, -9188, 2824, 973, -9926, 4505, 3333, 6515, -966, 9187, -220, 554, 3371, 7500, 927, 3200, -8092, -6298, 4457, 4568, 1069, -894, -6537, 3665, 2710, 3339, 3068, -9361, -5903, 3890, 5229, 2320, -8098, -6425, 6145, -6568, 2748, 8532, 9161, 3591, 5611, -4086, -3099, 2022, 7484, -3124, 6788, -5967, -8466, 6072, 4794, -4272, -6687, -4714, -8808, -9358, -4431, -7341, 9376, -2893, -8724, 6108, -9000, 5075, -1795, -3683, 4129, -1151, 2621, 3682, 214, -5842, 4784, 9848, 4802, -4205, 5912, 505, 6881, 7988, -9795, -5169, 7826, 7231, 7262, 896, 7410, 244, -7899, 6011, 3683, 5225, 6988, 645, 6810, 6182, -4336, 1276, 1601, -6005, -9636, 9959, 7338, 6828, 9070, -6489, -9722, -1315, 5777, 7302, -9908, 6531, -2634, -699, 4884, -9584, -9003, -9360, -2713, -3950, -9958, -3866, -499, 4081, -3933, -4303, -9647, 5103, 2523, -1899, -4426, -510, 2467, 1339, -4306, -8861, 604, -2107, -8558, -7414, -1306, 3942, 4965, 9630, 5088, 6108, 7676, 3631, 6691, 5017, 4203, -9761, 6611, 5880, 6884, -8609, 3668, 7187, 8272, -8194, -2367, -5213, 8999, -1807, -3210, -1065, 1732, -5114, -6412, 9311, 3638, 8447, 1918, 5566, 3907, 5569, 4597, -4637, -6872, 3728, 1638, -2813, -2351, -7505, -7, -8592, 9058, 7639, 6955, -535, 5975, -8124, 618, 5394, 6687, 451, -3365, -8925, 1668, -8698, -5383, 9083, -2976, -4841, -8452, -6855, 187, 383, -663, -3524, -2088, 8453, 2967, -7125, -7745, 2034, -6112, -5676, 8220, -5637, -5888, -2114, 4234, -3846, -1872, 1586, -4212, -5244, 6121, -505, -5780, 2095, -7346, 4945, -1058, 5631, -2456, -5880, -4142, -9314, -4892, -2357, -9135, -3228, 4498, 7931, 7500, -8181, -8932, -4195, -5922, 9101, 2993, 5762, -3021, 5576, -9441, 4198, -5604, -2701, 1147, -4689, -1245, 5023, -9525, -9493, 1723, 3107, 6912, 1187, 394, -4732, 5200, 5329, 2460, -9880, -3085, -7527, -6299, 887, 3632, 209, -1693, 1354, -8277, -8438, 2445, -1130, -5218, -4555, -4978, 7052, 4837, 8926, -1920, 1260, 6317, 3511, 4530, 8370, -2223, -7737, -127, 3063, -5884, 4683, 7282, -1191, 1637, 9586, 8529, 6438, -2527, -9738, 5855, -2212, 455, 3706, 6470, 5, 7311, -9664, -9827, -9482, -208, -6715, 7687, 9724, 5405, 1874, -3866, 1821, -1048, 1106, 7123, 7147, -5798, 2771, -1605, -6720, -8136, -814, 3875, 7152, 1008, -6234, -9388, 7736, 8044, -3313, 6013, 634, -4624, 4346, -342, 9276, 8069, 9006, 8127, -4940, 8253, 8270, 1605, 1998, 9684, -2160, -8880, 1650, -2546, -9343, -4414, 2867, -6151, -6460, 6215, -586, -871, 6522, 152, -1710, 6404, 3916, 9225, -9114, -9978, 8570, 8781, -665, -8041, 9885, 7200, 8967, 9969, -9617, 6921, -2576, -3038, -9494, 5489, 3091, -5869, -5235, 838, -3783, -7916, 3128, -1015, -600, -4178, -7825, 8348, -5353, -2183, -4098, 4671, -1095, 5146, 6060, -5967, -5920, -9059, 8076, 2135, -2854, -250, -9433, 9619, 1536, -2303, 7776, 7407, 9171, -5267, 3710, -2063, 894, -2720, -7711, 3378, 7482, -9554, -9136, -6158, 515, -6654, -7030, -7344, -7879, -4468, 3525, -4248, -8775, 2933, -9347, 5694, 7034, -2444, 8626, 5453, -9590, -4860, 974, 6093, 5601, 3281, -8644, -7802, 2286, -9588, 2271, 9587, -8053, 8336, -4773, 7685, -3414, -3102, -685, 213, -4734, -466, 6062, 4118, -232, 2371, -8503, 4877, -9647, 8923, 4986, 1303, -9789, -4205, 4738, -4765, -4419, -5322, -1832, -18, 2896, 2526, 2619, 5426, -2283, -609, -8415, -7488, -4543, 7767, -2452, 3043, 5562, 2556, -2832, 1875, 9300, -118, 5365, 630, -8416, -8698, -325, -8556, -2888, 2453, 6179, -5046, -3901, -6059, -3744, 660, -5956, -9095, 9837, 8242, -7163, -6663, 6321, 17, 952, -3218, 3603, -8084, -4555, -8911, 8330, 9401, 5085, -5001, 8143, 6122, -8796, 1470, 9433, -4536, 3708, -977, -390, 6513, 2811, -3017, 7084, -997, 7265, 7492, 3882, 3799, -6832, 633, 4263, 8360, 3291, -2365, -2433, 1762, 6207, -1548, -6739, -5329, -7842, -5128, 67, 6788, 8756, -2723, 7072, -8046, -8057, -2120, -4877, 873, -7477, 9082, 2551, -433, -2133, 1463, 3525, -8901, 4854, -8329, -9281, 3929, -9067, -2502, -5161, -4991, 5438, -4208, 9707, 4908, -232, 4153, -5062, 7838, -4675, 362, 5338, 8940, 3438, -9192, -8197, 822, 1415, 1315, 9955, 6082, 4461, 65, -9730, -7478, 5672, -6246, -7809, -6440, -5992, 1822, 9550, 8257, 8888, 2862, 1281, 7622, -1176, -453, 7114, -580, -1072, -1830, -7298, -7138, 4369, 3990, 976, -9625, 5540, -1097, 2782, 3197, -2052, 8066, 2477, 8922, 8451, 2517, 3760, -3104, -9343, 7328, 6710, 2883, -5875, -5953, 8107, 3755, 8660, 7255, -6492, 7517, -1528, -7202, -1922, -8716, -486, 2713, 2029, -7168, -2043, 4008, 1916, 6329, -5446, -1517, 8736, 5835, -6224, -7555, 4361, 3607, -5432, 2225, -6842, 5555, -4447, -8860, 6849, -1005, 319, 82, -5553, 4602, -4977, -9288, 177, 6152, 3449, 9074, 5101, -1266, -879, -3982, 2431, 8193, -8226, -2727, 4129, 2928, 3012, 5715, 6325, 920, 2223, 3492, 3975, 9437, 53, 6951, -333, -1463, 2463, 9281, 6395, 8164, 2788, 8783, -5598, -3885, 294, -5022, -1637, 6945, -5267, -4446, 9974, -1550, 1019, 74, 5363, 2430, -1367, 8851, 2766, -6595, -5645, -8105, -3611, -8443, -9903, 2649, -4508, -4204, -8368, -6913, 1211, 7585, -151, 3999, 6263, 9121, 5780, 9792, 2076, 7461, 5015, 9889, -8534, 5279, -1354, -8297, -1993, -7742, -5985, 8095, 5707, 4792, 294, -8682, -342, -1248, 1881, -8084, 1316, -7171, 4561, -1216, -1623, -96, 7848, -4495, 7198, 402, -1213, -9509, -7569, -3932, -5785, -5338, -8168, 6290, -4649, -6281, 8090, 9916, -2864, -4581, -4165, 1864, -1209, 2984, 5729, 6159, -9913, -6518, 1050, -6762, 6300, -1503, 1614, 5920, -271, -9438, -5435, -8733, -6669, 4804, 2397, 958, 1214, -1715, -6550, 2778, 8743, -6350, -3234, -4577, 3465, 3230, -6184, 2409, -6758, -284, -8301, -1652, -6888, 5556, -361, -5771, -4351, -8480, 943, -2790, 7522, 4218, 2110, -4000, 6445, 4808, 6401, 1741, 1443, 3452, 6016, 541, -5064, 9108, 7164, 9161, 3017, -403, 6206, -4928, -8419, -5150, -4621, -707, 7124, 3425, -5199, 4751, -4075, -3553, 3860, -8599, 1954, -4060, 728, -2448, 8576, -3986, -1075, -6476, 3878, -2410, 946, 9708, 3834, -1284, -3797, 2365, -8212, 1830, 8015, 7570, 984, 3084, -1230, 1214, -419, 5131, 2230, 3800, -1466, -6068, 9454, -2693, -7767, -8014, -2354, 2053, -8812, -3766, 9279, 2789, 5963, 5731, -3205, 4176, -9025, 3904, 3073, -2756, -3966, 9751, -7199, -8288, -8718, 166, 2495, -9125, 1936, 1551, 2146, -4274, 5188, 5851, 4556, -8105, -4124, -9232, -3802, 991, 2596, 5876, 6, 1362, 3414, -8669, -8170, -4974, 7970, -7570, 1662, 6018, -3729, 5037, -3799, 5830, -4876, 8618, -1227, -3044, -4698, -2127, -7357, 3979, -3023, -8082, -2105, -6611, 1163, 2879, 7281, 5272, -9104, -2160, 1643, 640, -9724, 1865, -5658, -3604, -2805, 7635, -2680, -3678, 8066, -3893, -636, 425, -3266, 4244, 7847, -1540, 3511, -6274, -2440, 3524, -9934, -7383, -7746, 3699, 6517, -4987, -8928, 7098, -9268, -3179, -5677, -8726, 6221, 8430, -5342, 9153, 369, 2128, 2361, -126, 6106, 4250, -1012, -52, -4960, -7828, 2945, -1118, -8241, -8537, 8275, 5565, -6904, -5430, 6202, 8269, 8226, 61, 5200, -8816, 8800, 6008, 3764, 308, 6283, -20, 4847, -9196, 3317, 1835, -6042, -367, -5630, -3009, -4629, 3802, -1792, -6372, 1437, -4884, 733, -8938, -8622, 5545, -8023, -4799, 5554, 3459, 2010, 8308, -9939, -5278, 9207, 7331, -9092, -9188, -1290, -5228, -8883, 4329, -3824, 9712, 8789, -3419, -14, 6794, 5534, -3312, -7379, 6302, 8524, -2414, 3215, 5596, 2076, 6866, 1812, -6812, 1788, -2896, -1117, 6369, 8994, 1745, 5996, 3788, 8293, -9975, -4082, -7568, 8980, -1046, 6412, -2836, -6226, -7724, 1901, -9154, -3227, -511, -2903, 8941, -9494, 4005, -4849, -558, -7769, 220, -1556, 3682, -9916, -7828, 9451, -2101, 9002, 81, 8844, 5491, 1268, 6910, 6269, 4555, 9558, 1563, 7366, -3018, 3234, -6389, 7485, -5954, -2036, -5377, -8850, -7009, 9395, 1194, 5543, -1392, 9886, -7013, -8370, -3983, 3967, 1754, -7036, 6173, 1818, 7749, 6095, 5747, -5358, -7675, 2200, 6885, -7202, 3131, -8017, -24, 5583, -303, -2400, -1378, -5803, -5877, 5178, -5619, 742, -5176, 5635, -3787, 9038, -8387, 7429, 2755, -4784, 7480, 1338, 5571, 7681, -688, -9484, -1021, -940, 4841, -8942, -8264, -7684, 4344, 1348, 2960, -4160, -9785, -4663, -5395, -15, -7027, -496, -2386, -1558, -7753, 9584, -8480, -4680, -5278, 5859, -6982, 3816, 3429, -698, 3718, 2150, -337, 6782, -9475, 8402, 7102, -6768, 1611, -5689, -8778, -2311, 9450, -9965, 9822, -7286, 9119, -4744, -7541, -4936, -7621, -2086, 521, -924, 9331, 2689, 5087, 6180, -9876, -8698, 8608, 3115, -1420, -3052, 6630, 4054, -1769, -6612, -3809, 3436, -6075, 206, -8478, -6723, -8552, 1417, 241, -8545, -3005, 1915, 7076, 8692, -6902, -9486, 9315, -8211, -2275, 3540, 2973, -2548, -6775, -8933, -1807, 7702, 256, -7107, -7336, -4893, -4720, -7193, -9981, -3506, 1984, -9395, 4230, -6574, -9843, 2433, 9886, 3587, -4671, 3063, -1047, 5343, -8156, 5198, 8597, -9950, -4519, 413, 5212, 6360, -7271, 1871, -683, -8942, 9724, -687, -8673, -5088, 4173, 5709, -8258, 8440, -3592, -2245, -861, -588, -2795, -6791, -8387, -2975, -4899, -2120, 7608, -999, 6342, 6035, -6852, -5649, -641, -6667, 5402, 875, 3323, -1130, 4839, -8033, 7921, -3949, -3955, 1106, -7751, -6693, -7406, 1047, 9515, -6466, -910, -9280, -2530, 15, -7700, 2898, 3325, 5650, 6156, -812, -4949, -3636, -3658, 3902, 9753, -9739, -6190, 4915, 8109, -7519, 3220, -6998, -9537, -8812, -6337, -5989, -7820, -3444, -5804, 2149, 2338, -4832, -5325, -3722, 364, 200, 5200, 7360, -5122, 537, 5164, -6742, 6076, -4873, -2869, -201, 5012, 8629, 5768, -8259, 9235, -962, 4576, -1690, 4969, 3081, -9341, 8644, -1122, 6275, 2414, 833, 9829, 9525, -1455, 4083, 6464, 4209, -4712, 7276, -4224, -7873, 1999, 2929, 2483, 8899, -3923, 205, 9546, 5083, -6972, -3211, -8896, 876, 7643, -9234, -9686, -4807, 7381, 1895, -8218, 6129, -9041, 5900, 4174, -200, 4988, -9572, 591, 2918, -2347, 4304, 1812, -9449, -351, -5040, -7818, 9125, 4295, 4107, -4194, 2339, 9612, 7053, 9781, -284, -3206, 6360, 8979, -533, 6455, -7258, 316, 4260, -751, 5952, 3382, -7312, -9026, -2083, 5658, -8826, -9104, -2076, -917, 4499, -3914, 1223, 8819, -4986, -9125, 5930, 5582, -5827, -7484, 3647, -7200, 7717, -9827, 154, 7322, -9907, -794, -2888, 8856, -8627, 5813, -1519, 7935, -1180, -8635, 6821, -5860, 6812, -9421, 5777, -8621, -8422, 1357, -909, 9029, -7060, -8534, 6125, -2079, -1401, 5681, 5465, 3655, 5737, -4990, 6528, -4596, -8614, -1855, -2872, 1403, -4553, 1873, -7768, -4655, 5050, 612, -3721, -3085, 3636, -109, -6180, 4959, -1749, -8309, -5567, 5724, 6900, -1391, 8453, -8020, 9455, -5140, -3711, -4565, 9765, 4839, 6484, -8051, 8854, -7189, 2461, 8606, 5087, -6937, -2391, 29, 9981, -7045, 5814, 3276, -9221, -1246, -9053, 6938, -9872, -2627, -3622, -4975, 475, -4905, 1791, 4350, 8002, -6186, 9905, 9236, 5356, 7854, -2738, -8087, 9823, 6488, 8176, -3597, 5010, -9765, -54, 2868, 3464, -6412, 3772, -6142, -312, -1785, 2212, -6367, -7814, 9892, 3837, -8949, 8198, -148, -5552, -9474, 8770, -6558, 7930, 6893, -2928, -7612, -5304, -7136, 2337, 10000, 8917, 6474, -6364, -7637, 6082, 619, -9295, 4312, -3039, 4284, 2107, 9108, 163, -9159, 4730, 1785, -6752, 7753, -9461, -3085, -248, -5162, -7024, -5815, 3663, 9011, 2656, -8854, 4258, -8181, 52, -2843, -4864, -3272, -509, -9905, 3587, -3097, 1098, 2881, -8515, 5635, 4777, 8178, 6850, -4438, -3348, -121, 2404, 1023, -6117, 8509, -2702, 1329, -9359, 9014, 1137, 3673, -9186, 3583, 4841, 1515, 9483, -9264, 6392, 4083, -381, -6771, 1262, 5266, -9460, 2456, -6408, 2040, -3890, 8163, -6571, -8000, -32, -5652, -6637, 2929, 6234, 2586, 9732, -1246, 191, 1364, -1888, -3208, -6471, -556, 8243, -9628, 9578, 8101, -1832, -29, 1387, 7624, 8181, -1580, 3237, 6026, 3293, -7499, 4698, 3559, -4754, -902, 8793, 6709, 1407, -9061, 3575, -3101, 2889, 8306, -1055, -3055, -1052, 7327, 833, -3027, 7379, -1280, -2529, -3347, 9933, -5764, -3362, 1051, 9310, 8824, 3754, 2543, -3739, 1704, 269, 8827, -6356, -6328, 2692, 3192, 2388, -2326, 9678, 8154, -9334, -2396, 627, 8573, 5279, -3703, 5029, -1481, 558, 9197, -5182, -7685, 8827, 2130, 6292, 1824, -3588, -7331, 7839, 1280, 3414, 307, -9156, -5349, -2527, -3351, 2811, 1851, -208, -2948, -3191, 8290, -5981, -3104, -6458, -4530, 2818, 3541, -6279, -2124, 8909, -193, 4406, -2022, -2346, 6491, -8688, 2252, -718, -1554, -8984, -9586, -3133, -3676, -8164, -3546, -7259, -5913, 3840, 4990, -6425, 5604, 2561, 6507, -6348, -8190, -7291, 8343, 9635, 8671, 8000, -6631, -5990, 822, 3503, 924, -1084, -8467, 7480, -4137, 452, -3496, 5870, -8803, -1122, -5409, 2141, 7241, -1081, 4870, -8786, -4648, 9366, 1732, 8906, -2386, -228, -1970, -7694, -3341, -2210, 5408, -9390, -3704, -6465, 4619, -7588, -3464, -3217, 1771, 6936, -1539, 5768, -9186, 3641, -3844, -35, 1036, -6790, -3065, 4753, -4401, -6505, 433, 4140, 6472, 7726, 7518, 9967, 2575, 9841, 2502, -1251, 8369, 6723, 1548, 6366, 4931, -4946, 1330, 4556, 2228, -297, -4015, 9449, 8574, -6664, -520, -2094, -7922, -9210, 4190, 1957, -646, -6426, 9018, -1620, 518, -2146, -31, -9923, 42, 1429, -7463, 1457, 7611, -5302, -2260, -2220, -7236, 6923, 2863, -5731, -8740, -9716, -3780, 5287, 3854, -1851, -6868, 2105, -7312, -8066, 7367, 3126, 6462, -4361, -6973, 5698, -5184, 499, 8096, -5228, 2461, -188, -4454, -9721, 5382, -9303, 791, 4152, 5329, 416, -7995, -7164, -4513, -5620, -4801, 8986, -9846, -9699, 3194, 4425, 4471, 4532, -6764, 1030, -9924, -6121, 1110, 6299, 2374, 195, -4548, 7684, -196, -2720, 1966, -1183, 8057, -7659, -8914, 2972, -4032, 9426, -8429, 54, -1636, 2044, 7591, -7515, -961, 3204, -3005, -1472, 121, 2257, -8295, -5629, -8784, 464, 9317, 8678, -8934, 9069, 9184, -9980, -9867, -5536, 1515, 6919, 3054, -5589, -5504, -2499, 8597, -3322, 4101, 175, -5789, -8016, -7308, -7922, 1507, 483, -2769, -9978, -7034, 901, -2109, 7713, -1264, 4698, -3721, 4536, -5829, -7420, 7919, 6283, 8188, 2071, 2696, 4684, 3419, -1556, -4758, 7040, 2009, -4898, -8843, -9130, 9398, -4847, -2286, -6890, 2099, -2313, -3110, -9322, 7088, 521, -9459, 7480, -9453, -9465, -7075, -5081, -3612, 1914, 9006, 2152, -6371, -5261, -685, 8513, 8902, 4118, 7865, -7579, -9957, 5602, 1453, -8802, -7597, 5003, -2221, 7941, 7769, -5599, -6173, -3118, 1431, -1872, 7613, -4474, -1566, 3852, -5522, -5320, 7050, 9163, 7322, -6535, -2289, 5940, -1109, 6142, -9066, 8172, -7060, -9279, -9037, 7105, -1071, 8955, 3541, -9320, 482, -4341, -9399, -4, -6537, 465, -1438, -5985, -2436, -1021, -5336, -2534, 3902, -9594, 8486, 2138, -8797, -8230, 6573, -6750, 4593, -7993, -5114, 7438, 7549, -7769, -1177, -4913, -8800, -7478, -9786, 1451, 8635, -7755, -2732, -697, 6209, -646, 6980, -4604, 3571, -6331, -6982, -4133, -3598, 5673, -4438, 3706, -6390, -4127, -5969, 7652, -2487, -2645, 3307, -2391, -4263, 7409, 1521, -4594, -6304, 1679, 658, 7684, 3502, 1870, -3984, -2180, 7799, 3960, -9425, -7107, -6482, -8143, -1457, -9119, 8730, 6886, 4893, -6607, 180, -8525, -596, 164, 363, -8471, -690, 2618, 8352, 9145, 2216, -2817, 7820, 5773, -1248, 4920, -8425, -8970, -256, -5030, 8437, -5612, -2355, 9336, -4734, 3599, 3136, 109, -5641, 3258, -5650, 7427, -1485, -8776, 4304, 4020, 1740, 6181, 2613, 163, 2685, -6386, -359, -8344, -259, -2874, 6802, -1620, -7582, 8885, 7488, -4986, 1137, -9185, 2611, -1077, 3732, -9630, -1706, -2602, -2280, 5333, 5259, 3692, 1200, -1238, 9358, 5196, -5711, -5623, -7504, 9964, -6201, -6464, -6951, -3291, -6388, -8738, 7626, 3034, 6580, -7495, 8026, -9852, -5108, 184, 421, -1335, -8425, -2953, 7452, 6940, 9331, -7880, -9625, 1664, 5186, 1536, -2485, 1113, 6971, -4580, -9138, 2202, 1834, 2751, -3908, 2829, 4786, 2315, 3675, -9649, -7325, -3760, 8131, -7959, 1402, 9724, 594, -7038, 3568, 5186, 7826, -5050, -1651, 9612, 7342, -9829, -7499, -9515, -1066, -9299, -7518, 7881, 6054, 6600, -3832, -666, 3875, -293, -5215, 8650, 1347, 6595, 5895, 688, 863, 7560, -3044, -5572, 148, 2001, 2800, -4994, 30, -6096, -1277, -8964, 9276, -2822, 3424, 4273, 1825, 3525, 356, 7620, -2272, -411, 9748, -7865, 175, 3523, -4506, 6202, -8050, 5046, 8347, -6446, 4926, -2127, -5050, 4536, 9090, 1581, 6425, 5271, 2311, -7501, -2920, 6466, 2934, -2169, 7835, 501, -3098, -529, 6802, -8392, -6542, -8769, 212, 4580, -1046, -8234, 7192, 6986, -2327, -9206, -3183, 2006, -229, 2668, 2267, -5689, 7204, 6769, 8961, -3754, 9624, 3355, 2702, -5010, -3885, 2816, -2677, 5959, 5169, 5297, -225, -2768, 6639, 6390, 8141, -3286, -8316, -8660, 1792, 3550, 2336, 1259, -6840, 6920, -182, 4416, -1982, 2878, -1230, -5341, 915, -3693, 9746, -4792, -4106, 7663, -356, 4512, -355, 1883, 7885, 4135, 8437, -9801, -6396, -3106, -8585, -9113, 514, -8954, 8940, 4099, -4155, -3032, 2405, 3465, 3432, 4724, 787, 5023, 829, 3984, -8852, 7163, 3518, 2808, 5466, 581, -3929, 9528, -9941, -9801, -9132, -5099, 4827, -3888, -2662, -7393, -914, 483, 9291, -2844, 1250, 2787, 1904, 7034, -9604, -6002, 6487, -7237, -177, 62, 3240, -3820, -4376, 2632, 2859, -2232, 8047, 9505, -5095, -5730, 9320, 8961, 747, -6734, -8448, 1521, -5660, -7121, -6685, 1485, 7433, -5579, -3551, -4971, -3339, 8931, -1481, 1193, 2000, -3368, -8738, -6009, 5591, -3020, -7672, 6606, 6343, -1602, -818, 8544, 9381, 3133, -543, 5407, 4949, -3817, 9364, -7096, -9413, -3422, 5283, 5671, -5595, -3360, -9506, 6362, 6129, -3846, -4593, -8296, 7456, -7610, -3460, -5116, -8609, 4397, 8408, -722, 7156, -7444, 9834, -9006, -9722, 7266, -3668, 8322, -5835, -8962, -7381, 268, -610, -8077, 7253, 1283, -3451, -7349, 8202, -3942, 3998, 3598, 3900, -3314, -3389, -560, -4055, 6332, 5581, -1537, -2670, -2111, -7777, -5086, -980, -5686, -8379, -8820, 3436, 8441, -8398, 4570, 1876, 8021, -5547, 6476, -5345, 4447, -8373, -50, 8, -8886, -3661, -6595, -5812, 7279, -9460, 4133, 4737, 2082, 4561, 1827, -2946, -5125, -9038, 4026, 3811, -955, -9540, 5771, 2381, 7559, -4763, 2522, -116, -685, 2876, 772, -9355, 9968, -8137, -3291, -1487, 6525, -6147, -9490, 4558, 7187, 8093, 1347, 6872, 4329, -12, -7313, -1221, 5326, -4377, -1848, 1085, 3559, 1574, 164, 5248, 6112, -5959, -4310, -4449, -1968, -9124, 9224, -7155, 1243, -8619, 7815, 6851, -3487, 4147, -5486, -2790, 4711, 5367, -6407, -5972, 4869, 6746, 467, -6343, -9412, -4991, -5548, -5941, -3293, -626, -3209, 187, -8461, -2840, -9148, 5206, 6850, -5367, -4853, 788, -9531, 5757, -2465, 7349, -3134, 6105, -6005, 3470, 4745, 3892, 6575, 3108, 209, 4688, 8962, -6950, -8425, 885, -4781, 4114, 3287, -6488, 7374, -6718, 430, 5603, -7240, -3179, -8957, -6090, -9291, 392, 3806, 3105, 668, -6091, -7690, -2588, 3561, 6014, -7067, -2763, -2236, 9112, -8834, -6359, 9264, -435, -7012, 3110, 8460, 2792, -6162, 6890, -8657, -6821, -8879, -9493, 1916, -441, -7983, 9740, 1284, 406, -5410, -3295, 8314, 8736, 4517, -3347, -9144, -6407, 5874, 2486, 5549, -1443, -9600, 9438, -1758, 4916, 156, 7517, 5126, -1603, -6959, -3300, 5016, 7845, 6592, -2602, -5625, 6262, 9437, 1073, -7977, -1733, -1606, -8178, 8798, 354, 8620, -5984, 1238, -3177, -2995, 2241, -8968, 1627, -5451, -6414, 5767, -9601, -5228, 976, 2996, 625, -1974, 6411, 1404, -3497, 7023, 8121, 4258, 4125, -419, 5272, -6957, -4737, -3883, -761, -9040, 2511, -121, 3672, -8898, 870, -7594, -5426, 6257, -7228, 1777, 2007, -3327, 4957, -7370, 6169, 6496, 4446, -1024, -5428, 393, -5281, -7730, 9309, 1829, -5426, -8450, 3450, 483, -2773, 5585, 4032, -9259, -293, -9128, -6069, 7351, -9975, -8551, 8230, 5193, -234, -4759, -6151, -4181, -1863, 4041, -4429, 1624, -9104, -9569, 4575, 639, 3989, -9786, -5649, -5851, -430, 4749, -5437, 1409, 8193, 8541, 9987, 5126, -6707, 2251, -1004, -646, 8536, -6109, 8218, 506, 6588, 6685, -5286, 9691, -173, -2181, -8260, -4179, 9036, 2402, 652, 8968, 4975, 4578, 8633, -2478, 4240, 2210, 4851, -5704, -8070, 3862, 9255, -7053, 1375, 8713, -7248, 8040, -4433, -403, -1157, 5932, 56, 2240, 6230, 6168, -2151, -6655, -6323, -181, -6974, 6772, -2138, 9126, 8600, -420, 8154, 1796, -2067, 1503, -3125, -1782, 9834, 904, 9361, 717, -351, -9337, 1136, -5291, 351, -5828, 1764, -9143, 2053, -9609, 4372, 2944, 939, -7806, 6953, 4150, -3865, -681, 9335, 2561, 3904, 2192, -2788, -5921, 2359, -6990, -665, 4113, -1930, -98, 7108, 8007, -5814, 7796, 3231, -6745, -8857, 3051, -4954, 4824, 4913, -4797, -3492, 724, -3548, 6431, -5144, 4041, 5374, 767, -5773, -6261, 9193, 5665, -40, -411, -8894, 1177, -5504, -2309, -4642, 5822, 2020, -7898, 4130, -8105, 499, -2590, -9599, -226, 6547, -663, 4371, -7188, 7922, -6371, 570, 202, 9294, -9624, 67, -760, 3303, -2553, 7752, 9029, 4812, 7410, -3108, 1830, 8660, -6189, -7535, -3239, 6816, 2131, 4347, -4779, -7522, 903, -6703, 8787, 3313, -4211, 7482, 7060, -7830, -9099, 6976, -5511, 4420, 2308, -2071, 109, -7301, -1363, -1896, -8643, -4474, -7191, 1272, 6547, 8234, -201, 705, 7619, 6066, 6735, -7190, -281, 9325, -8081, -2606, 3045, 6630, -9891, -7158, 5287, 5653, -1380, -1974, 6145, 5151, -3043, -6284, -1198, -5590, 3267, 3016, -5350, 4784, 7537, 4751, -5642, 1164, -9530, -6084, 4433, 2151, 4739, -1812, 7173, -7796, -186, -8324, 7531, 4067, 4107, -1759, -9870, -1544, -147, -3055, -991, -1284, 1889, -5523, 1837, -5866, 410, -5798, -7480, -609, 6026, 4178, -6749, 5531, -238, 5114, 7862, 8554, -9536, -7443, 2736, -3535, 4329, -6344, -9151, -3153, 76, 8276, 8028, 6403, -8990, -717, 8420, -8038, -5162, 2982, -1762, 8472, -9760, 2449, 3001, -5001, 1672, -3845, 6090, 4880, 5329, 8526, 573, -2055, -5585, -4249, -4355, 2644, -7675, -7547, -79, -7682, -3048, -8296, -7853, -4211, -9474, -167, -6286, 8489, -9901, -2343, -4365, 9450, 3310, -199, 5221, -8443, 7604, -3578, -5986, 4478, -2013, 9514, 3145, -2769, -523, -5682, -617, -9592, 7186, 9286, 6577, -8404, 4237, -3945, 5633, 8365, 1900, -3485, 1720, -6293, 1212, 8988, 5554, -4586, -3373, -7981, -793, -6007, -5290, -2367, 3471, 6190, -9613, -8777, -6937, 2401, -7176, -5720, 8495, 6973, 9847, 7432, 1582, -9088, 9437, -6318, 3044, -2835, -5381, 3937, 5955, 589, 2987, 3924, 3511, 57, 9230, 7215, -1960, -5589, -4662, 6399, -6773, -4039, -5496, 2676, 7068, 5792, 136, -3156, 3915, -9033, 1940, -8410, 5802, -4805, -2303, -8850, -5556, -3155, -1526, -2980, 5708, -7420, 164, 5965, -7839, 643, 9041, 8785, 7993, -1972, 1133, 6327, -2623, 6214, -4195, -3427, -7828, 1322, -443, -2553, -3562, -1315, -7423, 6416, -5627, 1189, 882, 1270, 7031, 9725, -5489, 5226, -2777, -7328, -5762, -2830, 6574, 6932, 144, -2006, 6384, 9502, -7487, -9497, -7558, 8995, 9222, -3202, 3130, 2069, -5980, 8702, 8594, -8323, 2401, -3025, -6478, 6036, 2702, 4105, 3596, -6899, -2226, -591, -1562, 1779, 9084, 1440, 4309, 483, 8577, 705, -8782, -82, 8364, 7049, -103, 6869, 6616, 7035, 5545, -9526, -6740, -6727, -9889, -488, -1368, 2505, -6032, 6200, -1430, -337, 2820, -1591, 1256, -8264, -5853, -2523, -5652, 9301, -3120, -4564, -1432, -6160, 283, 1678, -9767, 7490, 2426, 1706, -1219, 1238, 4170, 9545, -950, -4243, -7463, -4614, 3776, 3769, 5361, -7980, -971, -2209, -6745, -1071, 3411, -5389, -9074, 8250, -8892, -4240, -4043, -8375, 1635, 6166, 607, 7106, -9271, 9172, -8720, -4848, 6434, 602, 4452, -7807, -3469, 6390, 1145, 1907, -1781, 8506, 1952, 6085, -9968, 252, 3404, -5189, 8897, -2532, 9110, 2688, 5613, -939, 5176, 3063, -5480, 9584, -6717, -9768, -8470, 3787, 4495, -6059, -9743, -40, -7980, -2324, 81, -1458, 1156, 6469, -6993, -4736, 9085, -2558, -1510, -8051, -2353, 3589, 688, 1423, 7051, 8016, 4343, 1253, -3360, 3158, -4325, 4785, -3445, 590, -5068, -1092, -6176, -763, -4003, -8830, 7975, 1176, -8940, 3601, -9733, -3274, 5132, 2442, 7027, -7356, 4172, 7059, 3868, 4820, -7927, -8701, 6304, 9801, 8567, -3402, 6746, 1303, -5095, 2872, 7939, 4119, 9601, 9801, 8509, -4156, 8878, -7766, -2626, -4651, -4436, 5718, -2486, 7889, 4951, 743, -7718, -5859, 2291, -291, -743, -296, -6134, 8391, 4554, -4032, 5062, -930, -4589, -9240, 8205, 1233, 4361, 9012, -3314, 1667, -6111, -8298, -8229, 4628, 3694, -6046, 9458, 2091, 7407, 771, -1041, -4555, -6856, -1913, -846, 13, -7266, 9086, 7462, -3252, 8561, -7409, -3678, -9199, -6467, 361, 4082, 5409, 2873, 4487, -8325, 7271, -2306, 5984, -8145, -8845, 6061, -4777, -6660, -9211, 3078, -387, 1083, 7954, -7006, 675, 7886, -3370, 6925, 9296, -7675, 1621, -185, -3329, -7856, -8339, -1337, 1628, 9969, 9780, -6599, -2999, -194, -8335, -8616, 2751, -4989, 8482, 3781, -8846, 4674, -7249, 5316, -4201, -5582, 4120, 8350, -5836, 3546, -6954, 4828, -8908, -9924, 1707, 865, 980, 5044, 1103, 9665, -2028, -1595, 3712, -5740, 8016, 827, 6001, -1804, 625, 432, -3259, 6632, -4302, -4438, 6386, 4405, -2189, -2299, 7115, -3042, -2668, 5752, 2167, 7638, -6797, -1443, 3079, -6488, -9140, -3507, 1688, -2174, 3419, 8386, 2146, -9795, -304, 9378, -2436, -6679, 9209, 6318, -4755, 3515, -751, 2724, -41, -2736, -8490, 3984, 6531, -1207, -2874, -3639, 2411, 1772, -6251, -8773, 9237, 8391, -6763, 2747, -972, 2658, -7357, 6681, 1941, 7850, 3064, -4663, -324, 3612, 7523, 1872, -2093, -6355, -4517, -4857, -42, 4823, 7026, -2547, 5494, -777, 1366, 3447, 7850, 9981, 5770, 4868, 1746, 4549, 6407, -2183, 6644, -3503, 1930, -2424, -9124, 7554, 2541, -7645, 9434, -1911, -2388, -2540, -5355, -2206, 4280, 6344, 8936, 4568, -4322, 2313, -6957, -4948, 2564, -5539, 5988, 8794, -1533, 8882, 936, 669, -762, 1742, -102, -7171, 4110, 2970, -6170, -9403, 7228, -3107, 7371, 4158, -9546, 7632, 1463, -6429, 1008, -5594, -2844, -7873, 813, -1275, -7056, 6075, 609, -4653, 8965, -8215, -6509, 9149, 5495, 8723, -9998, -5106, 9510, -5124, -6554, -8175, 7519, -1453, -4074, -8419, -8720, 6128, -5407, 1543, 8810, -1095, -1161, -6651, 3591, -4056, 7390, -8393, 6849, -505, 3555, -9509, 7028, -662, 1512, -6465, -1488, 8835, -5323, 39, 8782, -1684, 7361, 1755, -8587, 39, -4165, -5301, -9379, -3045, -7607, -5666, 735, -5934, -7836, 8258, -4, -3509, 1254, 4767, 1976, 7435, -1252, -9501, 3740, 1641, -1314, -9167, 2679, -5800, 8231, -7679, 3149, 5873, 7722, -5669, 4521, 4969, -7715, 1585, 5801, 4818, -5793, 9560, -2568, -5467, -5862, 5909, -1813, 654, 7854, -8847, -2678, -5856, -5038, -6577, -3585, -278, 5626, 5388, -1752, -2782, -3409, -6369, -2179, -4621, 6056, 9246, 5750, 4486, 3628, -2128, 2822, 749, -2891, 8868, 7546, 112, 7685, -3762, 5384, 982, -6839, -8770, -8158, -5451, 2593, -6296, 9900, 3280, -868, -3965, 758, 1690, 4273, 8491, -5322, 8812, -8963, 3773, -2073, 4513, -5569, 9190, 2493, 5722, -7698, 2262, -5303, 2820, -3562, -1402, 8103, -7554, -2475, 5679, -6091, -9394, 4249, -5802, 7641, -7331, 2900, 5942, 9402, 6270, 3999, -6254, 2606, 2115, 7654, -1914, -3555, 9802, -8832, -8883, 1092, -3568, 1252, -73, -7596, -100, 4293, -6779, 2455, 828, -4401, 4720, 5140, 5840, -35, -8588, -3335, -1945, 2512, 3653, -9586, -7114, 5277, -6223, 6947, -4123, -3286, -2222, -7583, -7171, 4836, 9053, 9748, 6961, 7709, 2502, -4282, -4313, 1608, 5679, 3350, 5220, -561, -2132, 2282, -7654, 1677, -3989, 1519, -8164, 2817, -5395, 1281, -9023, 1142, -6065, -2233, 7764, -759, -4140, -2100, -6271, 9783, 7408, 4488, -6029, 1102, -7517, -7507, -9106, 9408, 7109, -5706, -3152, -4578, 9725, 6791, 5847, -8741, 3423, 7025, -2586, -8860, -508, -3477, -6862, -4115, 7885, 1244, -6613, -6671, 3047, 9626, 5187, -3431, -3355, 914, -6080, 8182, -8285, 3290, -2418, -6057, 6239, 5983, 1056, 5733, -5292, 8950, 1035, -1163, -4203, -9578, -8146, -759, -8639, -5023, 2833, 6737, 6804, 1022, 452, -5087, -3715, 3986, -465, -8352, -6340, 420, -5826, 1902, 6816, -8256, 9404, -3916, -5427, -8104, -4814, 3391, -3541, 3263, 9185, -8029, -4896, 3321, -7778, -8011, -5603, -5594, 8324, -4040, 1797, 7257, -6038, 9862, 9660, -7666, 2807, 8929, 2784, 9349, 8783, -3677, 28, -2253, -7495, 3975, -4483, 1592, 4427, -2406, 3421, -3992, 977, -2590, -6515, -9234, -7339, -2942, 5972, 9017, 4969, 1408, -2449, 6707, 4057, 5925, -7956, -1478, 8862, -2069, -7875, -3473, -9922, -9758, 7489, 6639, 4900, 3041, 8024, -5378, -5366, -5808, 7034, -1950, -9666, -7985, 3483, 4257, -5463, 3731, -9091, -2337, -1362, -7775, 6143, 1546, 8901, -9729, -2517, -9342, 8453, 7485, -1105, -2528, -2857, -9003, 5170, 1586, -4864, -3841, -9179, 6087, 2415, -2042, 7006, -881, -7230, -8205, -1665, 8765, 9245, -3227, 4825, 6905, 5010, 5599, 7867, 8870, -8034, 8325, 3118, -9945, 4245, -6733, -5423, -9001, -9941, 243, 1887, 7730, -8068, -49, 671, 5402, -9255, 9946, -1087, -8682, -7283, -9278, 431, -9314, 1527, -6920, 1566, -1631, 7028, 3657, 4640, 9013, 9135, -5317, -2793, -3138, 5811, -7502, -5059, -5416, 4569, -5618, -2825, 2986, -1349, -5595, 250, 7014, 2388, 6089, -9337, -7791, -940, 2138, 5454, -3666, -7840, -2585, 7123, 2919, 2135, -9336, -8104, 8602, 6676, 3788, -3757, -4190, 6362, 1916, -8887, 7986, -6841, -7628, 4296, 8363, 8144, -3604, -7499, -3903, 3463, -3759, 5500, 2789, -1857, -8711, 182, 938, -4783, 6152, 5403, -7588, 1639, 4524, -7152, -6002, 3207, -2242, -6752, -8647, 7071, 5853, 3070, -3857, -1248, -1615, 7213, -8364, 8912, 9636, 581, 1676, -1362, -7919, -7289, 4119, -6103, 1999, -5905, -5488, 9563, -7829, 7086, -8994, -7540, -7558, -4048, -5680, -6473, -8506, 8074, 8448, -3668, -1142, -2543, 212, 1034, -7044, 8009, -2139, 2981, 6409, -471, 9296, 1012, 3229, 6023, 3267, 973, 6296, 9240, -6652, -7558, 4939, -4391, 1313, -474, -1280, -7930, -870, 7194, 9814, 53, -3232, -3510, 8060, 1939, -9346, 9778, -5554, 7089, 3247, -1246, 8212, -3900, 6572, -9022, -3651, 5049, -1604, -277, 8027, -8271, 7675, -4761, 4669, 322, -172, 117, 3820, 1746, -51, 5081, 8284, -5594, -8988, 3438, 3305, -5906, 9242, 5315, -7232, -1461, -5089, 9982, 7307, -1679, 6933, -4326, -5214, -9224, -3774, 5291, -7318, -5318, -4377, 5275, -7846, -8171, -5984, 7400, 6772, -8870, -7119, -6675, 3098, 9795, -6448, 8339, -2708, -7280, 9015, 6004, 1835, -6528, 9059, -4384, -1184, 4481, -3275, -9521, -6171, -431, -8598, 4926, -5750, -452, -9908, 3415, -5028, 899, 5822, 1517, -3854, -4290, 6281, -4542, 200, -6403, -2580, -5370, 3255, 1261, 6522, 6878, 2500, -9309, 8498, 8186, 1978, 2234, -3163, -7775, -5217, 7511, 2035, 6805, -9813, -1106, -3330, -9332, 980, 1646, -2631, -857, -3883, 4548, -7213, 3741, -5135, -9318, 2895, 7224, 1821, -305, 505, -8557, 6585, -6749, -1838, 9842, -7697, -9252, 3436, -2984, -2023, 8382, 7627, -1357, -261, 2343, -3803, 4502, -6969, -3366, 6280, 3827, -6760, 4832, -5821, -7108, 3655, 6837, 8572, -8805, -3865, 2532, -362, -5641, 540, -5958, 5178, 8834, 2721, 1772, 4152, 2637, 1474, 9163, 8618, -2989, -3871, 9877, 6674, 336, -4519, 3199, -4558, 1256, 3101, -6730, -5304, 3047, 1487, 3684, -4111, -8248, 9548, -7625, 2526, 9868, 5235, 6574, -1654, 4053, -2607, -829, 3783, 4904, -9710, 6172, 2395, -2669, 9815, 1751, -5206, 449, -2987, -5100, 8077, 9437, 7471, 325, 8440, 4347, -8900, -8233, 8859, -6144, 1594, 4684, 9656, -9956, -6474, -56, -5829, -1298, 6412, -9196, -740, -9272, 7336, 2812, -6583, -6204, -6356, 4701, -3907, -1788, -8789, 6453, -7454, 9101, -9907, -1024, -5292, -9720, 7579, -8843, -7524, -6640, 5734, 227, 4934, 6061, 3982, 6167, -4300, -4298, 2145, -3489, 3711, -6420, 1541, -833, 4813, -7203, -7739, -7652, -157, 5223, 114, -1500, 9076, 3007, -6132, 9071, 2677, -5336, -1020, 7971, 1064, -2998, -17, -6821, -1592, 7993, -4232, -7971, 3194, 8035, 270, 2403, -9787, 7689, 6540, 9569, 119, -4321, -7451, 7358, -5160, -9399, 6370, -6465, 8498, -5720, -2464, -8855, 8028, 2180, -2385, -2675, 4062, 659, 8955, -3231, 4326, 4723, -5258, 7591, 9969, 8486, 9488, 4127, 9372, -553, 1330, 8557, -3635, -6681, -2422, 4344, -6084, -7351, -5457, 4586, 7311, 7248, -5808, 2717, -7862, 4369, 6517, 123, -3182, -2743, 4775, 9933, 5552, 7233, 7637, -6381, -2776, 2292, -3978, -8052, -9555, -950, 3157, 2118, 2314, 6891, -2884, 8524, -3073, 4953, -6515, -9416, 3477, 3826, 6149, -5314, -9047, -6863, 4009, 467, 1397, 5156, 3965, -1771, -141, 8664, 2911, 3334, 2967, -479, -1073, 3133, 6538, -2395, -9774, -4702, -6577, -3101, -6577, 8265, 4550, 2285, 574, 2324, 6164, -8469, 4844, -3786, -2350, 4394, -3889, -77, 1200, 246, 1262, 4609, -9090, -8410, 192, 2303, -7115, -9821, 4600, 7439, -6620, -7576, -2089, 838, -5560, 2899, -5520, -6897, -4960, -2302, 9171, -9676, -3311, -7910, 2745, -4164, -8817, 1651, -7610, 6421, 1768, 3152, 6613, -5484, 1270, -3852, 2267, 5207, -763, 3094, 7551, -5273, 2529, 5589, 3552, -3790, 8062, -4900, 865, -2206, 6176, -4554, 1627, -5221, 3211, 8310, -2280, 6846, -2781, 5120, 2327, 3215, -9045, 3985, 1566, 8782, -6690, 7451, -7002, -2522, -2882, 9133, 5224, -5223, -2227, 4591, -8216, 1387, 7470, 8586, 8080, -8796, 3027, -4351, 1085, 8779, -5472, 167, -5967, -7599, 5319, -9607, -694, 7369, 6676, 8092, -1254, -6891, -8830, -6543, 1446, -5675, 5323, -2599, 6300, -53, 7577, 2051, -563, -7985, 1152, 7035, 6703, 2986, 4305, 2601, 5039, 6618, -4843, 7410, -5423, 8844, 9629, -8313, 2643, -6757, -5577, -990, 8731, -2829, -1442, -9505, -3299, 2801, -9508, 7506, 1986, -9796, 1854, -8518, 7993, 2055, 310, 7833, 7855, 5889, 814, -2726, 9810, 3199, 388, -3231, -2207, -3659, -2146, -6284, -7839, 7413, 4856, -2382, 7913, -7491, 9830, 8629, 725, -206, 8570, -181, -4479, 3353, 2810, -867, -883, 4164, 3364, 5249, -8525, -20, 2017, 7494, -705, -9606, 6614, 9174, -6321, -9221, -757, 5753, -1401, -4246, 775, -3545, -7207, 6728, 1194, 6064, -7216, -1082, -9440, 637, 8479, -5032, -7146, -3677, 3900, -4499, 103, -7, 6040, -871, -7742, 2721, 9730, -4238, 322, 5690, 6361, -3214, 3643, -3267, -5262, -1748, -261, -8540, -4109, 9761, 3600, -5056, -2380, 7157, -1412, 6340, 1846, 6305, 3592, 4493, 28, 4739, -3967, -8149, -5176, 233, 9169, 6008, -6100, 8235, -2588, 5196, 845, -9536, -2754, 1403, 758, -279, -8966, 4612, 2337, -4610, 6226, 8511, -8045, 7732, -8682, 6335, 673, 5898, -362, -2455, 190, -3434, -4926, 1750, -2417, 1999, 7232, -9859, 4768, 9084, -1059, -5580, 3171, -90, 4290, 5005, -1704, -6298, -243, -2186, 8790, -9152, -4797, -6539, -4028, -4633, 8541, -9132, -7369, -9900, 8298, 7149, 2992, 6578, -8428, -8791, -7399, 4340, -7937, 9325, 1490, 7282, 6148, 503, -8926, 1612, -5373, 6800, -1375, 4219, -5314, 1590, 9935, 3215, 8731, -6429, 6083, -5640, 6972, 2953, 2578, 5604, -7280, 3094, -8552, 5787, 8000, 2170, 7076, 3407, -3892, -4269, 8454, 3780, 1296, 7078, 9031, 3402, 3754, 8292, 9540, 3821, -1759, 6339, 6966, 314, -3425, -6674, -9897, 8362, -617, 6491, 1970, -3767, 3659, -2500, -7907, 2670, 4198, 9716, -5957, 9756, 2376, 2950, -8622, 8403, -5513, -7167, -664, 2817, -5045, 7285, 5478, 9630, 7718, -5318, 8477, 2325, -9901, -4618, 8320, 8711, 1573, 5598, 2674, -8215, 559, 5986, 5634, -9227, 8030, -2175, 288, 3173, -4711, -8813, 8337, -3923, 2776, -5695, -7035, -8332, 4255, 9422, -2009, 8665, -4276, 4013, -428, 1320, 4283, 6228, 9989, 7852, 399, 4339, -549, -6641, -4694, -7820, -10000, 9245, -4794, -9310, -7564, -6893, 1385, -8160, -196, 956, 3740, 5124, 7483, 9957, 7835, -7137, -3979, 9279, 9979, -8512, 4822, -9610, -6187, -764, -4905, 5224, 9667, 3298, 5048, 9321, 3221, -7832, -5526, -7212, -8087, 7188, 3915, -717, -7240, 8250, -1707, -1304, 854, 567, -1394, 8823, -4205, 8400, -9402, -6450, 3279, -2758, -5677, 1842, -9934, 7435, -2952, -8421, -6880, -6005, 2524, 2308, 2010, -9305, 1433, 810, -7366, 9807, 3824, -5976, -1471, -6104, 7844, -7676, 8883, 1069, 4607, 9584, -2246, 9996, -3178, -8229, 7392, -7348, 8178, -6227, 4765, 6693, 2947, 6951, -3706, 3095, -9982, -6919, -4705, 6889, -4947, 8637, 2003, -4829, -8322, -1745, 1367, 4234, 4387, -617, -3690, 8822, 8186, 105, 1682, -811, 5967, 355, -3799, -6284, 454, 5026, -1228, 3297, 8131, 3033, 7661, 1880, 871, -1417, -4562, 5083, 4189, 3735, 841, -677, -6231, -2836, -9312, 4973, -4975, -1822, -8872, -2204, 3603, -2462, -4246, -5899, -9408, 9007, -7868, -4930, 154, 8038, 8156, -9714, -1507, 998, 7349, 2163, 9367, -9382, 5296, 5387, 1306, 5597, 4443, -3097, 387, 7186, -3863, 1036, -869, 7922, -9176, 2644, -1741, 9730, -7237, 5279, 283, -3048, 3038, -3299, 2932, -7773, 1325, -5073, -339, -3144, -7037, 5182, 4853, 7445, -9866, -7475, -9901, 2232, 8311, 6168, 5580, -8523, 3319, -2941, 7854, -2077, -7982, -8128, -7210, -4101, -1328, 276, -8703, 7571, 7258, -6900, -8611, 5980, 9782, 4005, 5109, -2092, -9431, -7473, 1219, 2170, -7569, -6952, 1240, 5051, 4401, 5265, 4773, -6063, 6172, 6347, 3882, 6198, -879, 714, 6184, -4562, 8155, -4752, -6952, 1578, -3502, -8986, 7711, -6230, -5590, -3960, 2827, -6793, 712, 4400, -9326, 5577, -7659, 8008, 6296, -1005, -5150, 2910, 8795, 1590, 4895, 7342, 9698, 8122, 9121, -7867, 8878, 935, -7199, 1618, 9193, -688, 1645, -7606, 2242, 1224, -1420, 9455, -6838, -5098, 2036, 2868, 5813, -6138, 3181, 3428, -2652, -6026, 2372, -2402, -8768, -3758, -7768, -2900, -4747, -8206, 5775, 5277, 6556, 4269, -1224, -6785, -4205, -5593, -72, 2959, 1395, -9652, -9133, -3818, -1724, -2419, 483, 3120, -5299, -1116, -8626, -7441, -1351, -9495, 9451, -8683, 1385, 4085, -7357, -8105, 1733, -1717, 2134, 7978, -1309, -1371, 3688, -5769, -7751, -9420, 3891, -3613, -2836, -4856, 1290, -9129, -5631, -62, -2794, 9485, 6117, 8462, 7960, -9672, -3199, 2294, -3007, -8590, -4289, 3748, -2660, -6511, -6916, 8143, 1220, 2802, -8888, -5351, -5469, 8816, 8811, -2551, -7215, -9581, -8547, 890, 1592, 2471, -2174, -6306, 8824, -6786, 7053, 2804, -7074, -6978, -5100, 597, 3283, 1999, -5748, -7018, -2726, -3211, -8439, 8302, -2976, 5121, -9219, -7117, -9740, 8916, 2966, -8374, 1639, 7972, -812, 732, 1490, -4982, 1609, 1164, 905, 9409, -742, 8538, 312, 766, -9174, -3540, 8778, -5926, 4361, 9314, -7388, 871, 1229, 3438, 7906, -9755, 6120, -8724, 4508, -8046, -198, -6031, -1397, 2399, -5700, -8032, 9721, 2053, 1211, -1264, 640, -4292, -9536, -8463, 9864, -779, 6292, 5547, 8844, -2335, -6920, -9742, 5656, 3160, 5942, -6082, 3275, 5376, 3909, 3349, 2292, 2900, 5515, -9869, -1150, -5544, 5605, 4824, -1332, 1167, -4593, 5055, -8825, 1512, 6142, 2306, -6851, -1100, 2403, -3587, 208, -5550, -4329, 8563, -7460, -1463, 8713, 2313, -12, 4472, 1357, -8153, -3785, -1907, -2264, 3500, -6765, -4097, 5885, -366, 6653, -2057, 666, -3574, 1095, -6342, -4291, -3356, -6815, 6281, 7786, 5144, -3961, -7817, -4809, -6404, 4679, 8285, -9473, 2601, -8534, -9252, 8333, 2488, 2948, -9609, 898, 5538, -2577, -1068, 2087, -816, 7675, 2521, 6971, 6882, -1065, 5922, -6599, -3401, 3382, -6943, -1040, 4902, 316, 9636, 2525, 4400, -5148, 706, 3252, 9947, -3903, -808, -2091, 5125, -4910, 3680, -309, -625, 6, -8775, 8374, 8048, -5156, 3098, -8784, -3138, -5197, -7368, 9603, -2948, -7597, -6232, 5118, -3403, -2912, 8521, -6770, 5638, 3512, -7676, 7491, 7512, 3007, 7512, 3160, 3773, 8043, 9298, -840, 5391, 6992, -9861, -1435, -405, -5958, -4034, 8913, -7297, -6724, 6431, -4199, 4674, -5973, 2412, -612, 871, 9772, -3695, -266, 4213, 7214, 9884, 2969, 4804, -2169, -7758, 5578, 3627, -2360, -1705, 3409, -563, -745, -3274, -1338, 9670, -2573, -528, -8258, -9599, 8086, -4448, -2973, 9447, -9851, 4822, -9599, 660, 2065, -7492, 268, -673, 9571, 694, -456, 1633, 8957, -4724, -8504, 9708, 4270, -2231, 1417, 9381, -8215, 4633, 5249, 2336, -9353, 1153, 1669, 2219, 1689, 3604, -5614, -9967, -6696, -6078, 4965, 3889, 9863, -5942, -8455, 4562, 8848, 8388, -4258, 381, -9886, -7451, 8861, 6651, -9635, -5857, 3622, -9138, 6400, 7944, 9918, -3246, -1525, -5570, 4608, 8577, -4792, 362, 1341, 4998, 8107, 8691, -3734, 3770, 5018, -5579, -1789, 4335, 5001, 2965, 7066, 51, -1712, 7955, 1509, 8060, -395, -9631, -8596, -7712, -5533, 7864, -1534, 2557, -9891, 2535, 6822, -6574, -7464, 9716, -1109, -6996, -6756, 3267, -2456, 5991, 416, 9668, -4682, 4638, 8005, -4144, 1103, -3651, 1432, 1808, 6746, 7109, 768, 1704, 3884, 2714, -5143, -2899, 2934, 4972, -3584, -3543, -5793, 1519, 2051, -8575, -6318, -5397, 4038, -1876, 4889, -1058, -3242, -2835, 9284, -4388, 7678, -8320, 5964, 4122, -7764, -314, -8259, 2730, -4811, 1955, 1925, 2473, -8238, 4372, 408, 2071, 8484, -6209, -8046, 9457, -37, 2899, 8173, 8923, -3399, -2016, 3509, -1978, 182, 6223, -772, 8950, 4929, -5962, 9943, -5880, 3765, -3019, -8453, 2464, 2769, 3011, -8279, 9811, -5740, -2880, 1031, 6725, 1052, 1406, 8856, -9186, -8269, -7080, 901, -7176, -3623, 1696, -5292, -7559, -3302, -746, -2979, 6776, 9849, -4685, -5038, -8920, 9152, 7084, 3513, -6107, -639, 5644, 4033, -1435, 8725, 6932, -1044, 5554, 5479, -3787, -8673, -7219, 3161, 1573, 1236, -4540, -2014, 1965, 9034, 5421, 4658, -2198, -4993, 3210, 9945, 9659, -6963, -4496, 661, -2849, 7040, 7961, -8828, 9912, 6566, 5358, -1625, 4109, 7638, 4977, -8166, 6066, 8622, 6371, 4631, -856, -1212, 3563, 6815, -278, -3922, 2189, -4604, -3864, -8525, 2306, -3879, -9373, 2099, -9002, -2793, -1557, -6502, 1942, 4741, -3192, 3939, 2186, 2367, 2657, -8489, -4735, 7302, 3232, 7703, -3357, 9733, 2520, 9844, 2644, 2356, -531, -262, -5047, -7945, -2121, -7847, -2751, -7649, 2655, -7775, -5237, -3326, -1905, -5726, 5652, 7505, 8968, -3070, -6551, -5310, -3626, 3317, -867, 6932, -323, 8700, -2225, -5662, 5568, 5378, -4025, 6243, 9686, 1405, 1332, 9241, -8969, 1225, -3657, -1290, -1303, 3382, 8384, -8497, -974, -9316, 4327, 8938, 2112, -1655, 276, 8574, 7516, 7164, 2656, 1893, 9934, 1300, -2059, 8283, -5784, -7125, 5642, 3413, 9420, -9719, -5669, 9150, 4521, -7161, -1743, -6369, 6979, -9164, 8430, -7052, 7804, 5028, 767, 8007, -95, 8520, 1907, -8526, -2543, -5778, -5402, 4071, 6783, -7398, 599, -1661, -6055, -7925, -2515, -6439, -4109, -8616, -7476, -9861, -7253, -9077, -534, 7781, 7297, 6379, -102, -5304, 6021, 5618, 7299, 2583, 1791, 1665, -7989, -5675, -9379, -3865, 4486, -9041, -591, -9540, -544, 4519, -8350, 3313, 2606, -7380, 6894, -5165, -8058, -6455, -2417, 2854, -5760, -7032, 9786, 188, -1012, -6857, 6765, 6903, -4721, -1741, -2589, 764, -7797, 7880, -4675, 7033, -1085, 7061, 2993, 7128, -4135, -7278, 6132, -2407, -5519, 5854, 8318, -4092, 4938, -1894, -2238, 9906, -6295, 9760, 2259, -4803, 2220, -9365, -5930, -6542, -4121, 2657, 2224, 9675, -881, -5038, 6700, -1330, 6075, -7373, -7288, 7390, 5620, 2934, 4580, 9600, 6445, 3430, 5994, -5958, 1329, 5433, 1728, 4084, 7624, -8258, 618, -8218, 6339, -5391, 5597, -9610, -1932, 5434, -8503, 5189, 3628, -6614, -7886, 950, 7833, 705, -3353, -4563, -1850, -158, -333, -3889, -7022, 6496, 5130, -3643, 762, 2412, -5536, 9498, -3070, -1033, -8455, -1724, 1832, -4102, 3857, 5643, -5435, 5867, -2478, 1620, -216, 4217, -9497, 6398, 2392, -3007, -3114, -4447, 7699, -458, -7179, -7252, -6536, 5066, 8369, 4699, -7624, 7427, -8966, 6007, 4062, 3198, -3046, -6976, -4976, 7055, -2156, -8789, -6965, -3480, 4217, -4781, -264, 7934, 666, 9910, 5706, -1059, -4400, 3134, 8566, 3349, -6948, 8056, -1690, -9163, 3490, 3620, 5578, 4350, -5653, -6109, 682, 885, -6198, 4494, 9473, -7562, 5683, -7807, 2007, 6603, 4547, 6486, 7884, -7772, -5207, -9726, 6580, 7007, 4417, -6854, 7503, 1372, 2321, 3616, 613, -984, 4864, -7370, 5746, 5103, -2235, -5001, -6740, -6069, 916, -2714, -7175, -7878, -6712, 5281, -8339, -233, 3375, 9445, -9006, 3351, -4334, 951, -4658, -2004, 4715, 6255, 5060, 8012, 6555, -366, 4494, -2134, 497, -7399, 3000, -3113, -4701, 8171, -9099, 3688, 7069, -3760, 4799, 1351, 8684, 4181, -5388, 5131, -7800, -178, 7803, -3536, -9613, -4397, -1555, 6646, 7472, -2366, 3460, 1372, -7015, -4674, -9376, 2462, 8963, 8009, -5135, -6887, 435, -5664, -145, 5791, -2718, -21, 1871, 9865, 7262, -1960, 2235, -9318, -5784, -7431, -4784, 8520, -9031, 5966, -2434, 4564, -9861, -2937, 1098, -954, 4482, -659, -765, -538, -7716, 3826, 6788, 5182, -6063, -4613, -61, 3851, -3415, 9647, -2556, 8896, 3081, -7634, -3206, 1896, 403, 8594, 6961, 1707, 480, -8268, -1543, 8456, -2850, 1073, -882, -1461, -232, 6006, 8058, -3475, -7202, -1102, -1107, 6181, 5589, -7139, 1796, -9294, -290, -9221, 2127, -7815, -453, -324, -9883, -9918, 341, 886, -2205, -5132, -9775, 6148, -1903, 3421, 1714, -2239, 9315, 1149, 7548, -822, 202, 2547, -4957, 3199, -8735, -8798, -6846, -5762, 5615, -1461, -8838, 1201, -8660, -6313, -6575, -4026, 9739, 6318, 9980, -5501, 6757, 7132, -387, -1907, -2558, -4577, 8942, 6054, 5589, -6518, -7245, 2471, 8674, 6291, -2518, -9363, 7485, -4141, -9463, 1197, -6616, 1632, 4712, 8492, -7671, -5181, -834, -3512, -7194, 3182, 861, 8359, 2342, 1403, 4686, 2560, -3601, -2175, -3546, 8983, -748, -6344, -5928, -5429, -8792, 2647, -1722, -8997, 9514, -4555, -1685, -3896, 302, 308, 3151, -8478, 9744, 5001, 3854, 3494, -6161, 1585, 210, -2552, -1361, 9051, -2811, -784, -1181, -4054, -868, 384, 4168, 3667, -377, -7927, -4385, -8419, -7915, 7102, 775, -2541, -3499, -5018, -2241, -8323, 2111, 3246, -5626, -4081, 8167, -1901, 1604, -4961, 5956, -5300, 6382, -3198, 7895, -7231, -5727, -9581, -269, 4201, 117, -6672, -7549, -1287, -2913, 6057, -9079, -4962, 2937, -2166, -2106, -2053, -1075, -9181, 8422, -6098, 8056, -7084, -7492, 521, -3912, 9962, -2238, -8547, -5609, -1219, 413, -8850, 1993, -8290, -8957, 3061, -2642, 9576, 109, -2476, 6690, -9907, 2916, 1236, -3786, 847, 8892, 4767, 5387, 9217, -5255, -7731, -5329, -9195, -6340, 3379, -649, -1117, -1558, 2062, -7158, 8956, 6517, 4290, 1448, -6814, -5409, 6516, -9044, 6613, -9321, -8629, -9161, 4380, 3054, -3144, -5783, 3289, 5866, -4210, -1142, -8714, 7574, -8423, -1913, 8268, -6166, 7479, -6503, -4333, 3774, 6164, -3983, 3870, 3342, 4343, -6433, -7079, -1397, 9630, 5031, -7384, -6977, -1947, 9372, 962, 9540, -4708, 979, 771, 95, -2407, -2691, -737, 3889, 1862, 208, -5381, 4161, 2096, -8382, -335, -6762, -9657, -8875, 2055, -7216, 342, -849, -9534, -8863, -8485, -2831, 1193, 7234, -9432, 6395, -9421, 9574, -648, 2317, -2692, 8973, 236, -1764, 6165, -6495, -7733, 3509, -6117, 6956, -3217, -4420, -5961, -1519, -3387, 2473, 100, 2162, -175, 3774, 1997, -924, 1482, -793, -3420, 5871, -5609, -4570, 4065, -3490, -7620, -4663, 3803, -1130, 9508, 6295, 3345, -1619, -1976, -1520, -1800, 6071, 2347, -5708, -3840, 2310, 1125, 8693, 3266, -8383, 8285, -8515, 1774, 1027, -1992, -5865, -9838, 1385, -9033, 4722, 2799, 6692, 5882, 1829, -2540, -6371, -418, 6386, -5103, -7083, 4062, 2147, 7699, 9854, -6887, -8087, 4973, 3778, -2447, 1595, -1535, -4132, -2704, 4361, -9472, 4884, -3399, 9949, 2414, -4872, -8062, 5003, 9531, 4071, 594, -6593, -7071, 4757, 9800, -4522, -1082, -6774, -7891, -8692, -313, 1743, 8542, 9898, 7958, 7961, -4810, 9024, -7217, -897, -986, 7023, -422, 6067, 1539, 2060, 6513, 9191, 2061, 7308, -9118, 5103, 9462, -6536, 4082, -7049, 4029, 1210, -4537, -9682, 5532, -6903, 3302, -7641, -2905, 2109, 6540, 4618, -4463, 3252, 5833, -5695, 9573, -5601, -2193, -4149, 6564, 1665, -7813, 6790, -2634, -3291, -9935, 7875, 2396, 3051, -6803, 6344, 2189, -960, 1881, 2286, 5650, 4569, -7388, -2732, -8490, -2638, 9627, -2536, 4826, 2216, 4790, -10, -4493, -1499, -8040, -3456, -8060, -3376, 9463, 5666, 8929, 1423, -9048, -5544, -9330, -4028, 2045, -1404, -4623, 4745, 5947, 5825, -592, -1424, -3917, -1012, 9910, -4244, -7812, -66, 3796, -9548, 793, -9032, 9393, -4683, 6180, 444, -9061, 5389, 8398, -5354, 28, -3339, -1204, 8452, 929, 2869, -1177, -3373, 4437, 5838, -4969, 9230, 8971, 8583, -6170, -6586, 1634, 8841, 4209, -6894, -6494, 6010, 2374, 417, 7023, -1948, -9376, -3217, -8401, 4874, 1491, 3241, -8852, 5614, 5893, 8147, 4098, 5326, -5795, 5268, 1419, 4084, -1517, -7811, 1399, -2106, 3801, 5504, -1795, -6210, 6718, 4317, 5143, -9513, 1339, -3908, 1910, -2633, 3351, 4292, -3154, 128, -7782, -694, 4970, 9013, -3592, -7798, -5655, 9687, -3599, 5573, 5075, 6173, 9910, -1107, 772, -715, 7891, 4471, 5697, -1956, 8117, -4560, 2542, -5724, -3552, -7341, 4563, 697, -3426, -885, -78, -7832, -2070, 9604, 8784, -7221, -9317, 9829, -7554, -2148, 2298, 5125, -6657, -6489, -969, -1311, 5098, -6660, -7154, 9191, -1280, -6812, -9172, -665, 5679, 2266, 2099, -6342, 3226, -9909, -8125, 2069, 7813, 5278, -2670, 2931, 3210, 9267, -374, -8601, -5749, 9568, -4692, 9568, 9117, 9733, 5760, -7876, -5126, -3028, 8209, -6695, 7561, -2913, -5051, 939, 587, -3178, -5921, -3505, -2374, 5850, 3479, -3025, 582, -7134, -2874, 846, 2833, 5827, 7986, 8584, 8526, -4924, -3145, 8184, 6333, 8091, 7699, -1065, -8637, -3933, 63, -8734, -7034, -1598, -6533, -83, 3649, -3878, 6326, -7054, 8556, 4825, 9915, 7128, 2070, -9758, 2248, 6172, -9721, -5205, 56, -3321, 4361, 6713, -5977, 4661, 5682, -768, 2771, -1929, -9533, -6226, 5994, 1536, 5291, 8874, -2597, 1360, 8030, 5667, -7138, -977, -3059, -8528, 1254, -7244, 1156, -3464, -8883, -3426, -4830, -9512, 1360, 4177, -1876, -6960, -2615, -8012, -5444, 6530, -2532, -7721, -6520, -4758, 3169, -7909, 4898, 8650, -9697, -9752, 5004, -495, 8154, 5500, -9902, -5881, 1896, 5788, 3803, 5637, 4431, -738, 9373, 4353, 6565, -3024, 3895, -270, 9557, -5643, -6588, 8646, -686, -5428, 2362, 1928, 2200, 2074, 3632, 11, -7744, 821, 9205, -8367, -126, -1584, -5904, -433, 3292, 2414, 4300, -3339, -7083, -3969, -1808, -2658, 2428, -492, 7402, -1337, -217, 932, -3682, -926, 3914, 5836, -4295, 6935, 938, 2334, -3429, 789, -584, 2435, -9062, -6180, 8853, 475, 1532, 5135, -6192, -2140, 1261, -7294, -4477, -5956, 227, 2538, 8386, 3671, -6271, 2616, -5156, 9266, 4281, -5161, -1291, 4747, -2391, 2178, 4309, -7713, -7211, -8857, -3233, 1951, -8743, -1472, 2790, -3427, -7263, 7497, -9936, -4335, 7335, 9422, 2614, 8053, 4592, -180, -9985, 7561, -250, 7996, -2652, -7387, 486, -4790, 4532, -7203, 9463, -2472, -4604, -8311, 6569, -5385, -4121, 6811, 8888, 375, -2033, -9169, -6174, 2125, -3595, 3818, 6071, 1052, -2440, 6984, 9994, 7926, 7615, 8288, 1771, -8439, 8350, -2696, 4330, -4208, -8091, -7342, 83, 9203, -1833, 9917, 1318, -5888, 4360, -3068, 8344, 7212, -9908, -9802, -8516, 7764, -3077, -7317, -4490, 1235, -3909, -8087, -1777, 4733, -1156, -7724, -4887, 8458, -7686, 1564, -8906, 6129, 579, 4469, -8702, 5605, 1293, 137, 2967, 8344, -286, -668, -8196, 9882, 4110, 5967, 6522, 9366, 3270, -1767, -5964, -703, 1439, -4552, -8894, 2549, -3669, 8369, 6276, -6926, -6629, -4123, -5470, -8676, -1499, 9247, -7738, -9058, 6314, -536, -6635, -6839, -7202, 4009, -3791, -9046, -5406, 2616, -7841, -8186, -7491, -5677, -7868, -8668, 6890, 5704, -8384, 3684, -3276, 8100, -7518, -6560, -6, 2557, 9220, 4568, -1058, 4573, -7117, 7730, 9799, -8947, 3440, -3405, -8752, 3917, -1155, 8770, 7524, -6263, 2215, -9106, -3422, -9910, -2805, -2864, -7556, -3656, -5484, -2940, -8981, 761, 2841, -9131, -2966, 4682, -3204, 7278, 7456, -7293, -3749, 3391, 2190, -7320, 5242, 7132, -4812, -9832, -4897, 9812, 7343, -5054, 7129, 1707, -4344, -7673, -499, 4733, -4014, 7639, -7571, 5478, -4341, -2167, -2399, -7480, -8033, -1936, -9328, -8532, 6471, 8960, -9811, -9961, 6570, -9075, -6460, 8455, -3172, -4730, 9066, 2746, -3277, -7793, -1332, 3635, 6850, -738, 7144, 4311, 6107, -5455, 2486, 5304, 881, 8328, -1780, 9292, -1529, -2813, -2736, -175, 5058, -3655, -1584, -3505, 1602, 2179, 9591, -3428, 7033, -5389, 2640, -5392, 7066, -7458, -6099, 4063, -2161, -3729, -6639, 5763, 4192, 9544, -6041, 3918, -1684, -7322, 2006, 949, -7313, 1522, 3331, 2085, 4472, -1362, 9052, 8665, 319, 4710, 1392, -9164, -9463, 9613, -1279, 3344, -4242, 9490, 3214, 1284, 25, -6912, -268, 8137, 8901, 2571, 8759, 5165, 5358, 5875, 5571, 7977, 5348, 5891, -5374, 5045, -2658, -7404, -4868, -3201, 244, 7526, -6404, 5682, -1954, 907, -2956, 2188, 5743, -8741, -5793, -7167, 6886, 3072, 355, -6648, -7326, 6716, -8337, -1903, 481, -9869, 7170, 9920, 5975, 6877, -2276, -7097, 7518, 7961, -7163, 2573, -4979, 7821, -445, -987, 8207, 8082, -5796, 7558, 7573, -6711, -1084, 3832, -1749, 9611, 1940, -7632, 5904, -8104, -8932, 708, 6048, 7076, -8192, -5657, -1736, -4074, -998, -883, -8376, 2566, 9804, 1839, 1990, 8066, 3849, 1993, 1503, 1175, -6966, -3937, 9413, 1526, 8126, -4234, -1925, 4307, -6845, 3492, -5863, 4217, 143, -1842, 9792, -1887, -1101, 3520, -1067, -4597, 7879, 2743, -1396, 7334, 4217, 5784, -6880, -7149, -1341, 169, -7111, 1721, -9016, -2775, -7763, -5053, 3695, 3365, 6430, 3037, -8962, 2679, 4753, -5515, -3328, -1959, 1469, 7954, -8197, 1790, -4657, -4388, 1249, 2089, 9207, -1800, 5155, 212, -6390, -8364, -6457, -8503, -5535, -5110, 1, 7313, 3921, 3310, -2149, 922, -9395, 1565, -3430, 4200, 316, -9597, 8344, 7096, 6809, 3432, 1644, 5058, 5534, -7868, 8323, -4299, -5687, -790, 1426, 6317, -4541, 6597, -2296, 7647, 359, 5618, -3955, -9766, 1119, -8484, 3004, -8106, -9884, 1601, 6901, 6948, -39, 6492, 199, -9449, -7584, -5126, -472, -4130, 116, 3315, 8158, -4027, 5859, -6490, 3302, -7962, -1440, 3497, 6203, -4227, -3022, -2547, -2714, 3749, 5765, -9851, -3235, -3445, -9548, 284, 9617, 6431, -4528, 2152, 4969, 9204, -6468, 7686, 4551, -6829, 3533, -2842, 1123, -5950, 5921, -35, 9158, -2721, -5217, 322, -3265, 6705, -5545, 8631, 8857, 9889, 2376, -4996, -5936, -7149, -2837, -6590, 7747, 438, 3264, 8961, -8147, -4573, 4984, 9719, -6331, 1308, 5571, -3078, 9237, 5627, -8624, 6429, -128, 169, 8650, 6800, 2983, 6867, -9144, 5903, 2449, 720, 3965, -3844, 5111, 1009, -4383, 6949, -6210, -9381, 2586, 7313, 8995, -3206, -204, 5951, -9101, -8154, -5530, 9667, 8035, 5771, -6591, 2568, 2, -7262, -2735, 3658, -9554, -3923, -6440, -9060, -571, 1041, 3151, 8890, -766, 6718, -7842, 2390, -3843, 8109, 6516, 5721, -7187, 7900, 5117, 2100, 9490, 9688, 2731, -553, -6806, 7326, 618, -8314, -2020, 8840, 5067, 6723, 2827, -2328, 5316, 8218, -8956, 3274, 3158, 6055, -3423, 2451, -4671, 3823, 2594, -1691, 251, -3194, -8838, -3109, 6637, 2189, 3910, -1394, 2389, 256, -8669, -5975, 8711, 4122, -8688, -3930, -995, -1260, -8957, -2730, -9863, 3376, -7403, -5761, 7380, -1164, 7048, 8328, -9156, -9346, -4085, 979, 1862, 1523, -3806, -1077, -1586, 5708, -6923, -640, -8915, -3200, 8794, 2110, 521, -5981, -4391, 6065, 4824, 5004, 5374, 8621, 670, 7270, 5133, 5057, -4280, -2779, -3966, -4979, 5516, -3362, -5404, 3725, 5467, 1879, 7164, -341, -7157, -3394, 725, -41, 6338, -2058, -7981, 7885, -8763, 1012, 468, -8425, -5496, -1993, -7896, 6132, 5168, 5536, 3960, -3274, -5535, 2095, 5264, 1171, 823, 5347, 1014, 4873, 2986, 6225, -200, 8017, 2960, -9423, 8070, 3037, 541, -6810, 4349, 8076, 9965, 5255, -8952, 5841, 6186, 5543, -1239, -2940, 6726, -4448, -5415, 9358, -8167, 2125, 7809, 4724, -6708, -7555, 9088, -2445, -5380, 7385, 7367, -4907, 6312, 9404, -4261, 1606, 3639, -8592, -4098, -5927, 294, -9131, -4100, -8265, -4403, -5990, -3936, -2884, 836, 5117, 3620, -9725, 239, 9747, 8571, 3809, -7232, 1883, -5049, 1409, -8065, 5092, 1517, 2061, -1218, -8738, 78, 8124, -3032, 706, 7378, -9834, 2138, 9939, 5812, 1223, 5304, 7737, -7972, -1978, 4179, 7710, 8038, -267, 1168, 6920, 6857, -5996, 9593, 7405, 5842, -8538, -740, 5093, 4214, 99, -268, 6588, 1378, 2927, -8510, -9477, 6693, 2681, -4291, 4766, 9656, 6536, -8310, 5100, 6642, 8778, -8624, 5842, -7787, -6020, -1386, 7832, 9271, 852, -8070, -2474, 434, 5880, -31, 2825, 3183, 9757, 9141, -5631, -9071, 3557, 7017, -3481, 8901, 2113, 7145, 7897, -5463, 8799, 4673, -9584, 2705, -1010, -8206, -5049, 7219, 7484, -8888, -4514, 1625, 746, -7439, 5447, 3743, 1678, -5837, 1025, -9225, -3074, -1280, -9980, 4360, -3171, -5468, -4985, -8118, 4799, -8934, -1215, 6448, -477, -9695, 8479, -8015, 7834, 7410, -918, 1620, -8464, 5834, 986, -1945, 5354, 845, 4560, -8423, -3075, -9105, 6887, -4496, 7885, 6945, 7069, 8587, -7352, -3764, 7777, -3828, -4314, 311, 7816, 4204, 8178, -3783, -1474, -3353, -7385, 853, 1675, -2888, 4744, 5774, -4769, -2324, 5039, -379, 3341, -1176, -36, -7447, 6592, -135, -1713, 8650, 1209, -660, 2799, -8467, -1582, 4578, -166, 7357, -5633, -1471, -2016, -2815, -7261, -3005, 8217, -694, -7008, 8102, 9253, 1649, 4344, -2848, -1996, -8569, -5499, 7806, 3902, 474, -7974, -5665, -6865, 7684, -5217, 5792, 4623, 868, 2508, -2125, -7075, -1746, 1819, -5117, 7280, -3240, -7120, 2261, -9254, 3851, -3857, -3857, -8893, 3013, -3157, 2182, -2004, -2388, 85, 7839, 6983, 3684, 6754, 7168, -1743, 3620, -4696, 6578, -2499, 1775, 9150, -59, -9902, 6302, 2905, 8105, -3520, 5154, 2652, -3281, 8680, 244, 6613, 151, 8873, -6092, 3120, 4628, 2633, -8384, 452, 6731, -1372, -9857, -4589, 7925, 7299, -7024, -2318, -6265, -754, 3999, 3994, -1581, -7103, -5350, 229, 7540, 6300, 1056, -1474, -3804, 8535, -5783, -7570, 5527, 3198, -8757, -1257, 8420, -7856, -6419, -1797, -2526, 3680, 2309, 9396, 1781, -9881, -7217, 8662, 162, -3319, 1478, -6577, -8461, 7447, -6358, 1565, 3663, -4594, 5583, -4359, 8804, -5823, -7311, -7017, -2870, 7442, 6745, -6074, -8158, 2881, -8785, 18, -5154, 8204, 207, 8922, 3665, -6488, -8182, 8393, 4290, -7777, 4841, 2401, 9609, 9868, -6784, 7014, -6392, 8196, 7535, -970, 8545, -3321, -7164, 4, -1708, -743, 7749, -831, 8168, -2574, 8806, 6547, 2990, 7525, -4135, -7067, 2949, 5360, 303, 8812, -1773, -3539, 7002, 9097, -3452, -5453, -1753, 5235, -8014, 9310, -6905, -5646, -7769, 8596, -4746, 4327, 9933, -9099, -1539, -8021, 896, 7617, -3006, -5222, -7943, -3810, 7045, 3298, -4554, 9813, -211, 8627, 9058, -2131, -8633, 5216, 5755, 9234, 6155, -2595, 9039, -4724, 7788, 2563, -842, -6287, -6279, 3756, -4936, 179, -7266, 9357, -4763, -2175, 2893, 6267, -4820, -6680, -8867, -6103, -3292, -715, -6557, -8622, 1058, -654, 4789, 7429, -3361, 5567, -3206, 1179, -2469, 3321, 9224, -9521, 2134, 7265, 7434, 7091, -9783, 6787, -9395, -3141, -8864, -7083, 2596, -1943, 4451, -7807, -2413, 859, 5549, -3712, -798, 5469, 1231, -350, 2027, -7377, 3750, 8625, -7079, -6968, 4334, -7580, -501, 7288, 5074, 8528, 5552, 5952, 2201, 4118, -3900, 8822, -8996, 359, 7046, 3630, -5969, -2360, 4825, -9941, 5140, -8432, -2605, -1782, -8465, -5085, 9580, -8170, -9609, 6250, -192, 2927, 5835, -9602, -9252, -1397, -7238, -9859, 8945, 9042, -4671, 7828, 7158, -7748, -351, -9466, -5453, -3094, 9764, 8696, 3623, -8341, -4943, -5329, 300, -8298, 1251, -286, -4869, -6267, 7709, -8191, -6830, 6652, 9532, 4991, -799, 9374, -5344, 6963, 9164, -360, -7225, -8202, 7064, 930, 9172, 6636, -2944, 8304, 6458, -6610, -3996, 2181, 7724, -4820, -3292, 2134, -403, -1983, -6069, 4560, 7786, 9370, -6264, -6953, 1882, -9979, -6257, 1380, 6300, 7467, -9120, 1304, -9873, -3160, 7278, -3249, -3408, -8488, 4398, -2082, 7218, -2655, -345, 6832, 3857, 3190, 3700, 491, -2285, 157, 8378, -5109, 1524, 7802, -6072, 6821, 513, -5599, 7630, -7404, 7012, -5289, 7147, 4061, 7014, 7315, -5767, -1617, -8089, -3055, 9220, 7757, 2218, 624, 4528, -6015, -8880, -1805, -5444, -6516, -2263, 8894, 5424, 6134, -6820, -9039, 1063, 2826, 4447, -4082, 1000, -3334, 1456, 3766, -7419, 224, -6700, 5299, -396, 6816, 4628, -555, -1019, 3581, -1446, 83, -8525, 4095, 7844, 6343, -7394, 489, -6960, 460, 9637, -3127, -899, 2450, -2038, 8084, 6527, 5663, 4350, -9207, -3244, -6306, 4578, -3099, 4386, 2034, -349, 5541, 3819, 4370, 8848, -5265, -5727, 7987, 1684, -4736, 5785, 9770, -7960, 9361, 5631, 4878, -1550, -5720, -7939, -7696, -6674, 9141, 547, 8177, 4988, 4006, 1483, -2337, -531, 8254, 3160, -3887, 3558, -8231, -3606, -2854, -3876, 8923, -354, 422, -1761, -5482, -9562, -2141, 132, -7776, 7535, 3644, -4210, -1110, -7918, -8868, 9528, -6153, -3193, 8090, 4156, 9396, 2093, 5705, 8975, 608, -4250, -3190, -7682, -8685, 9832, 1312, 2917, 7434, 4383, 3463, -3638, 9434, -5326, -4170, 1388, 6436, -360, -7802, -4026, 8124, -2745, 7697, -4410, 473, -7728, -8405, -4211, -5027, 1200, 5838, -6464, -6038, -4060, -9025, -1378, -4478, 8842, -1297, 5889, -5871, 3682, -385, -7964, -2511, 5247, 2920, -5575, -5757, -143, 4738, -2500, 7356, 426, -1332, -3478, 6060, -3094, -8993, -3707, -3644, 4973, 8661, 5178, -7566, -1727, 5746, -4390, 8904, -5, 2102, -6863, 5658, 1950, 6127, 9310, 9514, 469, -4698, 4501, 2728, -988, 6903, 3836, -1381, -387, -8771, -3786, 8165, 4385, 7941, 3052, 3651, 8095, -542, -2992, -491, -3319, -3811, 6859, -2478, -1921, -2318, -6745, 7093, 6406, -2901, -9641, 6393, -2344, -9581, -5149, -6101, -76, 3321, -6970, -8042, 7864, 9759, 4777, 4053, 7025, -1333, -7175, -7149, 4569, -4350, -9974, 5176, -5760, -7540, -6740, -7151, 260, -6056, -8346, -7003, 3932, 2024, 8208, 307, -5923, 2756, 5829, 9057, -7763, 1651, 1214, -1528, 7752, -3067, -4013, 2879, 181, -4026, -9130, 4600, -1411, 171, 6026, 7294, 3090, -4464, -2015, 9410, 3340, 7089, -660, -5477, 3658, -4952, -9701, 6394, 3985, -8046, -7499, -3507, 7775, -5512, -2208, -7329, -7693, -1333, -3981, -2132, 5436, -7146, -4447, -8528, 4594, 3538, 9671, 1079, -5085, 5189, -679, -4530, -903, -4599, 5966, 8678, -4687, 9572, -6241, 8837, 6814, -4885, 7752, 2947, -724, 4444, 161, -2188, 8689, -590, -8708, -757, -1567, -9619, 6168, -3625, -9582, -746, -4291, -1761, 7802, 9776, 859, 6471, 8633, -3258, -7026, 6484, -2129, 1371, 3384, -5998, -1082, 1813, 374, 4827, -8866, -8932, 6064, 5444, -4010, 7956, -8875, 6976, 7349, -8710, 1512, -3344, 6449, 8967, -6911, -5282, 10000, -4668, 3790, -1560, -7714, 9856, 4987, -5680, -5952, 6084, 7748, -4307, -921, 6171, 4033, -5369, -2341, 4007, 4748, 7743, -8681, -8996, 8823, -3024, 257, 8216, 4133, 5850, -4893, -715, 3098, 6015, 3488, -2650, -6660, -8647, -4529, 9468, -3576, 5141, -737, -3620, -9910, -7171, -868, 9468, -7852, -1003, -3111, -7405, 8196, -4497, 6484, -9055, 2774, 4845, -1308, 7997, -1448, 7525, -4887, -8155, 5258, -234, -3752, 5039, 9240, -3688, 5558, 1221, 8698, -3853, 885, 9357, -5068, -726, 8368, -2300, -6640, -8057, -6278, -2786, -9065, 3264, 540, 29, -752, 9063, 8074, -3231, 4101, 2546, -4464, 4875, -293, 1467, 2374, -1464, -8044, 4002, -9738, -5516, 461, -8142, 2977, -9564, -1434, -687, -9383, 7878, -7580, 7288, 6697, -422, -9553, -9633, -22, -6580, 6606, 6239, -9583, -7524, -5035, -476, -8473, -2595, -3660, -4529, 502, 4720, -9044, 3678, -6492, 2863, -347, -3554, 3070, -2194, -3455, 4323, 2566, -8088, 9223, 7174, -7609, 1607, -6065, 8123, 5728, 9764, 7251, -375, 7444, -2352, -7378, 6125, -6639, -1079, 8217, -547, 3398, 1442, -8032, -6710, 8929, 408, 7679, -1042, -3228, -6156, -2134, 6598, 3903, -6139, 9280, 7699, -6500, 7023, 9649, 9015, 1570, -2366, 5993, -9880, -9612, -6299, -395, -1863, -326, 5111, -5628, 9830, -8221, 8491, -2404, -303, -1884, 8876, 6099, -6917, 701, -4986, 7684, 3537, -2651, 7905, 4760, 8888, -1954, -7580, -5243, 2388, 378, -1245, -5862, 4464, -9276, -1750, 960, 2359, -9742, -1251, 7538, 8380, 7777, -1098, -2197, 2745, -3179, -9137, -8510, -7948, -6408, 1510, -6572, -4664, -2922, -2427, 8156, 4000, -542, -4440, 7412, 3209, 9054, 9805, 7164, 1012, -229, 4297, -709, 470, 7785, -2985, -6952, 3973, 1587, -2098, 7261, -6180, 8762, 7783, -4765, -626, -4463, 4361, -5550, 5533, 6213, 6096, -3863, 2574, -8490, 1433, -7952, 2408, 8377, 6024, 8741, 5559, -9989, -3444, -702, 2195, -1744, -733, -2002, 5200, -5455, -9362, 1925, -841, -445, -6511, -5640, 580, -8077, 2093, -4258, -6702, -1984, -8784, -2307, -6482, 1561, -8281, 3489, -1070, -9061, -7653, 7039, 3321, 9753, 3558, -889, 3324, 8177, -9634, 7232, 6194, -2884, -6988, -9425, 2180, -9435, -3843, -4025, 250, 5512, 9878, -4789, -6688, 7534, -9136, 5159, 5313, -6164, 4924, -657, 6897, 1281, -9060, -3061, -4522, 9110, 8683, 6767, 5078, 8952, 952, -5823, 622, 2244, 511, 8205, -8891, 7002, -8391, -8304, 8085, 4051, -1991, 4456, 3493, 110, 4584, 1166, -2211, -846, -4979, 170, 6415, -7875, -5886, -5298, -687, -8744, 7427, -8341, 1681, 3061, -9415, -9797, 9921, -7558, -1724, -9775, 7195, 6584, -9998, -1378, -750, 806, -9026, -3971, -2149, -9815, 7264, -186, 7734, -580, -1118, -2902, 7981, -608, 1804, -2988, -9299, -1733, 6665, -4734, 9227, -5271, -439, 7710, 6106, 4273, -6976, 6809, -6014, 4538, 5978, 7729, -2530, 2761, -2852, -9932, -804, -6523, -2691, 8560, 8196, -8525, 7063, 3854, 8443, 875, 131, -8076, -1494, -5744, -7593, -7631, -6900, -1391, -8117, 358, 4969, -6546, 4160, -7972, 3645, 8722, -6400, 6347, 4630, 1021, -5633, -7512, 8605, -5403, -175, 2733, -3910, 4647, 2597, 5692, 4456, 5624, -882, -6663, -9134, 6801, 2350, 7194, 2414, 4867, -3166, 7315, 1639, 6002, 3876, -3340, 3628, 1967, 5754, -8779, -9035, 3717, 438, -5809, -7159, -3636, -6417, -2662, -6760, 6773, 1837, -9125, 9748, -5982, 6060, 1483, -4345, -245, 5234, -9308, 2594, -4302, -3831, -7975, 1040, -6591, 7265, -7025, -2582, -4737, 6285, 5101, -6806, -8674, 376, -5107, -1355, -3023, 9312, 5868, -8772, 4202, 6902, 9831, 8474, 1914, 4220, -6520, 50, -223, 7589, -7221, 9896, 8214, -4657, 1079, -3524, 8526, -4020, -9035, 9401, 2493, 5753, 924, -1010, 1030, -9782, 5086, 5668, 791, 838, 5844, -3960, 3012, -8605, 4778, -2340, -7238, 3735, 8553, 9104, -7459, 1966, -700, 3304, -3863, -1515, -896, -7681, 3473, 8025, 3660, -2269, -408, -1704, -9130, -7794, -8645, 2764, 3653, 86, -4722, -2328, -1038, 232, 1868, 6085, -2346, -9059, 8496, 241, 1562, 8342, -9133, 8503, 7893, -4450, 2251, 1435, 8233, -995, 6620, -7396, 6518, 9236, 3968, -2167, -3819, -6459, 1837, -1903, 2067, -3262, 1317, -9521, -3151, 8504, -5072, 6029, -2488, -5671, -9597, 4396, -9652, 3127, -5301, -9688, 2511, -6144, -8463, 2529, -699, 3810, -3791, 6435, -4017, 8255, 1452, 7515, -7145, 9292, 3060, 822, -7480, -1233, -1724, -2725, 3364, 9308, -9612, 3970, 6965, -9999, -3252, 5754, -3784, -7065, 4066, -7596, -590, -9123, -3672, -3920, 6982, 1625, 7014, -6250, 9440, 847, 5982, 8443, 8980, 3878, -2516, -7038, 8070, -1248, -5122, -1466, -1761, -5228, 6047, -6555, -499, 1171, -4179, -3556, -9117, 9376, 5798, -1057, 7286, -2290, 2170, -7425, 9088, 7451, 9787, -4137, -2368, -5856, 1503, -6093, 2320, -3297, -930, 3781, 2956, -1810, 6635, 5880, 1010, -1067, 2743, 5676, 7277, -1548, 4446, 9932, -8675, -154, -5346, -3021, 218, -8154, -7964, -1428, 1707, -5756, 2624, -1268, -435, -6665, -6374, 5852, 9153, 688, 8575, 5621, 8679, -2976, 9915, -1036, 1483, -3500, -490, 4442, -6192, -3588, -5309, -2818, -8819, -2948, -8471, -5585, 736, -8404, 7437, -9919, 2357, 1029, 3736, -1271, 5931, 7915, 9862, -2910, -9886, -5046, -2340, 5746, -9419, -7021, -8743, -597, -6614, -9396, -4318, -2374, -195, -526, 1105, 3514, -2348, 9875, 4459, 909, 6941, 8188, -1819, 439, 8494, 6951, 8544, -8293, 9855, 3408, -2145, -5557, 8292, -7528, -7398, 9881, 4651, -403, -2446, -914, 4311, 9681, 2764, -1090, 3919, -7444, -7667, 5271, 550, 1418, -2691, -9242, -3711, -8821, 6435, 4296, 3147, -5189, 1365, -7720, -238, -6579, 6962, -5370, 1033, 7534, 3723, 4288, -4391, 2774, -5746, -8256, 259, -9901, -5950, 1934, -2032, -5168, -7917, -1002, -7086, -1413, -7114, -7429, -4333, 7073, -8420, -3598, -8475, 536, 6636, -8061, 7104, 7456, -1420, -6352, -7842, 6218, 3160, 9796, 1553, -3325, 3293, -8207, 1711, 1689, -9555, -3224, 2672, 7541, -5428, 3540, -3450, -7428, -4065, -1499, 4197, 6890, 2158, 2284, 8628, -8994, 4587, 7291, -10000, -2748, 1341, -6708, -1391, 2766, -6628, 4796, -992, -4358, 998, 8509, -5393, 7518, 102, -3258, -2899, 5226, -4013, -8723, 3534, -6019, 125, -6641, 4879, -3567, -830, 2310, 1221, -7102, 8819, 522, -8684, -6216, -8787, -6605, -5399, -7784, 996, -2949, -6037, -9201, -9635, -9847, -1198, -8151, -1358, -1125, -3450, -2652, 6719, -5485, -5929, 9825, 4326, -3430, 2914, 4168, 1495, -5464, -3022, -8123, 8382, -210, 1484, -3272, -5018, -4170, 9840, -7912, -4272, -5530, -2545, 2340, -8971, -8471, -9166, -6177, -3744, 3097, 980, -1623, 7687, -7996, -6586, 5791, 401, -4943, -3491, 7771, -4086, -9446, -6993, -253, 6313, -6938, 5019, -1713, -8536, -4550, 3500, -129, -6913, -9408, -2546, 5873, -3735, -7545, -1114, -3934, -5764, -4753, -7151, -4065, 5764, 9362, -9368, 649, -3794, 7200, 6773, 365, -6835, 6165, -5702, -7744, 488, 2488, 4475, -1241, -7831, -8519, 4017, -1747, 7009, -341, 3652, -3392, 7565, 3783, -4626, 2068, 9874, -1506, -7079, -3055, -2512, 6087, -3954, 300, 9768, -1901, -612, 8613, -2563, 8313, -8876, -4149, -1117, -7864, -3896, -1155, -2030, -9047, -5089, -2654, -6756, 2696, 1776, 5268, 2095, -7167, -46, -1177, 8681, -7932, 1007, -6840, 4961, -1640, 8935, -3344, 3322, -865, -634, -7271, -1646, -345, -8991, -6691, -3, 7403, 7295, -4819, 3479, 5691, 1276, -5375, -8181, 2454, 3444, 359, -5368, 6420, -6907, -9935, -5936, 9676, 4424, -8665, -3867, -1295, -5631, 8848, 9612, 1701, 4603, -8898, 9058, 2239, -1461, 8757, 3669, 8644, -2823, 9992, 8959, -8427, -9666, -58, -6531, 2418, -2588, -7671, 5474, 7079, 4463, -7371, 8983, 6813, -8374, 3406, -3736, 3884, -8796, -9140, -5213, -755, 6448, 2849, -5110, -3456, -4819, 5207, -3729, 536, -2876, 9256, 9916, 8707, -5456, 3087, 4875, 1312, -9758, -8918, -9612, -5757, 8248, 2761, 3743, 2534, 6211, -8941, -6775, 2084, 6262, -7803, 3664, 8548, 338, -5231, -3342, 6970, 6514, -3596, -8407, -6327, 2707, 5808, 5941, 3677, -8434, -3483, -9284, 1205, 5595, -7501, -6232, -7593, 9863, -6741, -5732, 4667, -7353, -9231, 4749, -5234, -5558, 8309, -2804, 6453, 6236, 6074, -7599, -309, 4542, -6902, 2346, 4634, -4555, -2889, 5825, -8372, 5786, -113, -1542, -2592, 3162, -2901, 4536, 5313, -7679, -1958, 8384, -244, 5499, -5888, -1444, -5445, -5715, -9679, -5839, 8173, -9468, 7960, 7734, 5740, 5714, 8078, 676, 4157, 8762, 1262, 4536, 3643, -5432, 6132, -4857, 9905, 9980, -2678, -120, -959, 4762, 9885, -7184, -2490, -2761, 6905, -960, -6630, 9901, 913, 9780, 4940, 1624, -4908, 3658, 9883, 4513, -3115, 4026, 8488, 9737, -6599, -819, 474, -7017, -9375, -962, 8697, 9543, -260, 539, -3184, -5722, -6002, -2635, -9402, 2412, 8270, -7900, 6218, 6088, 6614, -7061, -9931, -5413, -7521, 7329, 6480, 7248, 4324, -2545, -9606, 670, 2392, -2478, 1439, 3533, -4332, -6257, -7260, -9943, -5908, 8641, 5318, 1020, 8300, -6237, -2144, -8473, 8652, -4848, -7836, -4759, -751, 3581, -7435, 6307, 2064, -3985, 1222, 1715, -9138, -7974, 5822, 2460, -8912, 9045, 2973, -384, 5564, 3957, 567, -4786, 803, -107, 5978, 1342, -1881, -6098, 782, 5715, -1284, 2464, 5089, -3251, -5234, 377, -2511, -5347, -7283, 8593, 5189, -7908, -1396, 7316, 3859, -914, 1878, -6104, -835, 37, 3311, -9039, 2695, -4038, 4562, -8210, -3312, -6778, 2263, -3592, -1818, -2844, -1751, -4792, -8994, -6559, -2284, -9593, -6122, 1371, -484, -7718, -3505, -7071, -3519, 2014, -5443, 2910, -120, -9746, -9388, 6521, -9482, 7156, -7525, -6965, -6199, -7782, -935, 4694, 2725, 7697, 6668, 4523, 2006, -1163, -3139, -6230, -8662, -7089, -5250, 1787, -9595, -7807, 9944, 3371, -6223, 8446, -1301, -9087, 1384, -3070, 5009, -9888, 2886, -1423, -2424, -3420, -8795, 4247, -8576, 5813, 4514, 2600, 7045, -325, 8803, -3919, 4850, -263, 2409, 9696, -5991, -3544, -233, -1547, -2652, 9481, 2551, 8250, -8388, -735, -2258, -1563, 3588, -6679, -5014, 7236, -2795, -179, 950, -5902, -2215, -954, -9491, 9789, 4831, 9031, -1000, -2364, -8665, -3864, 6476, 3762, 5414, 2712, 6860, -7874, 2551, 5587, -9328, 1891, -1034, -8934, 1288, -927, -9438, -3809, -3803, 9929, -7017, -7655, -8174, -9582, 402, -7071, -2230, 6936, 3417, 5835, -4436, 5250, 7022, -5254, -4025, 6154, 3737, 7933, 1149, -9535, 901, -6802, -9167, -3459, 38, 2978, 6434, -1586, 4268, 4186, 4471, -8609, -9454, -7404, 4368, 8422, -5831, -3885, -3391, -4952, -5614, -6202, 120, -4487, -5280, 1388, -8932, 4349, 5334, -2883, 325, 5646, 995, 591, 6318, 8958, -5794, -1030, -3498, 817, -15, -4413, 1597, 6741, -8421, 3100, -6292, -3941, 7376, -9947, 6615, -3300, -2206, 8170, -7523, 9515, 4439, -7255, -3962, 5045, 1680, 2014, -3873, -5443, -7024, -193, 5444, -5184, -5358, 7027, 5848, 7291, 5803, -7170, -2841, 9766, -648, 3133, 6582, -4150, -6297, -1980, 2048, -1759, -9879, 7958, -3258, -548, -1326, 7979, -2491, -4513, -9554, 8151, -8459, 3049, -5465, -1686, -1572, 1069, 2755, 3617, -8836, -6812, 1280, 9393, 6389, -6205, 8124, 4491, 6877, 9580, -7341, 3355, 814, 6377, 3284, -6908, -4892, -8965, 9181, 2541, 3082, -7544, 5574, -2705, -4848, 7862, -1945, 8094, -6135, -5898, 2582, -2516, -9442, 9006, -5192, -2918, 9678, -4300, 5654, 3445, 6471, -6181, 9297, -9624, 5888, 439, -8665, 5491, -1888, 7368, 6225, -5868, -595, 4150, 1995, 2185, 2175, -2369, 2344, -7530, -6814, 1877, -9771, 5970, 4246, -9571, -8377, 1146, 6471, 9114, 8762, -3745, 9810, 5940, -1270, -3901, 2411, 9920, 7717, -8718, 8871, 1980, 3509, 8087, 5891, -4613, -3640, 4597, 2112, -1082, -3251, -275, -9612, -3169, 6095, 9715, 1632, 4032, 5334, -2087, -5765, -4059, 9688, 9065, -4416, 7435, 7255, 9372, -2489, 6813, -9464, 7680, 797, 9288, -7275, 5760, 7477, -6503, 5309, 2855, -3796, 7262, 3990, -2773, 1341, -7930, -1747, 4912, 205, -8308, 6600, 1639, -4464, 2427, -7790, 409, 5749, 5377, 3340, 8456, 7525, 7705, -5293, 7011, 2952, 7341, 6498, -6285, -5915, 4584, -4231, -7898, 7060, 9839, -6815, 1357, -8562, 5932, 6374, 5735, 7357, 3508, 3286, 2219, -9826, 4057, -2543, 4851, 1313, -6383, 6922, -4087, 9437, -5914, -2933, -6911, -9224, 328, 7080, -4123, 3166, -1054, 4183, -322, -3525, -954, -5663, 2202, 9495, 7993, -9175, 3228, -1819, 7603, -753, -1107, -9656, 6145, 1406, -8218, 5091, 6190, -7454, 9519, 1669, -9795, -2079, -7281, -8070, 6566, 8355, -9388, 880, -3964, 6922, 2237, 4431, -8245, -2700, 3408, -3214, 855, 6630, 9201, -3186, 1697, 170, -5508, 5538, -8104, 9096, -5725, 3680, 1542, -1751, 5364, -9958, 3635, -7442, 4761, 8014, -5518, 5460, 8891, -7053, 3373, 4293, 6659, -8373, -8090, 3043, -8791, -7731, 2541, -4718, 397, -8964, -6539, -9522, 4658, -6144, -9557, -556, 1165, -8769, -8674, 1833, 8380, -1898, 2611, -570, 9119, 6270, 7232, 3468, 8036, -4135, 6690, 7482, 6692, 5921, 5554, -6413, 505, -8386, 1587, 916, 8760, 2928, 6311, 1550, -7819, -8250, 4854, -6247, 1734, 7295, -9941, 8768, -2756, 3518, 12, 1992, 1200, 959, -6171, 9771, 5188, 5195, -2590, -3090, -8230, 1596, 3572, -9559, 5288, -7091, -2643, 3455, -4676, 3470, -1824, -7264, -2674, 6749, 8526, -4922, -3617, 5368, -5262, 4998, -4535, -2927, 5357, -5891, -2914, -6284, -6903, -8016, -4693, -8024, -7243, 7925, -9134, -2768, -4157, -3957, 5762, 3634, 626, -8282, -1231, -3145, 5581, 2500, -7351, 7459, 2453, -9547, 2788, -8479, 3123, 3149, 9679, -8970, 3425, 1916, -5505, 7845, 1880, 1789, 4662, 2222, -6242, -737, -2075, -1234, -3632, 5618, 1333, 3807, 1272, -2054, 5537, -8578, -3853, 1349, 579, 8115, 1574, -5524, 8475, 6362, -6913, 1656, 4064, -6494, 8768, 3951, -7735, 3660, 8029, 8506, 2700, -8025, 7726, 752, -8630, 1112, -2558, 31, 4767, -7940, 1509, 2507, 1373, 2759, -8660, -4062, -3201, 7565, -2833, 1173, 3374, -1404, -5571, -343, -9613, -6816, 9559, 2185, -7515, 8251, 9970, -2068, 2840, 4361, 32, 6696, -7338, -3687, -9697, -1854, -486, 9588, 5760, 1812, -9192, -5472, 3765, -8892, 7296, 6015, 1453, -4660, 7289, 1942, -5479, -1989, 5093, -2427, -3418, -1686, -4263, 5159, 7500, 9551, 2689, 8375, -3551, 8303, 6306, 169, 4278, -8243, -6164, 4702, 3221, -7645, -9084, 113, -5970, 9663, -7938, -5473, -8860, 9189, -1196, -8823, -598, -6734, -872, 211, -8542, 9258, -9149, 3354, 5218, -6155, 7232, 9646, -9863, 5230, 552, 4370, -8253, -756, -4056, 9070, 2777, -4246, 9252, -6046, -7118, -7110, 26, -2592, 3611, 8765, -82, 7312, -1341, -5050, 6546, -816, 4837, 3876, -7238, -1406, -438, -9525, -9357, 1313, -6156, 5019, -1168, 5523, 6490, -7080, 411, -8505, 9483, -4865, 5814, 3795, -4375, -5435, -8083, 3936, 4172, -388, -6407, -3302, -5276, 48, 4680, 9941, -7240, -7717, 2598, -4490, -2115, 1359, 9920, 9520, -4542, -68, -1921, 9727, -1370, 4431, -3813, -6186, 2277, -4049, 3951, -5849, -2402, -6358, -3091, -9924, -673, 6645, 7244, 9775, -6938, 3389, 4175, 5796, 1979, 708, 5397, 4911, -1105, 5034, -885, -7528, 7229, 2708, -5472, 7482, 2632, -130, -5968, 3962, -7749, 1489, 1879, -9277, 7523, 4966, -8650, 1734, -9395, -5567, -9426, 7760, 2197, -6075, -765, -7876, -7563, -4708, 5407, -305, -621, -3847, -1635, -7201, -4323, 2616, -6852, -8577, -4165, -310, -8541, 4854, 5762, 8081, 7558, -4889, 5181, -2765, 8900, -3718, 3247, -4879, 8027, 7368, -2854, 3960, -2505, -3982, -9611, 9689, 9574, -2547, 614, 9456, -3530, -5188, -110, -6495, 6502, 2947, -6351, 4354, -4531, 9746, -3971, -9265, 8111, 6498, 2896, -9818, 5445, -8252, 1184, -2267, 9145, -9210, 8825, -4148, 854, -5023, 177, 5833, -4975, -4433, 1794, 3854, -7843, -1126, 7695, -386, 3686, 2776, -6252, 8566, -8199, -6737, 7937, 2576, 9723, 6972, 8975, -8867, 5717, 2463, 507, -7028, -8089, -7444, -6116, -1958, 5790, 4349, -3410, 249, 9389, -6387, -1366, 7020, 7137, 1792, -9765, 7483, 8109, 830, -338, 5084, -4399, -6196, 3873, -7539, -17, -6464, -3141, -2876, -2250, 2306, 9476, 2069, 868, 3130, -5602, -225, -6119, -2533, 6541, -7123, -2598, 4828, 6187, 8588, -2171, -595, 3867, 3603, -7067, 9614, -2011, -5381, 9431, 7050, 4905, -9028, 6705, -9444, -7916, -7630, 7165, -9648, 5539, 9244, 4459, -8093, 3171, -2962, -5753, -7563, -8311, -8267, 8357, 6293, -2595, 6383, 285, 241, 138, -2120, 6763, 7235, -7270, -287, 7509, -2307, -4931, 8942, -2120, 38, -5762, -716, 3798, 8264, -3479, 7438, -2376, -1406, 6279, 8378, -5048, 6129, 8046, 9106, 8647, -1416, 2457, 2115, 3708, -1609, -2612, -2632, 5842, -6521, 127, -3413, -9033, -3629, 6816, 8097, 6843, -122, 8561, -3815, -4071, 8813, -9694, -2391, 462, -4704, -7063, 5926, 3126, -4940, 6885, 2991, 2056, 789, 2896, 6113, -758, 2324, 550, 5910, 492, -360, -9597, 5271, -6947, -8095, -5955, -9273, 8388, 5500, -1849, -8193, 1257, 9314, -1415, 4412, 6524, -5456, -3005, 5703, -9030, -280, -2462, -1240, 6029, -8998, 8184, 2700, -5711, -7102, 1821, -4445, 188, 6495, 9629, 189, 8008, -1258, -9834, -515, 2541, 6088, 8820, -4863, 3783, 2289, -45, -447, 8742, -9984, -2776, -2756, -3781, 7101, -2770, -5274, 6513, 4810, -6965, -1888, -1448, 288, 9568, 6508, -4806, -9215, 6118, -4256, 357, 1487, -3355, -9685, 9325, -9872, 8859, 5500, -8717, -4569, 6864, 9493, -7871, -8250, 5581, 3019, -7207, -8381, 4127, -9201, 636, 8910, -8286, 7445, -5319, 3110, -9960, -4443, 7717, -7491, 469, -9733, 2504, 8757, 8792, 7978, -7983, -1237, 4711, -4436, 27, 3913, 9419, -2643, 6221, 704, 8415, -966, 7153, 280, 4860, 399, 6827, 7250, -7096, -3569, 1414, -7614, 949, 5483, 86, -2658, -9139, 5497, -5047, -1356, -5603, -4137, -8272, -3113, -3050, -3535, -5174, -459, -1956, 9838, 478, 3867, -2241, 9095, 8858, -1207, -6512, -1026, 7914, 6038, 9040, -8582, -3636, 3936, -4269, -7916, -4457, -776, -8233, -5919, -6336, 1817, 2860, 7623, 8386, -6934, -1148, 751, -6530, -6505, 8519, -132, -2182, -2471, -2302, 246, 8627, -5280, -5378, -1696, 5566, 8393, -3689, 4398, 2381, 6282, 8356, -5513, 5245, 3468, 8332, 4644, -1159, -268, 1426, -2780, -2080, -2964, -1461, 3134, 3991, -9850, 7510, -2952, 588, 5040, -6793, -7395, 8072, 1748, 9834, 3715, -7472, 770, -7322, -7480, -7795, -4427, -4732, -5619, -5705, -5358, 8987, 1301, 6831, -9233, 2427, 812, -9227, -89, -7051, 2626, -3528, 4141, -4545, -6135, -1886, -2078, -5859, 1509, 4627, 8319, 9387, 5575, 9683, 6262, 658, 1548, -6686, -8064, 1482, 4962, 165, 1734, -8851, -7809, -2441, -6408, -4110, 966, 7999, -9509, 4076, -6162, 3880, 4321, 9194, -3238, 3280, 2812, 9361, -9147, 9271, 636, -4687, 4254, -3434, -4746, 7998, -262, -1476, -6536, 1061, 2734, -3018, -2508, -6727, 3085, -7203, -8192, 8346, 7933, 9284, 2960, -9528, 465, -3000, -6344, -4696, 1006, 8029, 3982, -2806, 4312, 6675, 8175, 9439, -3130, 3356, -543, 815, -1284, 1845, -2952, 8968, 1073, -6800, 6039, -6528, -9650, 9755, 465, -6603, -6422, 5919, -9661, -4730, -7723, -7891, 1630, 3611, 5010, -9735, 8385, -9184, 8769, 7203, 5664, 5433, -3773, 887, -4148, -4990, 6817, 2485, -4149, 786, 9, 826, 7650, 4750, -6370, -4027, -8480, 8263, 4244, -3506, -2725, 9275, 1479, -3666, -7080, 9642, -2460, 5652, -2460, 4576, 9627, -2929, -1853, -5807, 9073, -4949, -131, 2340, -8010, 1174, -5988, 4926, 4700, 3770, -3495, -9280, -7512, 5484, -9719, 5524, -3705, -5998, -7390, 319, -1669, -5372, 480, 620, 9703, -7814, -3431, -738, 9905, 4746, -4800, 7568, -1321, -9205, -2062, 1026, -4656, 5626, -6067, 6305, 8972, -7353, -9054, 3681, 7592, 5666, -7463, -1613, -6345, 7360, -8962, -3108, -2889, -2485, -8682, -8499, -2528, 3974, -8385, 7222, -9766, -4246, -2025, 2432, 9054, 6304, -8587, 756, -1705, 4115, -5779, -6727, -2528, 6384, 1356, 6769, 7528, 2429, -9200, 7076, 6675, -9432, -2797, 6389, 3915, -5104, 5659, 4556, -7691, 4188, 7827, -9666, -5457, -6660, 6651, -8753, 5776, 6479, -6063, 3634, 8834, -4133, 3874, 9291, -4749, 9537, -2658, 6684, 4032, 9113, -9359, 7306, -4535, -9750, 6593, 808, -2619, -8677, 7076, -3619, 9099, -5384, -3536, 9754, -9551, 7893, -3795, 8616, -2733, -5835, 8134, -6529, 4070, -2582, 7000, 7202, 8583, 962, -2334, -4595, 1659, -612, -5960, 7697, 171, 7545, 7806, -8500, -3457, 5106, -1347, -2632, -1834, 955, 4691, 9677, 8384, 7898, 1926, -620, -100, -791, 9890, -6752, 4095, 4454, 7574, -6311, 994, -956, -1794, -9064, 7578, 9728, -8494, 5104, -4446, -694, 6847, 8556, -1243, 1677, -4689, 1310, 1423, -5892, -7633, 5116, 337, 7386, -8531, 4016, -5370, 5363, -3488, -6686, 6325, 7400, 9745, 9444, -3337, -6558, -9799, 8454, -7202, 7505, 8135, 28, -4494, -7486, -5103, 6295, -6076, -9847, 7337, -2599, -8809, -3517, 6423, 607, 8090, -6319, -8320, -6637, -5008, -6933, -1344, -3612, 2544, 733, 5186, -8785, 3537, 6570, -9586, -9517, -7417, -3749, 3408, 2258, -2977, -8973, 6535, 4760, -3340, -6304, -7140, 8363, -7757, -3083, -7064, 6458, 2839, -4098, 7121, 4553, -6461, -5926, -2010, -1390, -7792, 9667, -1201, 7751, 5576, -8861, -2741, -4894, 8830, -733, -1695, -8198, -8046, -7336, 6017, -4401, -7988, 3899, -8552, 5763, -9353, -1210, -9716, -2596, -4615, -3924, -977, -4526, 248, 1194, 5897, 8889, -8405, -5864, 2019, -4988, -8442, -6644, 7110, 1443, -3438, -5223, 5993, 5298, -4548, 5192, -6357, 3421, 1344, -4824, 2604, 3400, -6588, -9758, -9549, 5220, -7985, 1622, 7972, 7220, -5070, 5554, -28, 6286, -2688, -5878, 349, 9490, -7226, 2308, -6211, 8651, -9788, 3135, 1648, 7153, -275, -1533, 6500, -4925, -3091, 8228, 3398, -9872, -6, -1221, -3651, -2358, 4933, -1839, -6656, 5853, 2708, 1575, -4232, 1907, 5679, -5505, 9044, -36, 6218, 6547, 9162, -4885, -3567, 1697, -3546, 7123, 4663, 1182, 1993, 3040, -8431, 5266, 3574, -6961, -4352, 1205, 3929, 960, 4129, 887, 2557, 9514, 8245, 5339, 3321, -8784, -1939, 1396, -6491, -7299, -1995, -5691, 3703, 4551, -6630, 3347, 6697, 5503, -8003, -8299, 3446, -3912, -283, 1905, -4749, 7851, -5357, 8289, -1022, 8977, 6752, 1027, 5218, 5749, -1390, -7878, -8302, -2956, 9333, -5894, -7264, 8386, -5487, -4197, 9021, -7678, -3778, 7021, 1805, 3172, -2648, -6600, 3970, -471, -6980, -9376, 9911, 6763, -9630, -3879, -1725, -2283, 32, 5672, -90, -7204, -3646, -3219, 324, -6831, 812, 7463, 9737, 7911, -5950, 9241, -4016, 1101, 4096, -8062, 7719, 8358, -2809, 7226, 3437, 4756, 8556, -1722, -8361, 2083, -802, -8289, -2612, 8367, 3817, 3497, -5463, 1880, -6572, -6303, -8692, 1218, 8106, -9945, -7591, -1399, -6985, 3528, -6858, 622, -8805, -1197, 3252, -3472, -2203, -8111, 8165, -3165, -6743, 3500, 5799, 1909, 3591, 2765, -1338, -7465, 7061, 7692, 4942, -2245, 7716, -1976, 6713, 9374, 9970, 4719, 5613, -4579, 5080, 7026, 7238, 7063, 2229, 5724, 4176, 4491, -6308, 9084, -2899, -6153, 5558, -7709, -2002, 4319, 600, -6667, -5208, -6692, 3672, -4122, 8991, -928, 4146, -4457, 331, -9404, 4514, -7408, -2397, -3415, -2643, -5954, 9634, -873, 5658, 9406, -4302, 7632, -4738, 848, 9227, 7761, -3686, -2575, 119, -4675, 2962, 334, -6038, -4185, -9902, -5670, 731, -3415, 393, -9247, -5083, 5392, 219, 9055, -9102, 5848, -8267, 445, -8138, 8877, -2292, 6390, -6174, -6195, 7160, 7681, 4217, 7731, 8276, -3606, -7284, 9195, -4871, -8385, -9438, 4853, 9710, -2470, -6606, 5847, -3173, -4266, -5267, 7452, 3094, 3889, 7724, -1276, 1509, 2611, 7628, -4762, 1952, -218, 9337, 4044, -8668, -8782, -375, 8573, 5288, -8789, 2971, -2265, -1121, 7713, -6521, -3312, -9521, -3878, -7795, 2657, -4548, -7034, -6110, -3236, -5986, 329, -3352, -2747, 1281, 7207, -9021, 238, 8496, -1522, 726, -5266, -6960, 5518, -4635, -6923, -1115, 570, -974, -5213, -5000, -3368, 9649, 4649, 2649, 1073, 5349, -6154, -4432, 5258, 7263, -2682, -8015, -5731, -7067, -8402, 4115, -7596, -8611, -3264, -1, -7624, 1913, -2162, 6351, 6586, -2681, 1800, -2675, 4995, -7506, -7134, 6597, -7518, 9002, -1894, -6458, 2592, 6624, -8991, -949, 8832, 6196, 1469, 4284, -6275, -5625, 1274, 5597, -6067, 3241, -1332, 8802, 131, 1040, -6865, -5150, -813, 2122, -6552, 4228, 3917, 9919, 235, 2487, 986, -5325, -4985, 4933, -1657, -2326, 4372, 3625, -8788, 7056, 4442, -1307, 4392, 3653, 6366, 5700, -5086, 299, 7164, 7060, -4416, -9755, -2324, -6229, 3749, 7740, -1782, 6459, -2451, -2433, -6718, -5652, 3648, -7351, -3327, -6507, -4876, 5253, 7690, 6919, -1904, -8182, -5803, -6679, 808, -8976, 3554, 4508, -9627, 6076, -342, 909, 4831, 5187, -5207, -3068, -5868, 3839, 9005, -4564, 6903, -2591, -5533, -2963, 9475, -5267, 8815, 9533, 9342, 3548, 5878, 1929, 8772, -3595, 7035, 8275, 1454, -6379, -91, -8824, 6792, -1349, -1233, 301, -4630, -8350, 9778, 7027, 7286, 4213, -2644, -5035, 2301, 2591, 8084, 2379, 4961, 616, -5880, -8653, 9164, 1131, 2664, -6601, -6491, -8979, 4532, -3712, -8698, -1009, -9098, 5718, 1578, 9787, -7534, 9316, 7735, -8391, -7004, 2123, 3155, -520, -4275, 5906, 8682, -9185, -6426, 3072, 2788, 4191, 724, 1029, 3060, 5321, 1004, 8395, -7641, -4445, -5787, -122, 5232, 7843, -5352, 1385, 7609, 5933, -4516, -5752, 3905, -5221, 5755, -6566, 9528, -9417, 1613, 1202, 585, -6656, 3638, 2124, 652, 1363, 2957, 4632, -6467, -4016, -6505, -5289, -1640, -5477, -6458, -2035, -9067, -4090, -4845, 5665, -3771, 2348, 7098, -2554, -7131, -445, 5610, 3024, 7373, -7580, -8406, -639, 1436, -5441, 1649, -6524, 6755, -1493, 5044, 6420, -3716, 1674, -6440, -2124, 564, 6359, 7516, 1436, -2458, -7988, -1575, 4999, 602, -1498, 119, 9857, -6308, 1148, -656, 3939, 4569, 6258, 4102, -3163, 9973, 1603, 3623, -5807, -6289, 8086, -791, -1802, 1488, -1734, 4986, -3532, -3588, 4806, -8615, 7952, 1716, -9163, 1740, 525, -4217, -9272, 9195, -7448, -3388, 4103, 4138, 6317, 6614, -9398, -71, -3409, 9096, -1935, 5450, -5988, 8534, -9149, 5346, -7187, 2360, -839, 3306, -9524, 4215, 232, 8266, 7205, 8128, 1361, -1745, 4839, 546, 6739, -591, 9009, 9393, 667, 7370, 8919, 8992, -6903, 6699, -9288, 9740, 4991, -8800, 8277, -7355, 4508, -1599, 3927, -913, -3216, -3452, -9168, 642, 2157, 9755, -4319, -6316, -1240, 7420, 1930, -7270, 9365, 1412, 7333, -8307, 717, -1674, -7594, 5062, -8136, -7898, -2294, 8065, 1310, 5964, 3069, -5677, -9435, 5239, -7038, 4165, 4471, 9593, -6367, -1977, -6781, 9576, -9277, -4228, -7868, 7937, -5129, -1371, 1400, -6080, -5669, -5848, 9405, 8540, 2940, 6484, 4850, -6571, 5381, 3705, -8700, 6196, 8303, -5394, 4916, -3754, 4126, 1609, 3928, -1416, -6262, 8182, 4575, 8608, -6543, 9130, -4756, 7043, 465, -8841, -5439, -5098, 3315, -2022, 9591, -4818, -9263, -6233, 4934, -1346, -3067, 2994, -3460, -6612, 6847, -1811, 1037, -9279, 5968, 1060, 624, 1191, 3968, 7432, 7639, -3012, -6272, -9730, -3101, 4458, 4504, 855, 8544, 5938, 8113, -5819, -1974, -4125, -1263, 3226, -694, -1118, 4495, 6544, -61, 5250, 7459, -9908, -4176, -9453, 734, -2796, -4503, -6844, 6293, 5652, 7131, -1110, -8442, -5736, 2232, -6320, 9732, 3210, 6107, -9917, -2712, -3765, 7076, 4850, 1938, 6849, -7851, 6345, 5479, 917, 1160, -1779, -6762, 5379, -8863, -4938, -3337, -3301, -932, -4641, 7921, 1801, 1872, 6219, -2858, -968, 9513, 2822, 8296, 1001, 6963, 9050, 2222, 5258, 6137, -7979, 0, 5586, 5009, -8954, -5628, -8244, -2549, 7045, -4674, 3343, 3766, 8111, -92, -1664, 7199, 4528, 6529, 4522, 2505, -8454, -9438, 1227, 62, -4114, 2859, -1567, 4957, 9610, 9034, -603, 1085, 3642, 3821, 3308, 6902, 1656, -2059, 7684, -7923, -4209, 2511, 7532, -984, -7024, -7490, 6416, 8649, -519, 9154, 59, -9164, -4314, -5461, 6945, -469, -3136, 9018, -9542, -2242, -3687, -4387, -8112, -6868, 1827, -1541, 9830, 3238, -6191, 1606, 104, 707, -5731, -5893, 5091, 9273, 3306, 5276, -3226, -7506, 625, -2499, -9860, -6351, 6961, 369, 8993, 3548, 3293, 1245, -6410, -1884, -910, -4155, -8763, 6845, -5203, 5561, -1234, -8130, -9340, 915, 1344, 4525, -225, -5899, -7334, 8400, 2647, 7746, -9644, -4209, -5513, -8586, 7520, 1243, -8483, -9966, 9926, 2302, -3213, -8766, -8577, -5828, 7980, 1136, -6475, -3115, 1371, 790, 9041, 2200, -5312, -690, 4260, 2110, -1642, -2826, -1943, 8178, 2395, 992, -8188, 6685, 5509, -9933, 5784, -6918, -5233, 532, 1482, 3088, -839, 3295, 1234, 1849, -6283, -6609, -8779, 8649, -9037, 5549, -2900, 2348, 4809, 5313, -1460, -7430, 8598, 562, 6644, 5371, -6421, 5412, 4650, -8295, 5072, -6696, -5450, -8861, 1148, 2751, 1712, 2568, 8582, 4617, -5677, 4414, 5305, -8542, -4680, 3397, 5823, 5060, -8951, 2544, 8220, 1700, -9894, -6427, -9596, -403, 7148, -64, 3630, 757, -7046, 4275, 7027, 364, -876, 4261, -7188, 2343, -4936, -8047, 9178, -354, 1208, 539, -8599, -5946, 3576, 8616, -2532, 3857, 357, 7419, -5811, -4285, 4742, 5799, 7218, -7712, 5834, -7932, 1555, -3091, -2946, 5193, -4243, 1368, -2291, 5770, -8010, 1734, -1490, 1746, -6588, 2383, 8987, -5773, -6826, -4107, 6273, 3717, 8451, -7157, 7663, -1688, -760, -1368, 1511, 9198, 6841, 7104, -6136, 867, -3422, 8017, -2796, 4024, 8443, -1091, 1205, 9113, -4569, 2656, -2726, -6093, 8945, -749, -9746, 6514, -8651, 2651, -9948, -3849, -1712, -8537, 6514, -1953, -5386, -808, -4583, -2773, 7332, 5664, -3951, 5248, -9635, 861, -4776, 1455, -2444, 2030, -6336, 3499, -4213, -2214, 9198, -3760, -2613, 2663, -6915, -6181, 7715, -997, 3843, -424, 1743, -6620, -7631, -6131, -1776, 1706, -8692, -2174, -3467, 221, 1008, -1466, -1186, 6609, -3859, 3919, -9138, -4874, -9284, -7950, 8726, 6573, 4368, 4677, 8842, 6619, -5794, 3623, -2879, -338, 956, 5204, -9746, -5754, -4531, 5406, 5499, -6704, -967, -5011, -4167, 729, -3764, -6741, -2984, 8411, 2926, 4338, 3353, -4558, 4283, 9884, 506, -4753, 1767, -3730, 9344, 1859, -6611, -7955, -1191, -4078, 5931, -2713, 4932, 542, -6787, -2380, -2565, 5137, 6897, 5902, 7194, -6762, -3752, -7582, -3949, -6477, 878, 1404, 8721, -8922, -1976, 8128, 6059, -8607, -7773, 7048, -7601, 1630, 2404, -8554, -8770, -8411, 8413, 5625, 4829, -3535, 4889, -4302, 5769, -6141, 5172, 2567, 9, -3816, 2039, -347, -4787, -7290, -1833, -4328, 1030, -6565, 1691, 1759, -1448, 6695, -5352, -4785, -9864, -9058, 9024, 1400, 8450, 2220, -4193, 7460, 3455, -737, -6659, -980, 5727, 3860, 5143, -5464, -8024, -1231, 5666, -6908, 5381, -8731, 5470, 4179, 6890, 5843, -1773, 7940, -8390, 6666, 9909, 3791, 7077, -3287, -4198, -399, -6942, -1385, 266, -8203, -6190, -4995, 18, -7196, -1023, -4564, 1552, -4363, -3607, -8822, -494, -6598, -7924, 2894, 7564, -2285, -2058, -6437, -2208, -4060, -4064, -8739, -7325, 3859, 8544, -3409, -7376, -3614, -535, 5719, 3492, -5861, -4303, -2236, 4080, 2808, -2313, 2634, -5998, -8936, -4840, -1668, -7322, -8017, -9936, 1260, -5602, -472, -3223, 177, -3367, 3425, -2503, 6998, -1610, -7102, 2324, -6209, -7364, 4972, -5428, -8322, -1941, 3437, 7915, -249, -484, 4992, -1819, -6093, 7245, -7796, 3737, 5233, 3459, -8131, 8860, -1420, 4669, 2228, 2669, 6471, 9506, 2930, -2511, -3380, -17, 9590, 8248, 4528, 7667, -6014, -6627, 8263, -3518, 5147, -9148, 6840, 4748, 6915, 3487, 6697, 4845, 6651, 3724, -1573, 8492, 4894, 9949, 7294, -5898, 8852, 7229, 8177, 1940, 3578, -6339, -5202, -2092, -2921, -9858, 8365, 3977, 8742, -924, 5620, 6055, -4951, 6372, 8016, -3799, 7241, -4962, -2709, 3925, 3290, -4279, 1718, 9001, -7163, 9479, -4951, -3888, 3109, -6472, -6197, -5289, 6830, 9016, -8451, -8865, -390, -8468, 2679, -4386, -2507, -1828, -6053, 8435, -7398, 6097, -1892, 8710, -6319, -8660, -6489, 7896, 7622, 794, 9124, 4055, -3336, -7825, -2743, -495, 5521, -354, 9890, 8387, 5036, 5648, 5213, 7430, -7844, 7553, -3050, -4719, 8956, 8654, -5791, -9373, 3099, -2764, -6261, -8900, 7283, -3774, -9660, 2650, -1259, -3283, 7772, -5896, 2161, 1783, -4099, -1894, 9493, 9007, -7267, 6949, 8366, 1328, 2974, -5462, 1903, 189, -935, 575, -2258, 907, 1285, 2918, 6149, -7512, 8194, 3685, -1459, 9591, -12, -6405, -1967, -1442, 2571, 9182, 8814, -3716, -5745, -6814, -5322, -751, 4932, -1827, -6989, 6072, 8529, -1526, -9333, -7269, 8374, 4855, 3786, 6664, -901, 1175, 3669, 1856, -1040, 5902, -2947, 4722, -8948, -8586, -8262, -2664, 4983, 4374, 2464, -3816, 4278, 6793, -5439, -3839, -4449, -5889, 2471, 872, 763, -7504, 5252, -4142, 5955, 1780, -5799, -620, -1570, 1491, -1474, -7967, -7533, 4386, -9641, 5540, 8756, 1064, -8925, -6344, -2311, 7369, 1375, 3134, 6636, -9236, 5650, -5352, -7473, 9622, -1374, -8017, -8643, 8004, 9178, -4234, -8614, 99, -2849, -9559, 6206, -6182, -484, -8453, 771, 3730, 38, 5349, 3760, 790, 325, -8524, -8532, -4162, 5339, -267, 7622, -4576, 9851, 2185, 2680, -477, -5878, 1648, -1622, 2243, -6060, -6227, -3526, 6802, 6227, 1825, -1758, 3946, -569, 8934, 4788, 3913, 9177, 399, -1947, -3932, -8009, 379, 7248, 1457, 4605, 1251, 1339, 2540, 8571, -4258, -1554, -6480, 6438, 2641, -7766, -5828, 3110, -6945, 6670, -7075, 9622, -7852, 7053, -8674, 1839, 8376, -785, -449, -843, 3249, 204, -5051, 5076, -5235, -8325, -8489, -7638, 2971, 6171, -2585, -2170, 99, -5472, 7299, -9543, -4956, 5916, 3374, -9846, 6815, -4601, 9044, 4781, 5534, 4700, 8074, 4299, -3036, -5967, -9322, -7369, 85, -9298, -6775, -971, -7118, 2608, -6318, -9603, 2610, 1130, -8866, -7077, -9800, -3749, 2895, -3409, 4560, -4744, 1304, -1172, -5669, 3465, 3030, 5228, 6722, 764, -2481, 4982, 4748, -9937, -525, 4171, -4287, 2175, -2467, -675, -3906, 9570, 2726, 2303, -9257, 6296, 1165, 5619, -7709, 2101, -6159, 7769, 8871, -5157, 1484, 7167, 2150, 6819, 9492, -7281, 5870, -7868, -2915, -797, -3757, -4563, -1438, 1265, 6425, -1730, -8388, -9230, -1675, 3868, -9808, -3128, 1380, -7209, -1243, 9374, -6437, -4523, -8895, 2038, -2288, 1647, -3315, -1755, 407, -1161, 9697, -4530, -9177, -9128, 6484, 6824, -6836, -6343, 5827, -4741, 4155, 5446, -250, 8735, -4079, -175, -7968, 3320, -9184, -8262, 7675, 3556, -1695, 1535, 300, 8573, 9455, 407, -8974, -1500, 7114, -6441, -2491, 7212, -7019, 2591, 8874, 1523, 1794, 9670, -5366, 3871, -8832, 7066, 6511, 2509, 9964, -2273, 8641, -3433, 4064, 350, 1461, 155, -9251, -9768, -3008, 1840, -2249, -5426, -29, 942, -6171, 9095, 3305, 4508, 1585, 6043, 5689, -5057, -157, -6818, -3829, 1237, -7424, -5829, 9683, -4140, -5143, -7057, 2321, 4844, -8497, -7020, 5274, -387, 9187, 7906, 5942, -7617, -6036, -1419, 3925, -3760, -4533, -2310, -8066, 4099, 8501, -1889, -6681, 5589, -396, -1272, -5562, -4517, -6473, 136, -8681, -2786, 9740, -1411, 2560, -627, -4909, 5802, -8868, 2309, 5528, -1366, -9370, -7711, -7409, -8685, -9405, -1145, 1025, 3566, -967, -5181, -5208, 7801, 1454, -4424, 3820, 9017, 5826, 7198, -3903, -3765, -8389, -9327, 9979, -4648, 4380, -9040, -3239, -6440, 9814, -5809, -6637, -6703, -979, -5083, 5426, -78, -2035, 3108, -8695, 280, -2721, 3128, 2521, 2888, -5845, 1963, 6058, 8, -4076, 6766, -4949, 7531, 9991, 2710, 8550, -1717, 1644, 2774, 6634, -6619, -8125, -166, -9431, -7962, 4022, 9285, -8882, -4004, -8953, 695, 4481, -5022, 2291, 8378, 3325, 6815, -2846, 1333, -4866, -8106, 4276, -5526, -9927, 5435, -4753, 5220, -1757, 4846, -6708, 378, 697, -488, -9362, 3792, 3734, -353, -8462, -7516, 3005, -908, 3279, 7805, 4171, 4742, 3680, 7294, -4755, -6875, -498, -3147, 748, 5360, 4850, -8956, 3585, -6592, -5930, -8621, 8707, -4073, -4967, -1807, 8462, 656, -5905, 7651, 5132, -1640, -7065, -4387, -2157, -2002, -1383, 2565, 9865, 4297, 642, 6701, -2967, -6678, -1750, 6089, 4362, 4142, -1393, 6860, 9876, 3030, 3245, 551, 5478, -5458, -9139, 102, 2559, 8526, 656, -9996, 3980, 7590, -4411, -4470, -9488, -9088, -5222, -360, 2009, 1681, -2867, -7954, 5819, 6791, 8307, 8697, -3321, -8942, -9691, -5634, -7380, 8029, -778, -1555, 9422, -8536, -1446, -2468, -2080, 889, -1936, 527, 4245, 2096, 3255, 9050, 1154, 5020, 7373, -4845, -5175, -6752, -1139, 6222, 5858, -4223, -6459, 1129, 2109, 4240, -6386, 3724, -5116, -3516, -3018, -290, -698, 2466, 8353, -4524, -9587, 1195, -1377, -3238, 1534, 753, -8947, -9522, -4462, 8004, -8367, -1511, -40, 219, 4172, -2193, 5598, 7397, 5972, -3694, 3143, 4356, 5281, -61, -8187, 1735, -6896, 9844, 9973, -3120, -6745, -6012, -3086, 6784, 8163, -7630, -3303, 7621, 8891, 3522, 8602, -4935, 1882, 547, 8048, 7502, -1524, -5350, -8690, -2427, -9381, 698, 8855, -5186, 4142, -3304, 439, 7630, 3932, 1573, -7402, -9283, 6189, 3881, 8642, 286, -5909, -1128, 6784, -7600, -5777, 5228, 9257, 2475, 8274, -7493, -9408, -5893, -8579, 8673, 8251, -5771, -5111, -462, -6304, -3634, -4207, -1028, -8313, 1762, -2787, -399, -9748, -1420, 3959, -9575, 1155, 1283, -1988, -8953, -7771, 2775, 6920, -9021, -1157, -6176, -7395, -3558, 1866, -276, -3800, 337, -5786, -5257, 4651, 4491, -1827, 7350, -6168, -747, -4453, -8190, -4022, -8090, 9031, 8045, -3907, 7194, 7132, 8676, 6353, 293, -2197, -3321, 4156, -8074, -8001, 4622, -1123, -6410, -9707, 7316, 2497, 1957, 5489, -4805, 5153, -318, 4123, -7783, -1937, -4570, -7451, 2970, 3713, 5442, -7999, -3506, -2354, 1156, -9326, -4208, -3908, 1281, -8338, 7844, 6309, -7644, 6331, -3625, -247, -725, -241, -5458, 2052, -9682, -3533, -4186, -4429, -5256, -9795, 4892, 3325, -3186, -9897, -9309, -4194, 9471, -2076, -9543, 312, 1534, -2618, 1757, 4562, -7013, -5735, -390, 4743, 6258, 7400, -9173, 9103, -4489, 6787, 2811, 8904, 7511, 1535, 7570, -7659, 8707, -3658, 2606, 4131, 2653, -4713, -7868, -2739, -8946, -6795, 3983, -1872, -4144, -2036, 5643, 4752, 153, -2763, -9240, 8788, -3475, -677, -3225, 2524, 3416, 2039, 7734, 2073, -6770, 5836, 4783, 5130, -3919, -7761, -5921, 9470, -813, 594, 8236, 5731, -2279, 5952, -3593, -5824, 6766, -7824, -752, 359, -5997, -8296, -1925, -5228, -8507, 6317, 7011, -5413, -7211, -769, -779, 9691, -923, -7938, -2568, 7263, -2268, -3943, 1901, -4511, -9814, -5, 5004, 433, -5792, -9439, -4793, 7697, -2717, 1639, 278, 1979, 6716, -8566, 4965, 5974, -6043, 6230, -4571, -8025, 7472, -2902, -3467, -2117, -8092, 7695, -8476, -7029, 6000, 3929, 8052, -8777, -7664, 4789, 9121, 3001, -6887, 1987, -8325, 4602, -6159, 1433, -7813, 8480, 4689, -9582, -4680, -6759, 9710, -9802, 2775, -5298, 6151, -1624, -8289, -8083, 9098, -4289, -2049, -6269, 3072, 3630, -4818, 8840, 7189, -8993, 7812, -7391, -4434, -4962, -8328, 5744, -3042, -3556, -2666, -9464, 1692, -6263, 8588, 2196, -8992, 6732, 2689, 6590, -7861, -8379, 7644, 5254, -9492, 7971, 2026, -904, 8663, -130, 7299, 8874, 3450, 3280, 9209, 177, 1228, -4139, 3578, 7034, 183, -4246, 8678, -2442, 4086, -1083, -9571, 415, 637, -2921, -8614, 5173, -7557, -7992, 8156, 5610, 9545, -862, 6357, 2035, 1978, -6181, 4062, 5770, 9231, -4440, 8904, 4755, 9506, 9185, -6098, 5920, 5508, -2097, 9379, -3222, -8253, 3320, -6386, 7425, 3971, -8312, -9902, -4238, 1803, -3793, 8399, -742, 5263, -6073, 6798, 86, -8411, -1375, -814, 68, -7283, -1246, -8292, 8032, 8967, -6600, -1623, 2548, -4540, 3437, 2531, 6177, 3414, -196, -9056, 8256, -9023, -6734, 9724, 9827, 483, 248, 9459, -9776, -956, 8213, -7279, -5596, 8369, -5346, 1598, 9985, 6708, -5477, -954, 3274, 6015, -1644, 6605, 610, -6220, -3881, -282, -1687, 4590, 9051, -8989, 5519, -8351, 4838, -1505, 3477, -4585, 497, 7771, 9150, -9521, -6825, -2178, 675, -2671, -2225, -8280, 2259, 8290, 961, 5244, 5332, 6279, -7329, -5301, 6754, -1276, -7889, -9848, 7129, -8105, 9684, 5795, -3370, 8750, -4977, -8941, -9403, 3282, 352, -9614, -3181, -6617, -3521, 4205, -5541, -3128, 3354, 9612, 9069, 2210, 192, 5607, 5671, -1002, 7029, 2950, -7336, 3559, -8041, 53, 2127, -9309, -189, 8986, 8016, 8946, -4414, -5115, 9049, 4162, 7770, 7708, 2305, 5202, -6384, -9268, 9659, -2966, -6660, -7656, 4981, 1968, -9456, 3275, 3878, 5698, 9535, -246, 1630, 4583, -3662, -8022, -7905, 7584, -327, -7133, 6813, 1375, -689, 8500, -1821, -2209, 5670, -4686, -7902, -7665, -3814, -1857, 2010, -1500, 5907, -4875, -3794, 8414, -5920, 8335, 8217, 2919, 4787, 8853, 3801, -3384, -8635, -6331, 9739, 4507, 9796, -7618, 4435, -5046, -3575, 5413, 6535, -6106, -5815, 7165, -6548, 7272, -1687, 7043, 1402, -3896, -2704, 2987, -7108, 3544, -3590, 6389, 4010, 7034, -8864, -6490, 4233, -1244, -1336, 4140, 4091, -8516, -4686, 5392, 8620, 4202, -419, -1576, 4239, -8494, 4812, -8791, 9330, 2353, 7061, -498, 7472, 2188, -7329, -6051, -2876, -9038, 929, -5426, -4183, -6533, -4644, 8646, -9976, 7645, 3558, -6424, 9685, 8981, -4574, -7889, 1991, -4723, 9435, -4093, -1008, -5528, -5315, -9571, -2897, 7014, 6840, -1543, 446, 1939, -5573, 3591, 5451, -8874, 4050, -5000, 2096, 4039, -4099, 3025, 5389, 7839, 8597, 9965, -5687, -1215, 1500, -3391, 9777, -8615, 1370, 7164, -2124, 4089, -773, 7884, -7992, 9651, -1994, 7718, 3515, 3545, -8482, -1937, -9804, 3975, 7339, -2232, 1808, -7916, 3368, 2239, 1833, -4844, -963, -5845, 2796, -1380, -8275, 4218, -6821, 1459, -2526, 8247, 3201, -922, 827, 3152, -4877, -6020, 7459, -2533, 4739, 1798, 9564, 892, 9227, -1415, -2011, 2490, 6177, -546, -8337, 6362, 4360, -7431, 789, -9376, -314, 45, 6005, -7800, -3309, 9643, 1265, 4713, 9861, 3609, 4032, -7488, -4980, -2685, 72, -5540, 7163, 9199, -7351, -5279, -2219, 5766, 349, -3830, -6394, 1565, -5587, -1148, 1938, -3146, -1592, 1424, 9958, -6319, 8953, 9875, -4561, -7254, 9128, 1678, -2420, -996, -6432, -5179, 1889, 8328, -3700, -9195, -3601, 4272, 4117, -1147, 6562, 3345, -8644, 6116, 8996, 3588, -5179, -1932, 3081, -5834, -9459, -1338, 672, -1657, 3588, -4054, 6486, 4591, -5748, -6045, 1774, 4665, -7809, 4295, 922, -1545, 6544, 9143, -8750, -8304, 8343, 6651, 3264, -8098, -6213, -9594, 56, 690, -8185, -3984, -3948, -5445, -879, 6091, 2799, 7464, -8278, -8956, 8467, 6191, -2808, 4239, -8159, 3741, 6014, -2151, -4697, 5276, 4575, 5781, 6956, 9750, 6477, -8860, -29, -5967, 9193, 9146, -1165, 1033, 2573, -9642, -2708, -4843, -6020, -3311, 3957, 8412, -8742, 6642, 8974, 8946, 9590, 5994, 322, 5527, 7815, -9300, -7541, 5806, -5566, -9129, -8380, -2579, 8263, 9109, -4698, -5582, -4414, 8098, -6610, 2123, -2412, -125, -3291, 5346, 4304, -7572, -466, 8620, -5542, 9868, -7277, 5499, -4288, 4085, 6811, 3318, 8604, -3233, 7931, 310, -4596, -3217, 6652, -368, 2961, 6896, 4541, 8801, 7264, -5103, -6957, -6528, -4588, -9260, 965, 8425, 7284, 8150, -2760, -1335, -7011, 3490, 6051, 5182, -9191, 5723, 4714, -2574, 7172, 268, -7414, 5119, -1311, -515, 6422, 9649, -4779, 6095, -1349, 2093, 1338, 6803, 5292, -850, 1974, 7334, -1995, -6308, -8241, 94, 5270, 1531, -4068, -5871, -3052, -1045, -7837, -7479, 4865, -5240, 5744, -2439, -5752, -9229, -9718, -478, 6664, -3399, -8318, -970, 1822, 4725, -9070, 142, 6335, 1879, 5438, 4167, -715, -6697, 3872, 3442, 1669, -1520, 1632, 3466, -2925, 969, 6702, -2541, -1287, -3384, 3240, 7185, -8578, -8290, 9119, 7529, 2059, 7367, 3328, -7294, -7437, -405, 9546, -4315, 1653, 7191, 2970, 3963, 5075, 2162, -9259, 4830, -5792, -3722, 2851, 7099, 9881, -3890, -8414, -3373, 9951, -3292, 4164, 4509, 3182, 2350, 7078, -7703, -3034, 1008, 7902, 8916, 134, 886, -2665, 2707, 608, 2290, 3535, -2822, -4815, 8453, 3394, 2829, -9706, -696, 8918, -7002, -4507, -9118, 8873, -4041, 6656, 1623, 2311, -1176, -1933, 3632, -4462, -4649, 1835, -9269, 7293, 7576, -5567, 2656, 7558, -2858, 1873, 7661, 4086, -1603, -8780, 9029, 549, 6758, -9685, 1239, -7120, 6158, 9044, -4728, -2905, 6905, 7727, -8752, 9767, -3469, -8162, -7521, -9154, 316, -9320, 1614, 2325, -6324, -4043, -1607, 3695, -1278, -2715, 4403, -7207, 3145, 1093, 121, -1760, -5858, 3736, 5522, 8540, -1118, 8782, 8310, -2406, -7465, 3912, -4016, -5873, 5861, 4760, 6830, -6435, 2905, 7014, -2812, 8831, -5615, -5818, -4931, -6274, 5104, -2266, -260, -1623, 7270, 2602, -7507, -5305, 3854, 4192, 9926, -4705, -3061, 5096, 6583, 6534, 2075, 9591, -3703, -4112, -6002, 3472, -9826, -4063, 185, 6708, -4955, 5826, -6754, -8770, -6665, 5384, -7269, -277, 8268, -2937, -1889, -4863, 271, 5507, 9011, 7739, -2764, 1503, -58, 8561, 6149, 8268, -5281, 7392, -127, 6608, 6763, 174, -833, 16, -298, -9230, -788, -998, -6085, 6310, 2943, -6816, -2122, 6747, -2085, -19, 6614, 8234, -9488, -2406, 991, -6611, -3220, -8989, 7255, -8603, -7854, -7754, 99, -3082, -5522, 6060, -444, -8647, -7045, -1307, -8987, -1893, -932, -4322, 4643, -7080, -1017, 8695, -2775, 9913, -4085, -1224, 6385, 8344, 4977, -4927, -2772, -5388, -8974, -3798, 5893, -9639, 3769, 4176, -2707, -9933, -7774, -2056, -3001, -4123, 8114, -8807, 5517, 425, 8878, -5484, -5514, 902, 3335, -3440, -1179, 5861, 2678, -2847, -9804, 9984, 6547, 102, 6175, -3994, -6638, 3069, -5169, 9244, 3742, 6606, -7130, -6090, 1764, -4250, -2166, 7518, -6899, -9677, -457, 7403, -9122, -4563, 2998, -6054, -3580, 4712, -2631, 7088, 9452, 422, -3886, -3225, 3663, 5647, -7809, -3228, -7902, 6686, -9327, 3096, 5037, -8478, -1961, -3461, 5427, -6787, -1230, -8697, 2993, 6420, 2887, -6269, -7755, 2220, -5093, -2363, -5377, 6644, -167, 907, 8073, 4842, -9292, -2034, -8326, 8305, -1334, 2106, 8598, 1990, -5988, -5707, 3541, 7764, 3414, -9088, 7525, 1648, -1246, 584, 8646, -6669, 9300, 7534, -8723, 9271, -8092, -9587, -6263, 7961, 9398, 7606, 64, 9097, 6697, 3246, 1053, -6291, -1081, -7631, -7537, 2390, -2162, -9131, -7718, 8385, 8174, 4891, -4039, 296, -6128, -9669, 9324, -3813, 8654, -5050, -4505, 8998, 5626, 2324, -9698, -2830, 6191, -8885, -7013, 7553, -1690, -2555, -4651, 4975, 7866, -2331, 7992, 4959, 8764, 3176, 8092, -9995, 5605, -6728, -4446, -7176, 535, -8572, 390, -1735, 1154, -6121, -5178, -8432, 9567, 1404, 7399, -6246, -7785, -8614, -8139, 4812, -8344, -2237, 2781, -8481, 7432, -2826, 4854, 1945, 923, -9861, -4604, -1361, 9027, -6919, -7833, -5552, 1617, 8103, -9009, 4624, -7580, 5469, -5494, 9979, -4474, -496, -5961, 6274, -3740, -7459, 2626, 7577, 5715, -3486, -4939, 3767, -2632, 9513, -1892, 5369, -2398, 6002, 6340, -8979, 8839, -6520, -5157, -314, -3343, -9831, -6258, -5042, -7558, 2816, 2297, -6298, 7690, 65, 6437, 5204, -8449, -8706, 9586, -6041, 1907, 2079, -6532, -8941, -7023, -3396, 7910, 4300, 4393, -3190, 5918, -6017, 5317, 6898, -1463, -5089, 2578, -2645, -4583, 6892, -5530, 2689, -639, -618, -967, -7441, -6845, -5909, -2542, 5814, -4270, 1772, 6774, 5542, 1623, -271, -3816, 3690, -2480, 3647, -8954, 7393, 2425, 4995, 8601, 5643, -4058, -421, 3702, -197, 1709, -3703, 2689, 201, 8788, -8911, 4544, 4006, 4737, -4923, -1578, -3819, 6624, 6712, -181, -4698, -9380, -484, 4246, -3567, 8105, 696, 8509, -8863, 2195, 5753, 8538, -5260, 4707, 599, -5317, -1083, 455, -3859, -7510, -8479, 6167, -980, -5722, -8248, -2609, 2982, 5182, -6364, -2511, -7293, -6577, -3165, -9240, 6061, 4991, -2321, 1850, -3815, 5768, -9308, -6398, -2858, -6027, -885, 1692, -2819, -7413, 9537, 6540, 6931, 7338, -4695, -1149, -9734, -71, 2861, -1635, -2984, -1245, 8015, 9686, -4123, 517, -5845, -1727, 5342, -2935, 2387, 3697, 3480, 3884, -3344, -950, 7964, -5734, -5889, -9321, 5247, -7376, 9721, -1113, -9976, -892, 3723, -6300, -9808, -9314, 6439, 2026, 2862, 6363, 4695, 3374, -6735, -2942, -5593, 490, -8509, -4818, -3598, 8739, 9165, -1152, -2292, 9947, -9323, 3031, 4660, 6386, 6632, -4470, 2811, 5811, 1959, -3184, 1318, 7043, -9127, 6667, 9927, 4819, 5103, 615, -7015, 5558, 240, -9030, -4844, 911, -6493, -8899, -5020, 1258, 5108, 6180, 438, 9833, 3774, 3010, 9630, 2122, 7220, -271, -1559, -8553, 8026, 8542, 2536, 2289, 7473, -4798, 1744, -6984, -6250, 4870, 5529, 1494, 4176, 3704, -1942, 9106, 2249, 6704, -4284, -4772, -2174, 3162, -5375, 3055, 743, 1358, 7413, -1613, 5978, -4868, -5389, 5068, -997, 6614, 8897, 4351, -7743, 8323, 6377, -6451, -6725, 6804, -1412, -2389, -4210, 255, -3346, 1934, -4551, 7176, -5092, 7127, -297, 5192, -5325, 5810, 882, -8319, -5887, -6427, 6743, -7945, 3655, 2525, 9047, -6494, -8524, -6164, 5472, -9314, 9720, -7273, -1286, -7715, 6833, -9932, -9723, 6839, 5768, -6021, -2742, 9747, -9936, -8096, 4725, 4698, 4854, 2374, 4401, -8774, -1519, -4933, 7629, 1510, 5985, -7609, -1669, 8056, 2384, 6809, -5531, -4902, 6510, -8503, -5009, 2608, 5727, 2520, -7967, 1242, 8382, 4510, -1214, 7189, 7328, -3324, -2330, -3642, -8431, 9753, 7227, -9174, -2424, 8968, -5547, -5659, -809, 9422, 6955, 5852, -1678, 4261, 3361, -2430, -4432, 7000, -1988, 8400, -7211, -8341, -1623, 2664, 3566, 6977, 6873, -1090, 4083, 5611, 333, 4223, 1685, 2351, -7528, -7787, 9108, 880, -7770, -9338, 7547, -473, 4209, 7294, -306, -1821, 7240, 2289, 4088, -5151, 603, -1148, -1211, -6863, -7591, 7274, -9625, 5968, 1524, -2900, 6030, -5617, 7166, 4375, -8586, -4742, 3263, 1002, -2352, 2084, -493, 5040, -6778, -4161, 2008, 9447, 5663, -7221, -177, 1791, -8911, 5212, -703, -1040, -6697, 8954, -6450, 9947, -4604, -8124, -323, -8316, 1203, -2325, -1589, 7286, -8218, -4342, -5141, -3196, -7596, 8872, -7632, 991, 1362, -8826, 9178, -9738, -121, -5752, -3680, 1448, -3302, -7474, 2246, 2485, 8597, 6822, 8093, -732, -9078, 2545, 7145, 329, -1922, 3042, 9632, 3792, -7357, 7380, 4884, 9106, 3406, -5597, 3330, -5699, -5509, 1772, -8829, -5331, 9292, 8835, 8884, 5376, -3171, 9317, 8144, -9598, 2834, -8092, -7759, 6172, 9485, -5988, -6424, -5458, 3856, 8614, 2795, 6284, -5951, 8965, 5450, 7829, 1081, -385, -518, -4426, -2274, -5645, -4869, -1906, -845, -9648, 4037, -9038, 1134, 989, 5502, -4560, 7323, 9554, 7630, -2975, 6081, -589, 1327, 7851, 4381, 2648, 2433, -833, -8567, 7351, -8863, -268, -6439, -292, -9009, 6890, -8438, 4208, 7502, -2318, -2616, 4901, 933, 373, -6996, -6555, 1883, -2088, 1141, -3002, -1312, -2723, -4270, -7932, 3185, 6582, -3797, 1275, -1674, -6561, 9671, -475, -7459, -1144, 4657, 6769, 5956, -8444, -9039, -4457, 3159, -8448, -3506, 1666, 3244, 2711, 1663, -7418, -6472, 5960, 8191, 8769, 4187, -779, 7287, 806, -2395, 515, 9571, -7502, -7698, -9341, -6447, -9027, 2737, 1930, 3128, 8368, -8871, -8566, 8468, 1941, -6102, 5137, -7347, 340, -232, 8117, -7090, 7595, -7599, 9338, 3635, 4242, 5826, -6277, -5759, -4438, -5877, 3638, -8716, 4768, -6486, 6040, 7844, -2461, -3883, 5028, -9180, 1437, -4655, -3852, 286, -313, -4778, 7091, -6773, 1906, 4443, -1456, -4671, 6019, 8061, -9911, -9330, 4228, 1823, -6676, 7482, -9282, 5979, 8223, 8387, -8224, 6079, 0, 4155, 5689, -9128, -4079, -9748, 2502, -368, -5319, -3408, -695, -8777, -2770, -2931, -2147, -1541, 2177, 6510, 2947, -3450, 4188, 1569, -8450, 7011, -7409, -9888, -3923, -7278, 9258, -5996, 6391, -8979, -1793, -5481, 8458, -5891, 2338, -3367, 2345, -9669, 6149, 3763, 764, -4030, -4076, 4013, -2164, -6819, -69, 4119, -4552, 5389, 7967, 6412, 5581, 27, 4207, 6879, 1840, 7016, 76, -2432, 5501, -4625, 7936, 628, 2643, 9401, 9368, -8530, -1530, -4261, -5751, -1952, 6052, -3748, 6558, -7588, 9812, 6551, -9448, 2329, -8584, 2858, 3408, -5171, 713, 6578, 4090, 8528, 6684, -6297, -6064, 7016, -1815, -7046, 6289, -5135, -5459, 701, 8662, 156, 429, 8535, -5017, -7480, 8037, -2307, -66, -7876, 2632, 2853, 1085, 94, -1744, 6825, 508, 9899, -713, 2061, 6735, -4059, -9967, -631, -2869, 9972, 6994, 3261, -1976, 8785, -5649, 7066, 587, 7971, -4858, 5735, 862, -4086, 8437, 2458, -103, 8436, 8050, -9776, -3108, -4527, 2123, 2115, 273, 1353, 605, -6256, 2159, -7013, -6164, -4338, 3225, 545, -7613, 5437, -2753, -890, 4537, 5143, -6660, -4200, 3563, 7137, -3816, -4310, -3499, -9437, 7933, -5450, -2698, 9341, -9837, 8194, -4470, 3735, 1512, 565, -6838, 184, -4234, 7589, -6206, 6603, 6834, -1532, -8301, 4683, 1679, -8927, -3624, -3151, 6809, 7777, -1063, -5915, 180, -6135, -5509, 1170, 5975, 8308, 3359, 7856, 61, -229, -1300, 2107, 3682, -8013, -2982, -7940, 765, -4497, -9805, -8198, 9141, 7527, 2172, 9848, 6633, -9174, -9801, -5237, -7093, 2413, -2577, -8237, -9923, 3739, -4226, 2490, 7723, -143, -4881, -7095, -3667, -9152, 1995, -1811, 2254, 469, -9536, 7876, 5150, -403, -4826, -677, 9159, -4106, -5007, 4603, -7241, 6297, 6539, 2045, -5353, 9020, 4148, 5890, 5682, 3308, 601, 8566, -9927, 1985, 2008, -1126, -9811, 7439, 7014, 9391, -591, 1874, -4026, -3083, 9396, -3089, 305, 1848, 6279, -770, -4084, 9437, 56, -680, -9691, -5838, -7937, 8242, 365, 2449, 7542, -9948, 9885, 5454, -5588, -1979, 4847, -9179, -3138, 5007, 8827, -338, 5644, -2219, -3385, -5593, -5683, -9019, 1835, 8787, 7450, 674, 7843, -5978, 9907, -8479, 6787, 6849, 3367, 8886, 5508, 5328, 7845, 2337, 8060, 2262, 3410, -8257, -9303, 9411, 8248, 7779, 4077, 9293, -6411, 3608, -9992, -3316, -4051, -3440, -1283, -5447, -6594, 4483, -9861, 2675, 7727, -7602, 6923, 761, -9048, -9180, -8130, 9831, -5769, -2210, 8696, -1629, 2236, 737, 3761, -8980, -7779, 2204, -8553, -7544, -7819, -8206, -5825, -6049, 594, -1795, -2822, 7497, 4474, -9312, -9641, -2859, 3281, -4641, -1208, 2360, -3200, 94, 6683, 1294, 4695, -5219, 2879, 6155, -4977, 3142, -8098, -6172, -8435, 3238, 6490, -2455, 352, 1531, -7267, 3735, -4751, -7301, 6074, 1733, -2634, -8862, 5994, -9516, -2368, 7326, -4118, 8634, -6475, -9964, -4756, 6335, 847, 3741, 2670, 1978, -6201, -6997, 9983, -546, 5418, -9921, -8827, 603, 8234, 9304, 5069, -6902, 8477, 4154, -1189, 5809, 9921, 724, 5138, 3710, 8580, -3919, 5985, -2589, -4473, -7816, -9910, 4465, -6959, -5889, 5170, -7069, 6709, 140, -7430, 3634, 7571, 958, 223, -6625, -9677, -275, -6978, -2845, -9542, -9478, 2052, 7743, -5330, 4040, 501, 1265, 3571, -1473, -7033, 8595, 4217, 3019, 2408, -2379, 6386, -7321, 813, 9895, -54, 887, -775, 1494, -4247, -2185, 9757, -104, -765, -8090, 2002, -4212, 4562, -8254, -5837, 6516, -2340, -5094, -7882, -7130, -9651, -8176, 8724, 6694, -208, 5055, -2508, 6084, -217, 4356, 4109, 9221, -1778, -8204, 360, -8805, -9130, -9311, -4577, -2010, 4861, 3963, 8944, 4522, -7105, 6924, 6673, -6123, 2673, 6965, 5548, -1656, -4741, 6549, -2066, 4809, -4774, 4402, -8056, 4295, 6659, 9602, -7449, -6209, -1161, -4084, -6703, 5039, -5849, 6224, 9849, 3306, 8612, 5553, -7548, -2029, -4289, -7035, 1425, -7821, -1437, -2261, -4297, 7081, 4765, 5649, -6746, -7654, 1278, -8053, 2872, -5437, 7996, 97, 405, -2134, -5185, -4492, -8959, 6033, -4370, 5870, -4830, 4580, 4676, 3812, -3298, 5603, -3056, 3456, -5734, -5879, 4383, 2423, 7578, 7115, 874, 2849, 5179, -3053, 3804, 2209, 8181, -9429, 9012, -2487, -3482, -1714, -3035, -8686, -2396, 4326, -8234, -2650, -3859, 21, -2776, -8069, -1226, -9293, -7925, 946, -7308, 6424, 6673, 9856, -9386, -8766, 138, 7607, 5874, -1079, 2535, 1267, 8322, -9686, 6278, -8599, 6820, -9139, 5424, 8643, 7107, 8459, -4346, 6720, 5382, -1886, -3032, 8047, -3932, 8965, 5353, -6794, 6973, -4059, -2877, -2267, 8526, 717, -4018, 6866, -6169, -5674, 1457, -9009, 3337, 4359, -5817, 6837, 3826, 8900, 8420, 6342, 2320, 6625, 1034, 7841, -189, 4030, -3844, 7686, -4536, -9800, -6221, -9964, 907, -8675, -7187, 2950, 3481, 1725, 5029, -530, -8681, -8732, -344, 7221, 5601, -2592, 4888, 1970, 4012, 2010, -1100, -6148, -9716, -9621, 7012, -1840, 5007, -7764, 1264, 7261, -7786, -7631, 2635, 9642, -4897, 2698, -5573, 7752, 6164, -3258, -3448, -1706, -5447, 4275, -8080, -6534, -1489, 2265, 7376, 5113, -7110, -8222, 7732, 2192, -8157, -3516, 4268, -2244, 4741, 2647, 2899, -6437, -6457, -4879, -7150, -3089, -8709, 1061, 2114, 2788, -8821, 2403, 7616, -8998, 8082, 4629, -2358, -8396, -3209, 5587, 794, -7185, 9846, -1329, 4961, -4627, 5788, -7361, -3121, -2455, 8982, -2701, -446, -9724, -100, -4064, -2897, 4719, 2349, -7880, -2392, 9533, 1496, -6190, -9141, 4517, -9898, 7728, 435, 7234, 7211, -8205, -4482, -4048, -2603, -4761, -3069, 6686, -8049, 2773, 2031, 5129, 6681, -4009, 8719, -1861, -389, 5591, 5328, 4428, -4445, -9622, 8334, 547, 5323, -4281, -3180, 5643, 5088, 4376, -6542, 588, 8276, -6184, 7545, -1940, 2744, -711, 6745, 9715, 5597, -3915, -8955, 9304, -9609, -6313, 8003, -8013, -8268, -6940, 9993, -8638, 6735, -7205, -7994, -8685, -8833, -4144, -6096, 1660, 8801, -9541, 8788, 1383, -5340, 7365, -7570, -6484, -9506, -1379, -5841, 5367, -4105, -4565, 9359, -7901, 582, 1888, 9591, 1009, -7251, 4380, -5326, 6097, 238, -9793, -1038, 7060, -6548, 890, 9855, -8733, 7569, 1277, 1817, 9162, -3591, 5425, 1150, -5923, -5817, -9791, -8794, -8123, -5657, -3618, 6937, -8258, 2616, 1418, 8582, -2215, 1823, 8907, -4214, 3196, -8304, -5141, -4095, -7474, 5628, -7039, 8389, -5907, -3543, 2220, 594, -6002, 3437, 9287, -7121, 3776, 4786, -7675, 9979, 9839, -2945, 4425, 297, -8888, 5454, -3464, 4855, -6017, 7204, -6277, 4591, -6077, 2993, 3707, 716, 8666, 3555, -8389, 4394, -5936, 8529, -8464, 147, 5290, -9699, 6654, 4609, 1735, -4612, -6390, -2341, 1042, 9884, 2215, 9199, -5144, -4244, -8144, 5210, 5311, -6868, 9270, 3724, -1454, -8065, 6879, -3739, -8766, 1187, -8663, -9916, -4637, 766, 3253, 6690, 2303, -7361, -3757, 6718, 2680, -2469, -6536, -6420, 4769, -2719, -2480, -3978, 2507, 2126, -7809, 7325, -3412, -5214, 2726, -3826, -1164, 8171, -6889, -1704, -2461, 4844, -6239, 264, -8330, -3767, 2672, 7271, 6308, -8255, 1474, -3303, -7760, -5114, -6111, 66, -281, 7133, -6222, 7376, 5366, -7165, 3392, 6681, 5561, 5839, 5472, 5538, -9288, -8639, 6333, 6054, -3804, 6564, -5350, -2439, -8317, -8503, -1853, 840, -1625, 9538, 1827, -9575, -6642, 4991, 9814, 6881, 7482, -3667, -8960, -1518, -6034, -6523, 9254, -5782, 1426, -8322, 1985, -8053, -2728, -4149, -6728, -6301, -3860, 4914, -7962, 3715, -3881, 4159, -3410, -6265, -279, 3290, 1315, 707, 3520, 9234, 5603, -7999, -4594, -9488, -8643, -4578, -594, -6457, -1688, -4375, 8481, 1141, -611, -2353, 7994, 8224, 9215, 1727, -8056, -6170, -7005, -4562, 8799, 3505, -7503, 9507, -4686, 4237, -9342, -5216, 8086, 5097, 9800, -1657, -6593, -2732, -2557, 6562, 3150, -1787, 4766, -5239, 7289, -7077, 1324, 8312, 8301, -4487, -7672, -4332, -8796, -4076, -8417, -7945, 9973, -595, -2652, 2861, -890, 4850, -1005, 918, 2388, 781, -3708, 1079, -3418, -4055, 3358, -3630, 8709, -2738, -119, -1907, -1317, 348, -164, 5799, -8886, 1818, 7154, 773, 3789, -2876, 9765, 193, 4978, 5910, 5717, -7833, 3036, -3381, -6280, -7779, -7003, 2461, -4109, -2448, 5019, -2466, 9428, 591, -7254, -6673, 2751, -7849, 5729, 6796, -6836, 9004, 4988, -8076, -2647, 9312, 6582, -5894, -8435, 133, 413, 1172, -3581, 9942, -9050, 7683, -4268, -7556, -5322, -4832, 7688, 6613, -3788, 6314, -8308, -5916, 2060, 2776, -7675, -5881, 1815, 7163, 6430, 4823, 8732, -5367, 1213, -7339, -782, 6941, 5769, 8504, 3051, 4431, 4133, 1692, 5673, -3558, 4006, -3637, 1682, -2812, -349, 6228, 7597, -1820, 9378, -2923, 6728, -333, 9181, 7147, 4466, -1865, -6282, 3642, -7324, -2467, -325, -4070, -8949, 3713, 2554, 6983, 5810, -53, 9617, -3075, -7008, -1751, -1728, 7702, -2380, 6762, -2267, 2996, -3199, 5589, -1149, -5478, -2392, 1156, -5519, 9743, -7447, -7736, 3057, 9232, 6150, 6005, 7735, 786, -2345, 9710, 8746, -54, 8976, 3789, -5429, 8913, 2802, -6020, -7141, -2925, -285, -1523, -9368, -9260, -4244, 6846, -7399, 4898, 7540, 2570, 5803, 5448, 2428, 1206, -836, -6118, 7240, -7566, -5017, 9299, -8305, -1235, 8354, -5219, -2991, 7791, 8165, -2237, 2541, 1733, -2728, -5019, 688, 9746, 1347, 6420, -4371, -2750, 4816, -4727, 3267, -1171, -8758, -7594, -5326, -2512, 2593, 3335, 3037, 5396, 6960, -8262, -4487, 7494, -2410, -4356, -6057, 4496, 7205, -7078, -1149, -8666, 2856, -2367, 548, -9114, -3210, -6812, -7524, 7602, 569, 6275, 7427, 9679, 3342, 8258, -5967, 9520, -5755, 1635, 176, 2245, 3046, -3624, 376, 1445, 6531, 2261, -2414, -6382, 9230, 5043, 394, 2760, -7992, -1161, 230, -7825, 2955, -7735, -9453, 1130, 9194, -7031, -7126, -5818, -6911, -8800, -1714, 2417, -9108, 8899, -16, -3126, 4689, 2572, 4555, -380, -3550, 5821, 2472, -7283, -4774, 9427, -7237, -5149, -5203, -9880, -136, -7599, 99, 6872, 3190, 6624, 1323, 1019, 6827, -6434, -5773, -770, -9456, -8679, -2118, -7798, 5983, -2898, -9792, -5352, 9060, 583, 2452, 7524, -3970, -321, -6529, 4891, -8078, 5429, -3558, 2469, 4533, 7647, -8197, 4791, -9137, -8883, 5584, -4923, -4446, 2041, 6117, -1804, 7813, -3492, -8426, -9469, -2957, -6223, 5469, 491, 1751, -542, 3792, 5633, 5959, -3909, -7083, 5571, -4118, -8361, -8552, -1733, 5480, 6550, 5092, 7658, -5408, -2356, 1661, 8107, 8272, -7943, -2024, 5737, -6000, -7914, -5762, -7508, 9246, 6710, -7610, 1979, 6057, -1239, 4152, 5192, -6292, 8446, 244, -2536, 8084, -53, -7484, -8999, 3529, 5395, -3148, 9235, 3874, -1393, -5458, -6969, -6347, -8446, 9234, 378, 8510, 9512, 4648, 1541, 6181, -768, 7499, -670, 5293, -5928, 8853, -3361, 3256, 2770, 5010, -5676, -2994, 758, 2746, 4284, -5152, 2575, -6777, -2931, 890, 2761, 6156, 6556, 8870, -5142, 8886, 4683, -700, 7831, -7359, 7962, 8142, 7625, 8719, -2828, 9309, 8999, 772, -9570, -4224, -3482, -3858, 833, -9607, 7779, -7296, 5668, 8767, 9587, -544, 9674, -1254, 169, 4255, 8678, 8061, 8024, -9594, -211, -8376, -6415, 8456, 4717, 5331, -6263, -3306, -8442, 2707, 2097, 1298, -8311, 5390, -3345, 729, 9953, -183, -3785, 8930, -2043, -2203, -572, -3244, 4556, 7771, 305, -9320, 6929, -5013, 8546, 4103, -1635, 6139, -6199, -8640, -2923, -4006, -3467, -7175, 2378, -1345, -2500, -2602, -4180, 2168, 7175, -6754, -6807, -4309, -6119, 4513, -106, -3191, -9757, 2638, 4437, 9517, 9478, 3794, -953, 8171, -8501, -2465, 7452, 9291, 5656, 510, -6671, 9456, -822, 3191, 3562, -8313, -69, 3885, 4291, 2520, -9889, -1504, -6092, 5409, -3046, -4771, 8010, 6542, -1179, -8615, 5429, -327, -6017, -7850, -7565, 4635, 3776, 2737, 5411, 7448, -3400, -1765, 1301, 5697, -8650, -7736, -959, 5506, -1825, -112, -6737, -5639, 8974, -9529, -1052, 6691, 9299, 703, -5955, -7844, 1423, -2895, 8426, -2914, 8302, 6111, 5894, -904, 9530, 4156, -2197, 8683, 9343, -6005, -7166, -9888, 6432, -2500, 5810, 2863, -2628, 817, -4194, -6539, -1706, 3300, -1014, 8194, -31, 9606, -4035, 5373, 9150, 9171, 7780, -6352, -8520, 3672, 7766, -9645, 4838, -8529, -8270, -8442, -5359, -8106, 5192, -6012, -8417, 9458, 1819, -5529, -7452, -7540, 2959, -8162, -4354, -9134, 9124, 3025, -2911, -5203, 8795, -7914, 362, 9424, -2999, 5260, -7359, 1180, 2571, -4885, -6335, -1732, 1156, 1876, 5187, 6261, 5210, 1202, -8051, 8265, 2048, -723, -1026, 2847, -6452, 3167, -2628, 8320, 9808, 49, -5048, 1821, 8537, -9326, 3111, 3496, 9662, -3902, 4354, -1703, -198, -1901, -3167, 7248, 9668, -3097, 5320, 2256, -9377, -2112, -8528, 9878, 8855, 4135, 8732, -9599, 6141, -4266, -8856, 7440, -253, 4185, -6505, -343, 1102, 4281, -3707, -5558, 1234, 8086, -2574, 3685, 1120, -5085, 5368, 9726, -4820, -2306, -5078, 1781, -5918, -5858, -1137, 2972, -5543, 3145, 7103, -3760, -6955, 6887, 3409, -3578, 9613, 629, 663, 9460, -5488, -3402, 5471, 2183, 6759, 4636, -6563, 6266, -8610, 4717, 1519, 7735, 3984, 868, 6197, -5492, 3776, -2753, -9373, 127, -6944, 7751, 5811, 9406, -5528, -1499, -33, 3873, -2793, -3858, 6035, 45, -7507, -8874, -2183, 7197, 6321, 3370, 9499, -7952, -8124, 7281, 8512, -610, -5241, -1064, -9100, 1110, -1133, -991, 205, 7028, 2316, 5081, 2082, 9677, 9512, 2486, 9971, -5378, -535, 6917, 6719, -9013, -3985, 8418, -3730, 5959, -3250, 8011, -1946, 6997, 9478, -8415, -2368, 4708, -8312, 9253, 1714, 1361, 5637, -8060, -2788, 9980, 5375, 6474, -5173, -5868, -5912, 3673, -6330, -1112, 5771, 1861, 5639, -4316, -6526, -9932, -454, 6991, 3002, 862, -6906, 233, -545, -2352, -6338, 6432, -3335, 1608, -6331, -6842, 592, 2268, -6, 9259, -9763, 6874, 2947, -2844, -8737, 9791, 8923, 1598, 3633, -3850, 1719, -8271, -7653, 1190, -2562, -6241, 7962, -7028, 1117, -8240, -2825, 2015, -3442, -2282, 6128, 5719, -9450, -985, 4032, 8888, -9156, -3085, -3626, -4430, 586, 8380, 4497, 5049, -9705, 9700, -2608, -7598, 541, -4442, 5657, -1443, 6552, -1294, 9482, 9163, 4684, -8459, -3341, 2145, 7232, -8961, 2159, 6459, 8141, -9479, 6697, -6046, 8735, 5716, 9883, -3991, 5648, -4503, -4392, 7569, 5467, -9390, -573, -2957, 1480, 9722, 2112, -1188, 9322, -918, -8451, -973, -9521, -2214, 2920, -1802, -9115, 9819, 8648, 9985, 9288, 3349, -4241, 2592, 9948, 3460, 7922, -5166, -2503, -1086, 1588, 6725, -3551, 6198, -2204, 5273, -5811, 5299, -5230, 2110, 1771, 2122, 3076, 2525, -7050, -1093, 3939, -7484, 7470, 3802, 7086, 5020, 9510, -3369, 8029, -4502, -2618, 3240, 5975, 121, 2842, 7068, -2961, 4895, -673, -6768, 8866, 6790, 9959, -6344, -4108, 8763, 3778, -3715, 8836, -7991, -6268, -483, 432, 9750, -2513, -1176, -5464, -7387, -9888, -5678, -6529, -1057, 8212, 5539, 6929, 4163, 3401, 3416, -6079, 4835, -4176, -3513, -3767, -821, 9500, 2607, -8207, -2941, 4527, -996, -208, 8874, -2076, 4615, -38, -8819, 4098, -488, -4348, 3304, 8823, -3230, -2939, -5631, 2268, 4493, -7148, -4092, -1321, -1456, -5551, 9697, -9436, -2177, -2884, 3440, 163, -331, -1063, -6035, -6498, 4154, -3014, -222, -4834, 1810, -6758, -7393, -5940, 66, 3819, -4232, -4617, 6493, 3377, 5046, 4870, -6868, -8319, 630, 6521, -2693, 6149, -228, -205, -830, 2901, -9580, -2039, -5323, 2832, -421, -7164, 1444, 8215, -8503, -4827, 6850, -2030, -7605, -61, -1345, 3375, -1443, -3716, 6140, 4897, -8546, 3552, 7350, 2791, 2416, -8953, 9522, 900, 4196, 8800, 4044, -9657, -2701, 7003, 7441, 8830, -2360, 8189, 9060, -8948, 3316, -3241, 3681, 5552, 5808, -8229, 7658, 5383, -6924, -5777, -8476, -4938, 6968, 3634, -4260, 2680, 670, -1867, 6065, 4105, 7927, -3936, 8937, -9464, -1580, -1326, 759, 6962, 5003, -6449, -296, -3427, 6937, 6182, 3726, -6305, 2872, -1938, -3131, -1858, -6781, -5298, 7787, 3006, 697, -6605, 7399, -252, 8972, -7463, 4655, 9569, 5901, 471, -4494, 813, -6497, -4146, 7512, -1305, 7701, -3724, 7048, -3431, 7549, -3764, -1923, 3621, 8046, -1060, -5535, 351, -3607, -7845, 8549, 3360, 6633, 8339, -9497, 2804, -6355, 8010, -8976, -183, -1642, -1948, 9983, -6605, -655, 4591, 5577, 3660, -1011, -5265, -4526, 9721, 3462, 7907, 4325, -7298, -1128, 6097, -5623, 3599, -4372, 9182, -2102, -9266, 8877, 3829, -2310, -3794, -9348, 5960, -2699, 1053, 4359, -3261, -3964, -5048, -5548, 9339, -2977, 5274, -1563, 5108, -2141, 1875, -7749, 2997, -2140, 1464, -3667, 160, 8552, -4306, 1294, 9668, -2346, 503, -877, 8394, -1192, -1911, -1210, -6925, 4110, 2751, -7280, 2978, -2183, 4823, 950, -6615, 7599, -8399, -4102, -6103, 9330, -3112, -419, 2325, 1274, 9141, -2893, -2956, 1544, 5674, -7680, -6028, -347, -886, 4108, -5889, -8867, 9296, -9526, -5328, -3275, 7533, 8982, 3685, 8314, 2039, -8240, -5397, -4171, 2909, -3889, 5736, 7261, 7013, -5958, 639, 8557, -994, -232, 4830, 7276, -1014, 7464, 9278, -6005, 381, 9740, 5576, 8745, -2659, 8989, -3865, -2471, 9783, 1877, -699, -7850, 6781, -9983, -4852, -860, -6710, 3474, -6050, -3535, -1657, -2965, -2373, -5844, 5798, -4741, -255, -4419, -2255, -8170, -7475, -7871, 3536, -7658, 2717, -444, 3972, -2488, -3947, -5875, 213, -5393, -5052, 8714, -9217, 5741, -1676, -4392, -6667, -4602, -2039, 2162, 3702, -4599, 677, -1276, 671, -2529, -515, 5603, 5, -6059, -1790, -1191, -8359, -5344, -7795, -4424, -4548, 5753, 8218, -9307, 3853, -8839, 9214, -259, 4744, -3851, -3982, -790, -1443, 9651, 1605, 931, -1935, -566, 5006, 7699, -7091, -9786, -4544, -3215, -74, -2620, -249, 4352, -7894, 935, -7949, 3204, 9514, 1796, 6325, 1888, -5437, 3264, 8234, 1717, 8896, -5205, 4335, -7059, -6278, 1223, 6000, -7854, -4054, -1444, -1178, 2193, 9889, 4957, -9144, 2969, -4812, 6736, -1699, 3379, -990, 3176, 2425, 4893, 5780, 1520, 6839, 9362, -7393, 5757, -9539, -8929, 2156, -2443, 6280, 5290, 5571, 3353, -323, 9005, -1051, -6924, -1792, -1353, -8371, 6251, 2852, 6515, -7431, 9607, -3513, 2900, -3121, -7884, 3388, -9860, -2655, -792, 9651, 9687, 8868, -8912, 673, 2955, 3896, -2644, 468, 615, 2390, 5441, 9029, 2537, 5743, -719, -7327, 3862, 6845, -5996, -7257, -1753, -1133, 174, 3466, 2073, -4806, 2338, -5590, 5056, 8061, -1442, 4108, 144, -5627, -9838, -2237, 1282, -5733, 1633, 3557, 6250, 2367, 7787, 5267, -652, -7804, -7065, -727, 854, 7107, 9149, 1353, 4484, 7309, -3495, -7991, 2144, -6390, 6984, 3084, -8466, 5857, 1529, 6859, 8026, -3341, 281, 3220, 8895, 7429, 1107, -9733, -9928, -5363, 2366, -933, 7287, -8844, -8883, -6901, 6356, -5667, 2424, -4730, 3665, 2045, -3725, -9887, 4033, 5780, -1087, 3536, 5681, -7539, 7799, 3893, 4529, 9963, 2651, 9495, -6048, -2147, 1396, -85, -788, -3433, -1124, -920, 9526, 9120, -9913, 8540, 8007, -8073, -7119, 829, 6563, 4023, 4744, -7902, -9813, 1941, -7033, 2739, 8459, -6821, 6503, -2214, 5690, -5452, 3051, 1809, 227, 4975, -4962, -8996, -5544, -5137, -7960, 8736, 2674, -7856, -8028, -3365, -8830, 8418, 8618, 472, 34, 6248, -7127, -5827, -4819, -7353, 4214, -9252, -1973, -6937, -9519, -9096, -1261, -6974, -4970, -6160, 1707, -7382, -1988, 5469, 6886, 3996, -524, -9955, 7095, -6994, 1626, 1115, -1243, 8861, -9587, -4702, 9589, 9876, 3772, 2409, 9574, -8193, 4678, -2678, 6699, 1131, 6977, 1322, -5046, 1690, -8834, -4218, 699, -2057, 3271, 7598, 2249, 6414, -6775, -5081, -8291, 9895, -306, 9772, -1880, -3523, -6436, -5431, 5434, 8682, 4413, 3489, -1813, -5535, 7703, 449, -4922, 8378, -2844, -2128, 3021, 2574, -6293, 4217, 9032, 8309, -7096, -8567, 6884, -3303, -6702, -1036, 685, -7915, 4891, 8340, 745, 5428, 8555, -9640, -328, -7722, -6559, -1911, 9731, 7925, 1610, 6446, 3197, -8936, -180, -2040, 7609, -7909, 4343, -1149, -4447, -6459, -8389, 7534, 5302, 9986, 2183, 5635, 2842, 8482, 156, 9341, -2181, -5652, -5253, -7110, 551, -3193, 6857, -6824, 1598, -333, -5437, -9100, -4980, 2257, -6028, -4883, -4407, -3349, -899, -4620, 6331, -3068, 2898, -690, 5242, -5153, -6382, 8523, -7104, -1771, -1107, -9250, -9761, 8333, -8503, -5183, 8507, -1674, 3344, -2963, -7285, -3918, 8410, -2180, -7610, 5500, 9040, 8587, -5856, 1131, -4852, 913, 181, 6349, -3166, 5042, -870, 1773, 9126, -6840, 3215, -4765, -4773, 369, 8821, -6217, -3648, -7657, 4299, 5977, -6079, -3122, -4201, 389, -105, -4608, -5594, 2350, -6175, -7156, -9208, -385, -933, -348, 5361, 7194, -8837, -5629, -3626, 8775, 6328, 3544, -9924, -1770, -8337, 1601, 2310, 452, -9675, 3772, -1481, 1710, -2407, -4517, -5848, -104, 4644, -305, 6547, -8670, 97, -9860, -2295, -672, -5483, -8085, 5427, -6289, -263, 8502, 4468, 7665, -7881, 652, -4284, -6119, 4530, -7652, -3920, 7092, 7503, 5982, 8286, -1613, -6211, -6006, -1589, -3754, 1908, -1606, -3770, -2385, -5964, 9836, -7111, -2298, 5559, -9039, 1528, 7828, 8466, -5093, 4149, 7481, 9553, 5457, 6168, -2916, -4914, 3061, -4538, -2462, -6906, 9373, -3751, -6159, -8897, 3154, 4398, 7825, -7567, -8655, 8402, -8447, 8767, 2965, -6706, -592, 5705, -5538, 7905, 2, 6789, -6119, -7805, 75, 8796, -377, -8759, -4275, -6774, -4530, -3960, -3018, 6689, 9425, 6256, 7496, -201, -5364, -2251, 2021, 7693, -8559, -4848, 6167, 8617, 4461, 3444, -9646, -645, -5287, -432, 854, -1753, -7801, 8827, -7428, -9217, -652, 2083, -5408, 7992, 4012, 4241, 7590, 3953, -5907, 9025, -7691, 2033, -6198, -9514, -1758, -2833, -4874, -658, -8527, -9060, -5046, 7131, -1658, -3531, -3122, 4449, -7022, -1788, -6146, 1249, 9980, -5532, 9263, 6824, -6474, 211, 2829, -4456, 4903, 9682, -5716, 5956, 7322, 3705, -2523, -1785, 7079, 463, 3297, -6690, -558, -8294, -6363, 9506, 477, 2673, 9966, 4826, 460, -4093, -9327, 937, 9334, 1110, -7511, 30, -9619, -3456, -2426, 9265, 8459, 4528, -6201, 4477, 4032, -7538, 7211, 8336, 9235, 3713, -9539, -7596, -1663, -2426, -279, 9049, 7893, 8653, 9676, 8532, -5098, -7223, 5355, 2956, -7360, 319, -3970, 6072, -5194, -471, -5091, 9000, -216, -351, 3249, -403, 9729, -7246, 5688, -5121, -8077, -5265, 8461, -6419, 3055, -5624, -4876, -619, -7742, -9120, -9839, 6888, -4584, 9614, -9713, 1968, -8893, -5445, 6514, -9022, -4058, -5753, -2294, -3941, -4105, 8046, 17, -3534, -3841, -4104, 7250, 2486, -7735, 2668, 4259, 2647, 7543, 7842, -4855, -6383, -9778, 2588, -1149, -9318, -9422, 5644, -905, -2345, -7224, -9598, 1649, 6465, 5210, 4202, 2866, -5343, -2848, -4887, 3784, 452, -3574, -2620, -6584, 9813, -3763, 1477, 7323, -4859, -4889, 471, 6687, -372, -6330, -5391, -3326, -804, 7356, -5923, 8727, 5420, -9615, 1792, -6045, -4345, -2614, 1431, 3454, -4417, 429, -9660, -6113, -7600, -9258, -5232, 495, -9216, 4720, -2505, 443, 2285, 5478, 6040, 1861, 2592, -4050, -9035, -181, 3414, -7685, 8987, -9365, -8511, -7265, -5412, 8825, 5109, -4394, -2583, 3829, 4132, 7830, 4018, 1373, 7714, -555, 3156, 435, 2191, -1468, 417, 7459, 7053, 5945, 9737, 8917, -623, -8898, -2248, -4546, -5471, -7791, 2714, 5682, -3150, -8363, -1674, 626, -6244, -6292, 4102, 6334, -383, 8919, -7463, -4878, 6300, 8758, -1356, -2841, -4187, -638, 9517, 3203, 6093, -9882, 5947, -6590, 6824, 1303, -1994, 4662, -6316, -9980, -2404, -2744, -8844, -6040, -7638, -322, -1264, -8502, 5157, 6873, 2780, -8671, -9569, 7735, -9055, -1619, -5771, -6874, 617, -4830, -8595, 5092, -6023, 7793, 4055, 1869, 5166, -438, -6326, 1438, -1183, 514, 7514, 487, 5259, 4732, 1352, -2868, 7135, -5408, 5227, 9390, 3805, 4714, 4712, -1896, -4653, 6361, 1726, -8366, -9709, 2819, -7302, 4567, -2444, 5006, 3249, 8906, -1889, 5672, 228, -3425, 3571, -4132, -4251, -9833, -3259, 9912, 9006, 4192, 7570, 7712, 8789, -8067, -7028, 7343, 3480, -1014, -1725, -8097, 3617, -461, 3927, -8390, -2591, -3426, -9340, -3606, -752, 6053, -510, -5599, -15, 3678, -9365, -1676, -2493, 4837, -2112, 2745, -8407, -4410, 1526, 3017, -8154, 193, 6187, -5931, -8665, -5723, -2241, 312, 4522, 1351, 7372, -101, 5955, -4313, -8462, 5161, 4072, -1845, 2054, 1295, 3259, 7302, 4723, 3527, -4923, 814, 6398, 7595, 4026, -5282, 4703, -3740, 9802, -1955, -5381, -5083, -5801, -2424, -9237, 6281, 7770, -4350, 3348, 9489, 9549, -1624, 7380, -4390, 1585, 1634, 8792, -3689, -8153, 369, 1129, -9437, -872, 9219, -8616, 2033, -4763, -7858, 353, 9816, 8163, 4740, -3038, 9731, 6489, -5092, -2724, -1282, -5893, 9370, -8683, -3842, 2490, -431, -663, 6353, 751, -5559, 6597, -2235, -7373, -5889, 1178, 3160, -2376, 9318, -3063, 8872, 6031, 3233, -1523, -6826, -2420, 6336, 8014, 7832, 9881, -7544, 5394, 1877, 3347, 819, 1031, -9818, -3031, 3501, 3736, 1503, -9706, 5423, -7254, -7448, -4402, -1971, -8988, 7488, 8401, 2293, -7004, -7639, 5866, -437, -2506, -9980, 1899, -3188, -1542, 2121, 7063, 3882, -7073, -8393, 6893, -1422, -1880, 402, 2466, -1838, 5675, 2901, 4253, 955, -329, -715, 381, 6034, -7933, 4814, 543, -4213, 7615, -7746, -4204, 1103, -3011, -9365, 6031, -8587, 3238, -1159, -2566, 3360, -6256, -1747, -2255, 5149, -9442, -6565, 8986, 2120, -1648, 4794, 9797, -4905, 1961, 2529, 5837, -4894, -9593, -1769, -4169, -1636, 1114, 568, 5549, 262, 9705, 822, -4585, -2645, 1391, 6204, -3122, -2277, -7343, -6316, -4324, -2182, -323, -4272, 2842, 5608, -7819, -1008, 6789, 2459, 5115, -6222, 1173, -1527, 42, -7089, -4003, 1351, -9787, -2185, -1887, -2345, -4889, 7917, -4156, 8693, -2867, -4375, -6810, 3787, 2595, 9921, 4414, 6270, 7632, -863, 7918, -8633, 2877, 3159, -8891, 4600, -9268, 1488, 2775, -1190, -3566, -2680, -8363, 7158, -2803, 5487, -8565, -5563, -4426, 9203, 6700, -7904, -6019, -4656, 1364, 5091, 5269, -3615, -7227, 8286, -573, 1468, -4313, -6643, -4659, -8444, 3716, 3809, -8873, 8725, 4000, -6820, 6870, -4197, 6871, -4121, -7387, -9796, -7680, 2758, 1248, 6450, 5752, 1338, -5677, -388, -3562, -637, 8422, -2391, -415, 4224, 4671, -3155, -4559, 4052, 6655, 7155, 5562, 6520, 9657, -6590, -564, 7427, -5705, -2533, 2000, -9819, 3547, -82, -7601, -1578, -7347, 8265, 2381, 8784, 7717, -5135, -9366, -5069, -9589, 1226, -3316, -3324, -4161, -6283, 9588, -7117, 8041, 2750, -6132, 2947, -5481, 7190, -2750, 602, 8814, 8617, -1103, -3597, 7846, 1198, 2423, 4558, -2316, 9699, -9445, 3697, -5073, 1186, -3400, 8155, 2788, 7488, 3896, 445, 3428, 2712, 7859, 4625, 4889, -6476, 2375, 2032, -9648, -8818, -4360, 8063, -5312, 382, -8453, 2911, -3483, -9854, -2374, 2638, -5668, 9117, -9243, -5843, 7898, -7994, -8059, -3067, -7468, 6677, -9472, 7581, 8871, -6831, -6614, 2784, -3019, 6965, 4095, -2774, -4271, -3234, 7561, 315, -7801, -5255, -2498, 7785, 8832, -4089, 2209, -5291, 6321, -6293, -1637, -1165, 216, 1586, -4631, -6917, 49, -4258, 3937, -9310, 5243, -6764, -3210, -9092, -7795, -4730, -706, 6483, 743, -6893, -5575, 5902, -7750, -5440, 9657, -1612, -4149, -1184, -7078, -8546, -8707, -7959, -3263, 7153, -5201, 3054, 9145, -3386, 3014, -9373, -4532, -3477, 7918, -2279, -8728, -6034, -1234, 5871, -2406, -9587, -8213, 9157, 3031, -9773, 5814, 6872, -5683, 4907, 7556, 9838, 5500, 6819, 7783, 5178, -2476, 4210, -1978, 3586, -2135, 9528, -5335, 8172, -5472, -8026, -1266, 3546, 7801, -92, 4834, -7901, 1131, -7503, 8262, -6264, -1808, 4424, 8541, -3633, 9567, 247, 1101, 1470, 8387, 1355, -1813, 463, -8331, 1892, -8472, -7750, 9813, -8210, -2072, 1936, -3982, -3733, 6997, -1250, 3386, 4289, 1895, -914, -9718, 2443, -7650, -6560, 1341, -2774, -548, 2136, 5037, 9486, -434, -4693, 5378, 6831, -4590, 8866, 2555, -1017, 5791, 6926, 885, -358, -1966, 7605, 7560, 8802, -9249, -777, -9198, 4327, 612, 8436, 1184, -6006, -7524, 9661, -1352, -5422, 1685, 1225, -8876, 6542, 2911, -649, 4411, 5950, -9302, 2686, 4572, -1506, 7897, 5270, -4106, 9954, 8083, -5718, -7198, 2493, 911, 2187, 6148, -5885, -4792, 5483, 2844, -6336, 4122, -5112, 9647, 8253, 8501, -8674, 3813, 4949, 5598, 1923, -1624, -8445, 6563, 8900, 3474, 4970, -650, -6747, -1969, 7867, 1401, 1523, -5379, -28, -5587, 8369, 7561, -2667, -5487, 7018, -5799, -7304, 7923, -4349, 151, -1145, 5142, -8844, 2068, -9650, 4651, -2853, -1799, -6850, -7278, -9201, -1294, -3337, -257, 3770, -9660, 9561, -2558, 8682, -3695, -2663, 2857, -8461, -9186, 1817, -5802, 7005, -2988, 517, -3131, -1661, 1437, 8974, 5345, 9901, 7237, 3433, 1094, 3906, -7566, 7654, -3883, 401, -2455, 2131, 9100, -9372, -3129, 1173, 3224, 2270, 6148, -5057, 9372, -7, -3935, -2596, 431, -9049, 3351, -3276, 7765, 3066, 4982, -7815, -5442, 5592, 5205, 4023, 9992, -228, 1714, 1498, -7238, 3650, -6648, -1599, -321, 694, -2977, -7560, -8502, 9972, 8845, 8399, 9379, 559, 6121, 2331, 4548, 3833, 4394, -7500, 8528, -5290, -5888, 7290, -9981, 9488, -2740, -6397, 5043, 6352, -2483, 3538, -908, 3357, -7152, -4154, 951, -4333, -2172, -4961, 6656, 9603, 8918, -4667, 2307, 1205, -4083, 9020, 7539, 4735, -1950, 7176, -6859, -9825, 4210, -3460, -6444, -6210, 624, -9070, 710, -3409, -9549, -6516, 4332, -7989, -7885, 2282, 3784, 4226, -4591, 7647, -6743, 3329, 4195, -4054, 3033, -5868, 391, -5983, -8612, -7395, -4872, 431, -9364, 9209, 9384, 7064, 6690, 8887, -5207, 4552, -1219, -5100, -3381, -497, 767, -292, -9496, 5167, -2367, -5438, 9577, -8263, 8041, 2147, 6704, 2827, -547, -5821, 6542, -3030, -254, 2107, 1509, 9123, -2441, -8604, 568, 6049, 5010, 9269, -4635, -6963, 7102, -9477, 9733, -6093, -454, 411, -8920, -1208, 5322, -4585, -8955, 9280, -6182, 3611, 9796, -3299, 672, -848, 1430, 7467, -8664, 294, -8685, -6907, -7166, 8943, -9118, 1234, 7124, -353, 592, 4483, 2017, -4543, -4427, 9540, -3034, 1904, -3370, -6412, 3882, -3478, -8403, 295, 138, -3197, -6194, -5203, 3954, -5959, -1191, -3206, -4822, -318, 7285, -6651, -4111, 7842, -8785, 8435, 6534, 3053, 2245, -3705, -9203, -1909, -7978, 8808, -3412, -1528, 6210, -5322, 1628, 3783, -8748, -9662, -446, 1304, 8104, 618, 9781, 9926, -1721, -4158, -8207, 4485, 629, -4315, 9310, 3481, -2031, -4682, -8223, -5001, -7916, 3342, -8776, -2485, -5759, -498, -51, -6093, -7563, 8456, 803, 6417, 2161, 1576, 9719, 8844, 8339, 6964, 9028, -801, 6444, 8051, -5776, 8067, 4680, 5220, -3517, 8891, -7682, 1737, 9573, 3841, 6314, 3543, -9056, -3505, 2240, -901, -3438, 3232, -599, -6137, -1420, 7597, -4152, -6121, 8308, 6260, 5750, -1690, -9524, -8881, 4992, -1990, -7755, -5385, -3357, -4244, 9705, -4687, -6514, 7316, -5697, 7880, 9180, -98, -4807, 4443, 8938, -1432, -7719, 3132, -8189, -1678, 9587, 9161, 7732, -2565, -9523, 1403, 655, -5838, -2272, 3250, -9966, 8116, 8778, 4675, -566, 6678, -5292, -2274, -8660, 1768, -4806, -7747, 7167, -1026, 9881, -1626, -3813, 8163, 9647, 7408, 309, -5684, -4189, 8793, 5235, -6658, -9901, 1861, -9939, 1375, 1904, -1379, -2244, 2442, 3707, 9909, 5941, 719, -1198, -4617, -8654, -1632, 5033, 1375, -1538, 3663, 2424, -7168, -9288, -9827, 5774, -3343, 7999, -5215, 4838, 782, -9921, 1298, 4692, -9338, -2413, -9659, 6705, 7843, 5579, 4337, 13, 1524, -2496, -8948, 6235, 4135, -9780, -9071, 46, 4688, 6865, -8584, -2280, 7595, -505, -7567, -7643, 1262, -3218, -4052, 7268, 2490, 3558, 109, -5621, -3493, 1059, 4973, 6044, 9503, 4169, 239, -6689, 6060, 6988, 1308, 897, -9186, -5727, 4008, 6840, 632, -8290, -7735, -2106, 4089, -9043, 397, -193, 2161, 2114, 5099, 2849, -1550, 8089, -7077, 9005, -1444, -9092, 7425, 4953, -2727, 6139, -5033, 7025, -1074, 7033, -4364, -7386, -8414, -1927, 6269, -8091, 7843, -7691, -3831, 6578, 1440, -6368, 6089, -1682, -7687, 7180, -1323, 4228, -723, -3404, 5849, 7089, -9304, 9484, -5530, 9079, 8849, 2811, 2429, -3182, 8230, 8313, 9936, 2188, -4650, -1031, 2599, -3973, -2776, -7244, -9855, 708, -5146, 6826, -9242, 7161, -1415, -7049, -9051, -9653, 3962, -9619, -8221, 8867, -2511, -5818, 658, -2085, -8834, -1206, 3766, 8577, 6311, -802, 959, -2766, 5422, -196, 409, 8508, -5395, 7822, -9485, -9042, 9296, 1214, 9662, -6998, -6118, 3367, -7734, -4437, 8536, -9240, 5970, -5042, 5127, -6331, -2003, -3617, 1941, -1198, 6138, 2404, 560, 3148, -9443, 5367, -8288, 906, 4702, 4667, 380, -7870, -1332, -3656, 4995, 513, -1792, 4041, 7898, -6579, 8585, 2571, 2209, -874, -1983, 2658, 2077, -3745, -2821, 1854, -931, 8737, 6374, 6858, 8276, 9197, -8, -6816, -3206, -4306, 6456, 3924, 958, 3572, -2783, 5854, -5784, -1117, 578, -7638, 373, 2024, 7406, 9085, -2273, 1044, -1851, -9471, -1368, -7766, 6411, -6591, -5005, 5910, 1393, -9260, 9097, 4253, -7386, 5003, -6004, 6122, -4941, 6568, -1862, -49, -4410, 2059, -9345, 2254, 7394, 645, 1400, 7940, -9502, -6365, -2131, 8149, -7392, 3297, 5049, 4942, 324, 628, -7200, 8006, 1610, -662, 4482, -9427, 3032, -7510, -2854, -1835, 7496, 7560, 6933, 3770, 5843, 1564, 2944, -3024, -7744, 4053, 5931, -474, 7226, -761, -6192, 3494, 3974, -2797, -1, 1600, -3088, -8530, 3525, -1942, -7573, 3370, 1065, 53, 4541, 2765, -3840, -3255, 7446, -1087, 2256, -4965, 5026, 1495, -1184, -8866, -1671, 5191, -6484, 6796, 6223, 4269, -5324, -9531, -562, -2955, -9823, 6713, -5148, 6278, -9219, 3084, -8649, 1514, -3636, -2448, 4140, 3529, 5455, -7686, 2626, 8950, -6670, 59, 2486, -4010, -2029, -9539, -9313, -3957, 6598, -7532, -7064, 6710, 9914, 2015, 6383, 3378, 3072, -7481, 7552, -4336, 4763, -6554, -677, -5598, 5479, 6154, -7657, 7374, -32, 4824, -6116, -2924, -868, 2373, -6371, -4893, -4649, 8169, 2342, -3304, 575, -1709, -6241, -9757, -3427, 4885, -1104, 8290, -3153, -4381, -3899, 8180, 6157, -5673, 9044, -8144, 4067, 1685, 5795, 8630, -3303, -3836, -2344, -9624, 7007, -9082, 9654, -3281, 605, -3878, -8302, 594, 6540, 5789, -5946, 1701, -4071, 8520, -9747, -3699, -4991, -3090, 1420, -3821, 7278, 1565, -1165, -3392, 4431, 7719, 48, -5576, 5380, -4583, -4010, 4506, 6720, 3194, -7835, -5798, 5547, 6626, -5756, 528, 5254, -5696, -4510, -7985, -7290, 5394, -4521, -7724, -3279, -2867, 963, -1202, 3208, 6172, 205, 1788, 737, 1506, -541, -6892, -6680, -4305, 438, -4841, -5713, 917, 1492, -8525, 1373, 8871, -42, 8183, 5780, 2725, -168, -1206, 4733, 8424, 1134, 6188, 8539, 2682, -4657, 3773, -3620, 7414, -4113, 8106, 3431, 9359, -8090, -2360, -8197, -4263, 7235, -9709, 5888, 9067, -5726, 7337, 4866, -3792, -8516, 5439, 8238, 1327, -7002, 4359, 7096, -3525, -1503, 6395, 3494, -7382, 8117, -8160, -6966, -7674, -932, 3033, -4033, -1745, 4958, -9340, 5413, 1398, -2743, 7642, 106, 6013, -2525, 3977, -1407, -5916, -5021, -9938, -3933, 3338, 8213, -527, -6979, 3961, 6680, -7456, 4689, 4681, 8806, 1708, 961, -3015, -1863, -1644, -8637, 9227, -9551, -1371, 595, -7732, -850, -506, -1807, 5633, -7463, -954, -9182, -9731, 5568, 5767, -4523, 9494, 9111, 3534, 2774, 1814, 6398, -2723, -1856, 4173, 6862, -8762, -448, -6886, -1178, -8658, -6700, 7514, 6583, -2443, 5302, 4923, 6474, -7630, -9536, 8296, -8740, -5507, 8696, 5148, -2451, 2944, -7102, 4045, 4103, -3527, 4772, 654, -3695, -1622, -7254, -4025, 3190, 1639, 4132, 8199, -6447, -3125, -5488, -1764, 289, -3829, -6519, 6277, 6757, 4060, 9862, 3446, -8286, 7660, 5646, -7889, 7688, -584, -4276, -7474, 133, 8753, -3229, -4528, -3721, -8310, 9235, -9087, -2730, 3810, 9405, -9153, 8937, -146, -1742, 3115, -136, 8078, -4377, 3450, -690, -2100, 6117, 579, 1639, -1666, -4900, -7816, 9458, -7005, -3896, 2656, 3301, -1580, 7504, -6582, 1803, 5039, -7825, -3681, 711, -9215, -7130, -597, -1603, 1090, -7894, 6010, 3420, 4263, -5244, -8126, 6183, -6976, 35, -162, -1519, -8923, -1498, -2512, 3987, -5208, -9381, 1614, 2535, 2707, -1971, -3486, 3234, -6296, -1923, -45, -6577, 5586, 9781, -690, -6994, 434, -5746, -7290, 9150, -3474, 9589, 6914, 7912, -6067, 1983, -5312, 1151, -7395, 289, 3111, 7976, -5245, 9699, 528, 1396, -5683, 9489, -8867, 8150, -7866, 3429, 7763, -8198, 5696, 32, 8384, -4439, 5934, -8088, -347, -66, -4634, -5083, 4125, -2328, -5219, 260, 5371, 7920, -2123, -8410, 9804, 7230, 6322, -4375, 6867, 7224, 1776, -4333, -7129, 2254, -2327, -4381, -2799, -6432, -9075, 6550, -5777, -2843, 8531, 2243, 2949, 5955, 9045, 8518, -552, 967, -9380, 4261, 7788, 7484, -3661, 7761, 3285, -1209, 7501, -197, 179, 8096, -9623, -6865, 1489, 4572, 9161, -4081, -2073, -1601, 2729, 3359, 9743, -298, -6352, -5540, 2483, 8519, 4412, -1144, -6845, -4165, -2364, 6628, -9680, 8920, 2805, 7126, -607, -2209, 3678, 6225, -3915, -4130, 9807, 2738, -7185, -7706, -4, 4710, -5446, -4145, -5687, 5686, -2807, -8121, -9074, -8829, 9507, 7523, -9133, -704, -9677, -238, 3069, -1164, 7414, -1109, -9023, 3308, 4583, 1040, -7115, -1773, -3915, -9839, -8376, 370, 3072, 6023, 8788, -2130, -9224, 4319, 3548, -6168, -8047, 6342, -9225, -2308, -7017, 6352, 3836, -8367, -1178, -1009, 2093, 70, -6041, -5038, 3752, -772, 9992, 4579, 1231, -7382, 9145, 3130, 2198, 9272, -9359, 6499, 887, 9393, -3845, -1354, 7587, 5044, 2993, -63, 6824, 7721, -684, 5429, 6316, 8326, 3882, 8737, -8386, -8607, 7937, 1915, -3106, 9902, 5902, -1280, -5868, 9027, -9913, 5547, -5140, -140, 3101, -2556, -5943, -7020, 2260, 2635, 7269, 5486, -2595, -978, -8806, -2951, -9827, -4493, -4920, 7819, -1083, -6749, -1431, -5702, -9672, -543, -9620, 1526, -4899, 8964, 3964, 5000, -8765, -7435, 6055, -5742, 3193, 7879, -5065, -137, -8560, -2168, -9900, 2061, -8316, -6865, -5109, -2441, -2534, -8572, 4760, -6987, -7357, 4059, -1645, -4806, 1557, -4976, 3513, -5423, -3238, -2167, 9847, -1585, 2967, -5808, 7207, 2926, 1134, -4688, 2060, 5742, -3935, 3331, -8252, 6778, 7623, -5680, -603, -3970, 6852, 2882, 3898, 7667, 5831, 9362, -8413, -5754, 2055, -3182, -3710, -6876, 9114, 7188, -296, -220, -3049, 9429, 3484, -5965, -5709, -6223, 4985, -4142, -7422, 7468, 77, -9059, 5192, 5346, 1613, 2036, 3241, 7461, 3078, -2333, 6987, 2717, -7182, 7044, 7563, -6316, 7436, -8149, 288, 274, -8647, 6581, 4362, 6502, -2385, -3549, -7104, 9882, 6062, -733, 1142, -583, 6956, 1738, -6677, 1286, 8676, 3825, -5495, 3201, 7890, -8144, -1022, 849, -7054, 8957, -540, -7300, -2499, -4806, -7697, -3528, -451, -6725, 2647, 9630, -58, 2546, 6510, -5986, -3699, 7103, 2341, -2585, 9012, -1107, 2781, 9644, -1456, 4723, -5270, 9979, -519, -4390, -9018, -5123, -8667, 4354, 8897, 8862, 8708, 7952, -2062, 4612, 186, 6893, 9318, 4094, 2183, 4980, 9927, -58, 11, -6106, -2509, 7530, -6862, -3501, 2938, 5624, -503, 6141, 3256, 8584, -5117, 3612, -413, 8123, -7868, 8451, -2280, 816, -8173, 5626, 5336, 7545, 3252, 5267, -2724, 5052, 1400, -4702, -8497, 9917, 4969, 9304, 6738, -7286, 7153, -9842, 9558, 2474, 1125, 207, 4025, 7580, 3043, 8849, 9277, 3766, 9066, 8197, 5380, 7953, 2233, 3185, 4693, -3297, 2283, -9867, -7957, 137, 3820, 5849, 7972, -4132, -5813, -5166, 7632, -3512, -7172, -8457, -1583, -3407, -7556, -90, 306, -6974, -97, -9002, -9685, -4946, -9424, 7204, -4905, -8780, -6527, -5299, 7986, 7068, -909, -3904, -2363, -3397, -6407, 3690, 3900, 2901, -8283, -8089, 7465, 7102, 7867, -2663, -5469, -7615, -2966, -1812, -7995, 5096, 2530, 8713, 382, -4740, -2237, 4389, 5385, 1355, 8832, -5306, -5573, -7147, 7448, 6385, 3376, -3950, 5002, -9961, -7378, 8, 1899, 1315, -3983, -6504, 1311, 7234, 1047, 3564, -4071, 2914, -9155, -5388, -7164, 7291, -7756, -384, 4447, -1918, 3078, 1230, 3012, -2490, 3069, -690, -5780, 4839, -7376, -5975, 9760, 3010, -859, 5167, 4205, -6773, 916, 9825, -3004, -5052, 2510, -179, -2732, 7813, -2971, -7128, 1109, 1694, 3463, 1699, 219, 8357, -1602, 6937, 4798, -8529, 3320, 4512, -6039, -6496, -4394, -4138, -4339, -8757, 6842, -6252, -8102, -4891, 6344, 3504, -8309, 5181, -3009, 937, -2808, -2574, -4572, -447, 1491, 4127, 1455, -6315, 1081, 5016, 2999, 3713, 7872, 1469, 7092, -1313, -7557, -8917, -5352, 6055, -4532, -4027, -6085, -6619, -2630, 3179, -1964, 2024, 7967, 2028, 9829, -1478, 2845, 1490, 4119, 207, -7818, 2290, 3594, 94, 2433, -8054, 5172, -8550, 4544, 2579, -6250, -3719, 7751, -2385, -9432, 3248, -3390, 5288, -192, 9855, 791, -6598, 490, 5056, -514, -8191, -6898, -8528, 9683, -5112, -6441, 2123, 3356, 5665, 2767, 9851, 7187, -3936, 3279, 4282, 1259, -166, 6594, 9718, 8992, 4275, 9617, 7646, 1314, -2194, 7589, -9939, 9972, 7633, -2000, 6600, -8876, -7754, -2269, -7477, 1464, 2737, -8585, 5234, -8075, -771, 3739, -5207, 3420, 688, -3969, 408, 1185, 1623, -1558, -4398, 6721, 6967, 6806, -9859, -8250, 8975, 3584, 3422, 4850, 1536, 5419, -3132, 690, 4851, -8591, -1399, -8635, 4665, -5253, -4360, 4554, 5692, 9925, 8094, 2921, -244, -1503, 3670, 4323, -9804, 468, -4978, 3727, 6379, -648, -453, 8457, -1624, 7092, -6650, -2358, -9820, -6201, -7586, 99, 3457, -1636, 1425, -3354, 5968, 4820, 387, -3242, 7803, -1523, 9052, 1963, -1701, -6542, 8505, -9647, 4482, -6883, -5742, 7075, -9355, -1573, -552, -934, -9765, -3441, -6666, 6702, 9683, -4236, 3238, -1567, 5948, -140, 833, 1134, -7880, 3122, -9885, -6106, 7619, -946, -599, -2507, 2510, -7057, -1627, 5072, 2715, 3388, -6047, -6331, -9781, -217, -9868, 6347, -9140, -9106, 6428, -251, -7098, 7843, 6373, 5357, 5948, 3902, 7850, 8005, -9498, 7930, 6991, 3936, -2836, -7240, -6544, -8535, -834, 3268, -4172, 9943, 6340, -6263, 537, 7340, 2239, -1723, -1355, -4475, -3285, 2386, 7924, 5657, 5234, -2746, 9638, -3135, -2536, 5964, -2360, -9173, -2026, 3731, 6264, -1123, -1702, -5893, -8728, -8572, -2594, 9723, 9787, 8498, 9159, 4471, -7875, 3286, -7011, -6869, -5274, -7165, -5645, 8566, -3087, -4451, -2051, 8627, -6090, -1322, -3242, -5781, -6819, -1258, -4693, 385, -6517, 3342, 1333, -6844, 6654, -8732, 3987, 1992, -5561, -9465, 2182, -7271, 4507, 7427, 3042, 8077, -3170, 8358, 7038, -8926, 3793, 4374, 8002, -8938, 3479, 8623, 6173, 4405, 2571, 9754, -214, -3236, -5157, 1077, 5538, -5869, 8080, 2070, 8064, -8444, 2890, 6107, 1576, -2131, -8176, -3938, 129, -5989, 7023, 9319, 9797, -8547, 4683, -8046, 5279, 4995, 1251, 6122, -1669, 3486, -2826, -1635, 5025, 1172, -2531, -8996, -9685, 2567, 4759, -8115, -7936, 248, -7709, 7869, 7749, -2864, -9094, -3441, -3143, 5755, 3892, -3386, -2451, 9337, 4702, -1156, -9724, -3309, 8504, -8595, 8819, -4377, -3266, -3419, 4817, -8542, -21, -5040, -2777, 738, -2420, 1648, -2485, -7956, -9737, -854, -492, -9689, -4620, 9837, -4581, -1688, -3604, -8933, 8738, 3143, -1564, -874, 7134, -2852, 9952, -5452, -934, -1172, 337, -1000, -1803, -9596, 9981, 2330, -4412, 9161, 9009, -3684, 4391, 7453, 7390, 9783, 7967, -2435, 2899, -3625, 252, 7923, -7230, -3071, -7692, -1052, 5152, -7973, 1452, -431, 4797, 3494, -186, 5247, -1635, 5604, 7151, 3380, 289, -1885, 5947, 523, 5989, 1617, 4721, 9237, -8260, -6308, 6185, 9270, 2472, 5394, 9887, -773, -9611, 7330, -7773, 6515, -5425, 895, 1687, -1648, 2219, 3189, 6794, -2012, -7080, 4255, 5995, 4382, 4092, -801, -6131, -7893, -4972, -1550, 7874, 1131, 656, 5230, 1753, 718, 8469, -2725, -4192, 1354, 7915, 5278, -6121, 7736, -3290, 7114, -5048, 3594, -1532, 8230, 5729, 1280, 7977, -2631, -243, -2080, -5839, 2075, 1925, 4729, -6267, -678, -3769, -750, -7226, -5011, 3989, -9432, 4670, 9918, 5812, -3670, -6009, -5595, -9890, -7873, -613, -5554, 7285, 2011, 392, -8053, -9613, 8688, 9190, -1385, -7145, -4017, 5904, 9523, 2551, 1808, 7335, 4302, 1644, -1387, -8891, -5498, -550, -3748, -7684, 3035, 7310, -5051, 1944, 5161, 184, -9550, -4435, -5040, -4878, 4564, -6526, 5741, -7988, -2347, -6803, -8428, -8964, -2337, 1823, -7450, 2017, -1930, 7297, 1166, 6354, -1642, 5805, -3306, -677, 1144, 3646, -1174, -5567, -7955, -5387, -4736, -7993, -7860, 9559, 2220, -6985, -2366, 5986, -9310, 6796, 5153, -5081, 3055, -26, -657, 7799, -9284, 3860, -1863, 4453, -3746, 6371, -5193, 6628, 6224, -9175, -216, 9166, 147, 5524, -7505, -523, 5158, 9564, -2779, -5154, -3493, -9234, 9659, 3067, -2490, 8572, 8416, 2467, 8201, -2921, -2479, -9486, -5048, 7279, 130, -8814, -3217, 4827, 9514, 7372, 1998, 8194, -1068, -8146, 3146, 8348, 6826, 1474, 2315, -9757, 2433, 3999, 4651, 963, 1346, -36, -1290, 7527, -6836, 8618, -7989, -8852, -5191, -4333, 1441, -9210, 3222, -7964, -6376, -4846, -4708, 3986, 1231, -6418, 6312, 1912, -4647, -8085, -534, 3990, 4361, 906, -855, 1329, 172, 806, -6125, -5521, -3801, 426, -6903, -1676, -9667, 2112, 9624, -8645, -948, -3471, -4178, -2873, -348, -4914, 2838, 4295, 3189, -1918, -1799, -4352, -4319, -5438, 2179, -8229, 1908, -8087, -8616, -6816, 4439, 4190, 2561, 911, -6069, -5505, 783, 9384, 381, 355, -1294, -607, -8938, -3643, 2366, -7745, 4354, 9206, 9244, 5213, -9726, 5433, -3743, 1777, -428, -3497, 9546, -6514, -240, -9982, 4762, 2776, -7821, -6954, -1644, 3271, -9440, 9647, 1400, -9122, 4216, -7316, -1136, 4349, -9130, 6348, 2743, -7460, -2992, -7772, 3487, -1479, 4246, -1141, -8958, 8704, 9519, 4273, -5696, 7454, -7505, 8902, -8690, 3960, -7235, 4355, 2758, 9224, 2012, -837, 6889, 7234, -6492, 7660, -8749, 6308, 3402, 272, 1245, -4724, 3600, -9473, -6979, -1883, -4042, -7298, 5496, 8669, -9611, 2835, 3138, 1349, 6173, 2497, -7411, 3593, -8478, 9697, 2239, 6678, -9706, -1013, -195, 5018, -9255, -6111, 4538, 104, -5134, -8207, -4786, -8700, -3471, 2479, -7412, 6033, -1721, 8804, 3773, 2776, 6542, -9613, -7356, 8025, -2656, -6157, -3543, 8678, -4812, 4716, 2101, -8855, 7831, 2767, 7254, 4243, 2552, 1059, -4456, -4184, 9911, -3071, -373, 8952, -5991, 6849, -2017, -7674, 6305, 8145, 9180, -6091, 1186, -7915, -184, 7402, 2586, 1593, -5544, 4517, 4809, -3562, 9610, 2234, 7949, 2388, 8158, -8035, 4460, -4811, 6460, -7700, 6598, -7284, 1974, -3272, -232, -6433, 2839, -8329, 5134, 5681, 9071, 451, 1713, -1787, 7484, -2556, 7295, -8917, -1677, -5645, -6874, 5569, -2907, -6018, 2732, 7778, 8646, -1270, 8030, -7958, 3722, -2339, -1872, -1205, 6662, -8170, 8249, 7222, -8520, -8453, 3205, 4007, 2534, 3848, -8582, 4970, 5742, -986, 6899, -9232, -970, -4972, -8448, 1115, 6084, 5186, -8132, 9437, 6377, -5164, 4758, -8652, -887, -4195, -4494, 6816, -8072, -4927, -7396, -4966, -313, -6386, 9221, -5010, 5756, 4437, -3649, -7484, 4337, 9916, 5244, 6051, -1959, 4770, -485, 2705, -6003, 4349, 8747, 680, 3151, 444, -7448, -5640, -1425, -9573, 5532, -1178, -9604, 5267, -8698, -3866, -5615, 2487, 3503, 6908, 2206, 8568, -6328, 423, 5973, -2818, 4354, 6377, 6119, 7543, -5228, 7982, -4743, -1163, 6485, -7935, -3691, 473, 7813, 2225, 464, -1348, -4487, 241, -4366, -8629, -1986, -5480, 328, -7416, -4925, -132, 6545, 6102, -1162, -6167, 8828, 2652, 2234, -5547, -2871, 6777, 7517, -2125, 5004, 3513, 4111, -4037, 7185, 7460, 9687, -2098, 2944, -794, 4045, -5794, 6326, -3331, 3644, 5827, -5834, -2758, -1412, -771, 7801, 8163, -3107, -1600, -3582, 9988, -514, 5968, 4333, -2073, -6830, 2491, 9252, -727, -8132, -3601, 7482, -3401, 8853, -8354, 8669, -4606, -6628, 7289, 2055, 9752, -3446, 4513, 2517, -1652, 1894, 8980, -1752, -3872, -1689, -1546, 9196, -7501, -9524, -4534, 4182, 5347, 1889, -7823, 2781, 8105, -4617, 5715, -3265, 3674, -410, 3902, 5618, -6921, -8246, -6677, 6981, -5162, -9208, -4115, -6553, -5915, -3875, 9972, -2034, 5006, -4826, 3761, 391, -9368, -907, -3762, -8535, 730, 6576, -9123, -53, 6880, 536, -694, 120, -3897, -1769, -6286, -1402, -9633, 5595, 5622, -1323, -9548, 6807, 3790, -6012, -326, -8856, 3029, 5046, -2027, 4672, -5275, 4079, 1367, -9887, 442, 7478, -4549, -740, 5670, 1877, -6121, 826, 2806, 7922, 8256, 5308, -2609, 9585, -882, 364, -8020, -2319, -1197, -9446, 2610, 8683, 7754, -8301, 2354, -1437, 3872, -1099, 205, 2753, -6385, 4275, -9826, -4137, 4512, -5691, -853, -6966, -1889, -4256, -8150, 2045, 9942, 6909, 8396, 1785, 8242, -2285, -5727, 1673, -7797, 6030, -354, 6052, -5771, 7181, 4226, 7153, -7141, -616, 1069, 5411, 7150, -3992, 5096, 4193, -6852, -7299, -9416, -5512, -7295, -808, 8673, -9183, 4930, 8601, -4174, 2936, -422, 8006, -6447, -7570, -3490, -6707, -1538, -9082, 8890, -6888, 431, 5698, -2866, 9514, 718, 1197, -2442, 6289, -8556, -8925, -5644, 5706, 1457, 5077, 5311, -5318, -3569, -4684, 2419, -911, -2843, -7089, 9987, -4677, 8831, -5197, -3487, 7935, 8478, -2621, 8240, -4199, -7138, 6277, -7061, 2758, 7373, 830, 482, 7871, -6552, 8396, 9645, 4166, -3921, 8385, -9270, -1090, 8003, 4644, 8202, 4629, 1369, -4348, -8871, -2588, 4662, 9422, -6688, -8400, 865, 4788, -6605, 9395, 758, 8703, -3357, 598, 1876, -2503, -6867, -2222, 2752, 4665, 6719, 8498, -6994, -211, -1693, -7612, -596, -7484, -9312, 7999, 9148, 5678, -3701, -6637, -9470, 526, 5298, -8772, -2877, 3085, 9512, 9131, 7581, 6095, -7820, -649, -1264, 4771, -6223, 1612, 5467, 8118, 439, -733, -386, 7514, 5742, 8747, -9998, 5562, 3660, 5629, 78, -8511, -7189, -4553, -4289, 9112, 726, -6596, 75, -932, 4709, -8745, 3752, 3670, -8771, -832, 7736, -8449, 6906, -4346, 4073, 6525, -9654, -4580, -6530, 3854, -5938, 171, -1086, 5744, -9582, -8351, -2673, 3913, 1688, -7093, -8806, -1021, 8255, 805, 9831, 3159, -6927, -9945, -221, 4098, -8488, -8340, -807, 597, 26, 5257, -7701, 763, 2418, 2237, 6751, 6070, 6983, -7522, 1386, 79, -2054, -5628, 2293, -3479, 3535, 1430, 7941, 5534, -1849, 3831, -5110, 6070, -3382, 5136, 8085, -6733, 742, -5469, -7534, 5056, -6266, 4428, -5147, 6279, 2473, -2744, -8197, -7636, 9820, -9221, 6147, 4974, 5709, -6461, -9818, 7395, 2514, -9738, -9208, 1985, -5929, -4993, -3192, -1956, -5590, 9181, -9136, 5573, 3503, 4773, 3586, -6702, 4224, 4887, -7366, -6340, -5491, -6186, -5277, 1475, 4399, -2178, 3909, 6631, 253, -5466, -8334, -7964, 933, 7070, 7003, 2525, -7889, -3427, -6324, -7887, 1760, -2335, 4757, -4834, 295, -6868, 9245, 9680, 6190, -8575, -2642, -8444, 6567, 269, -9702, -139, 5075, 612, -7354, 4219, 130, -3606, -2643, -3600, -4625, 1566, -5968, -9562, 4231, -9504, -5364, -5751, 3270, -5019, 8012, 8696, -1092, 8639, -8727, -6677, 1412, -1217, -4414, -2381, -3509, 6134, -2410, -1407, -3555, 5307, -5069, -7790, -6332, -4117, 5025, 7267, 6110, 3005, 1082, -7214, -3165, -1692, -7647, -5924, -5876, -3682, 9048, 8084, 3047, -5210, -9272, -2827, 9002, 7729, -1272, -1412, -2743, 4049, 8693, 9210, 7893, -8939, -6312, -9265, 8711, -4858, 3723, 5348, 9236, 4875, 9490, -7580, -8080, -4971, 76, 5651, -7003, 1955, -6070, 6559, -1978, 585, -3673, 8959, -5467, -4304, -3786, -9428, -8110, 7824, 1686, 1089, 1640, -8167, -94, -118, -4813, 7988, 8128, -8188, -1929, 2607, -7596, 5589, -3375, 9046, -3957, 5557, 9633, -7725, 6905, 9818, 1238, 9864, 9245, 3170, -8792, -8238, 3740, 4829, 1364, 1911, 5045, -6268, -269, -2143, 3163, -4034, -7694, -4851, -5009, -8057, 5757, -9652, -811, -4375, -8148, -4604, 3074, -8915, 9554, 8457, -7776, 6963, 3553, -6121, 6737, -7359, 476, 2751, -1786, 5319, -307, 1543, -9910, 2508, 8515, 5218, -944, -213, 6458, 3426, -3023, 2053, -6119, -3303, 973, -7822, -5335, -9945, -7640, -8395, 7652, 8298, -9059, 4116, -5628, 8264, 1499, 2891, -3887, 1824, -7563, -9127, -380, -9883, 823, 4326, 2769, -5250, -7890, -9759, 5316, 9913, -3102, -5854, 8187, -1433, 2918, -4243, 8821, -5763, -9733, 5130, 8772, -8074, -4019, 3805, 187, 5168, -9231, 9611, -7749, -1643, -1707, 6705, 1687, 3002, 4797, -2357, 7853, 137, -1559, -9838, 260, 1248, 4558, 1292, 3476, 9265, -2668, -8930, 5509, 5126, 943, -5906, -7309, 7472, 5748, 6469, -1838, -9376, 4077, -1400, 3012, -8989, -5101, -7395, -3753, -1678, 5805, -788, -5466, 1996, -40, -9352, 5136, 9720, -385, 7448, -2723, 379, 6965, -6128, -3453, 2972, 5169, -4045, 3077, 9869, 9146, 2269, 3040, -7044, 6300, -1705, -2232, 8633, 8562, -4586, 2954, -4283, 2342, 6209, -745, 6066, 7958, 3477, -340, 9761, -236, 4954, -9559, -3528, 1328, 3891, -2408, -7054, 9740, 8169, 2663, -8214, 6971, -8721, -3413, -4129, -833, -2984, -9908, -7688, 8738, 6797, -5585, -2284, -4042, 241, 7951, 8791, 9994, -7022, -3028, 7404, 6071, 3319, -1521, 9197, 7049, 8237, -9421, 6058, 4352, -960, 5757, -2734, -7676, 8830, -4070, 68, 6837, -7356, -3699, 4035, 7089, 6990, -7813, 8695, 7014, -1111, -4893, -812, 308, 6744, 6168, 2689, 352, 6971, 4251, 8491, -4327, -5325, -1058, -8312, -862, -2946, 1858, -784, -3953, 9386, -1995, -8389, -5443, 2378, 479, 5236, 2576, 3305, 1567, -884, 1038, 8206, -4490, -1680, 4079, 4120, -6316, 9242, 342, 5964, -9465, -7255, -7680, -312, -5220, 8192, -2943, 4781, 1800, -939, -6813, -6982, 3963, -3539, 3446, -1442, -68, 3274, 7653, 5790, 2519, -5394, 1410, 8908, 377, -5468, -4996, -5446, 4069, -6676, -6862, -2374, 9678, 9792, 5471, -7053, -4489, 4725, 9623, -2288, 2743, -2831, -674, 4521, 5395, -4036, -2101, 5051, -6076, 4958, 8935, 1538, -2786, -9574, 5033, 7934, -5774, 5218, 4110, -5434, -9524, 5641, 2610, 4221, -6792, -7834, 2955, -6557, -3748, 1297, 9101, 3910, 3870, 7383, 7630, -3752, -1086, 6952, 9638, -3294, 1175, 2361, 9720, 217, -1520, -4084, -5353, -4010, 224, 9291, 3932, -6402, 8989, -6861, 9583, 3471, -2376, -4748, -177, -6568, -784, -7488, -9456, -4797, 538, 2415, -7883, 50, 2087, 2614, 4567, 1091, -3220, -8910, 5723, -9652, 4393, -2645, -2661, 6363, -9484, -1008, 3440, 3846, -6726, 4686, -8441, -1699, 8435, -2853, 647, -99, -368, -4419, 7037, 2657, -8587, 8789, 3194, -8688, -7934, -8013, -3689, 6132, -9515, 5070, 1656, -592, -2851, 3854, 5416, -7386, -1536, 7322, 1476, 5180, -3962, 1715, 4330, 7643, -4462, 4189, -2241, 5997, -1580, -5393, 4209, 8608, -3500, 5675, 2154, -1172, -6544, 4112, 5079, -7001, 7684, -4644, -5767, 8824, -9638, -1370, 1138, 5324, -1836, 1728, 1141, -3009, -3189, -876, -1362, -3886, 3527, 8105, 3015, -2740, 7226, 9333, -9329, -8058, -4381, 4160, 8198, -4269, -7590, 9888, 3360, -1705, 3288, 1701, -520, -2745, -5032, 5916, -2711, -739, -5648, -2056, 4954, 6509, -641, -411, -5207, -5380, -7245, 1562, -1311, 2336, -6921, -9173, -2845, 2677, 8425, 425, -950, -1236, -5240, 5194, 61, 7830, -802, 732, -1591, -8013, -3856, -5568, 3526, -8728, 78, 8847, -4069, -1033, 3088, 2281, -6860, -262, 8840, 8683, 4461, -1220, -9531, 4661, -7563, 914, -9647, 3747, -7792, -4473, 8033, -1620, 8907, -712, -7949, 3921, -1155, 782, -3608, 4631, -6885, 2090, 4060, 377, -9789, -7184, -173, -5940, 4843, -2302, 9013, -8657, 9934, 7048, 6985, 91, -8529, 6402, -4983, 3238, -9367, -834, -6081, -1434, -2371, -7234, 9847, 4426, -4611, 5575, 9557, 64, 9502, 2109, -8368, -8391, 1422, -7499, 6992, -7298, 8521, 2529, 5796, 6651, -5602, -3034, -6631, -9439, -2249, 3244, 1537, -2846, -9512, -2843, -9093, 8005, -1140, 971, -7496, 2649, 8524, -5508, 4002, 7295, -8780, 5015, -8511, 7800, 8476, 3944, 2835, 5633, 5345, 7965, 6273, -6931, -5249, 6024, -3019, 4738, 3618, -4801, -1031, 6288, 1565, 8128, -8364, 967, 6770, -7144, -6544, 7724, 7195, -7518, -8002, 7108, 564, 6438, -4212, -4612, 706, 2770, 7928, -4318, -4098, -7393, 9899, -9984, -7153, -6937, 978, -4909, -925, 3021, -8681, -4113, 1654, -4945, 6372, 2592, -9215, -8788, -5315, 2512, 3739, 8780, -5955, -6698, -2276, 9101, 7007, -2472, 9660, 4275, -4794, 3679, 1231, 2924, -2018, -5699, -2753, -935, 2810, -6185, 3513, 359, -3680, 9899, 7206, -2688, 8895, -5476, 1315, -3334, -6837, 7080, 455, -9264, -3194, 1014, -8435, 8663, 3572, 9206, -1385, 4652, -8561, -7404, 1870, 7970, 457, -3636, -1699, 8969, 7679, -9865, 7097, -1677, -3200, -9535, 7175, -2324, -8758, 1999, -2195, -3662, 2410, 2551, -7637, -8816, -854, -6483, -7377, 6074, -8622, 7465, 9969, 3058, -6472, -5681, 3331, 2472, -3464, -4188, -2745, 1838, -888, 1218, 5822, 5792, 8451, 8276, -5571, 7392, 9944, -8145, 3821, -544, 6974, -5551, -4476, 9545, 1013, -8635, -977, 4045, 5258, -364, 4362, -283, 8792, 1777, -6257, 7740, -3811, 9816, -2079, -5631, 172, -8491, -2611, 5684, 1152, -1703, 5346, -8938, 3579, 8392, 7523, 1626, -5784, -8525, 9457, 9452, -4626, 3087, -2155, 7949, 9427, -4381, -4932, 2699, 9137, 2046, -5887, -1397, -4265, 2062, -3265, -3484, 118, -9363, 6705, 5881, 1924, -4291, -5895, -7125, 9404, 6593, -2063, 6374, -8833, -8987, 3871, -8880, 3850, -9333, -6872, -9267, 8232, 7061, -6692, 7111, -9819, 1390, 2827, 6991, -8063, 5131, 9160, 1515, 7153, 7144, -2200, 5187, 6692, -8055, 4716, 875, -8057, -8408, -9994, 1856, 2061, -4909, 2466, -3875, -317, 3734, -3799, 2679, -3101, -250, -1812, -1175, -5125, -3699, 8521, -2162, -9213, 8651, 1692, -9678, -9103, 387, -7847, 9324, -5358, 3547, -2307, 727, -1656, -2804, 764, 2164, -9613, 6562, 7186, -6481, 4033, 6004, -5440, 7128, 5748, -4510, -9571, 9242, -9622, -907, 2541, -6295, -8615, 4132, -2106, -5056, -7792, -5387, 9090, 6872, 3433, -1188, 8937, -8517, -2614, -437, -1333, 5285, 4171, -8964, -7914, -227, 3788, -8754, 9330, -7562, -7252, -5029, 5070, -4221, 8634, 3819, -8778, 7074, 3097, -7661, 7350, -3204, -1688, 9380, 5776, 9516, 4572, 1532, -463, 9106, -7803, -241, -9698, 867, -1261, -6501, 1453, 5857, -3, -868, 8230, -945, -9400, -8542, -7522, 3255, -7673, -4458, -4871, -4542, -3976, 7128, 1046, 1872, 9887, 592, 8308, -2716, 172, -7020, -3581, 2757, 8652, -1897, -2209, 6837, -1091, -5202, 927, -2666, -3526, 1744, -3755, -424, -3111, -950, -7579, 3335, 9063, -3287, 9280, 3199, -7957, -523, -2992, -8092, 6186, 2514, 9686, 6314, 4773, 5106, 2652, -7977, -4218, 8542, -4662, -2659, -2945, -2794, 9397, 2066, -5924, 5707, 8227, 278, -7635, -1020, -4091, 4633, 9929, 550, -1710, 3439, -3300, -2177, 7692, 7958, 8151, -920, -97, -9972, 5744, 4137, 1134, 3148, 2333, -2161, 6173, 7411, 4361, -2205, -7723, -8255, 4604, -2625, 3168, -4164, -5841, 8383, 6692, 4573, -9977, -8658, 4400, -6340, 4853, -3815, 8692, 7483, 804, 508, 2292, -118, 2008, -8943, -1838, -1763, -9627, 4409, -5548, -2605, 7111, 205, 2242, 5786, -685, -8961, 7858, -9923, -336, -2744, 9346, 2750, 393, 8280, 9321, -4414, -5149, -1024, -8283, -4370, 1556, -1109, -3981, 2977, -6553, 6086, -1314, 8749, -6979, 8100, -275, -3161, -3748, -9340, 5827, -9606, 8855, -4348, -6070, 9319, 838, -4113, 7335, 8624, 2827, 5442, -4209, -7078, -5392, -4681, -2406, 5320, 918, -8993, -6509, 9535, 6072, 6572, -5051, 2839, 6401, 2397, -5440, -404, -826, 8921, 3075, 9988, -7680, 7022, 7993, -5969, 2475, -1868, 3010, 1511, 2522, -6077, 1823, -7122, -5027, 5100, 7209, -3110, -7868, 7042, 8227, 7213, -3547, -7528, -9717, 5364, 98, 4157, 3511, 5393, -27, -9093, -8775, 6778, 1877, -5630, -1101, -7168, 637, 3218, -7394, 2333, -1094, 4426, -2244, -6031, -5640, 8079, 4522, 486, -5927, 9576, -8450, -5943, -737, 7755, 1481, 1589, -7869, 2528, 2578, -4291, -3135, -5121, 4939, -7871, -4800, -9701, -9168, -2388, 8352, -3615, 275, 4846, 3552, 8017, 3670, -9502, 2839, 8076, 1611, -6209, -9682, 7600, 2395, -3776, 4497, -9552, 7147, 3469, 9896, 4130, 2698, -9825, -447, 7736, -7379, -3264, -407, 34, -7969, 3047, 244, -8653, 4916, 7084, 4769, -4176, 14, -2762, 4593, -8345, -5792, -3080, -1555, 2879, -6814, -3142, -145, 4594, -4270, 7285, 1502, 2927, -1634, -3575, -9631, -2639, -1500, 5214, -4360, -4775, 4850, 1374, -4663, 5117, -393, -1907, -5285, -4430, -2152, -4092, 1345, -2387, -4663, 1758, 6632, -6389, -2767, 6386, -9066, 8274, 1266, 3881, 6162, -3809, 418, -7179, 9557};
// //     // int k = 1823;
// //     // int count = 0;

// //     // for (int i = 0; i < nums.size(); ++i)
// //     // {
// //     //     int currSum = 0;
// //     //     for (int j = i; j < nums.size(); ++j)
// //     //     {
// //     //         currSum += nums[j];
// //     //         if (currSum % k == 0)
// //     //         {
// //     //             ++count;
// //     //         }
// //     //     }
// //     // }
// //     // cout<<"The total subarray are:- "<<count;

// // // }

// // int main(){

// // // [1, 2, 3] comes before [1, 3, 2] because '2' comes before '3' when comparing the second position.
// // // [2, 1, 4] comes after [2, 1, 3] because '4' comes after '3' when comparing the last position.

// //   vector<int> arr = {1,2,3};
// //   int size = arr.size();

// //   for(int i = 0, j = size - 1; i < size; ++i ){

// //   }

// //   for(auto element: arr){
// //     cout<<element<<" ";
// //   }

// // }

// // int main()
// // {
// //    int row = 4;
// //    int col = 4;
// //    int matrix[row][col];

// //    cout<<"Enter the element for the matrix:- "<<endl;

// //     // Take an input for the matrix element..
// //    for(int i = 0; i < row; ++i){
// //     for(int j = 0; j < col; ++j){
// //         cin>>matrix[i][j];
// //     }
// //    }

// // //  Print the Values of the matrix..
// //      for(int i = 0; i < row; ++i){
// //         for(int j = 0; j < col; ++j){
// //             cout<<matrix[i][j]<<" ";
// //         }
// //         cout<<endl;
// //      }

// //    int row = 4;
// //    int col = 4;
// // //    cout<<" Enter the no. of row and col:- "<<endl;
// // //    cin>> row>>col;

// //   int arr[row][col];

// //   cout<<"Enter the elements into the matrix:- "<<endl;

// //   for(int i = 0; i < row; ++i){
// //       for(int j = 0; j < col; ++j){
// //         cin>>arr[i][j];
// //       }
// //   }

// //   for(int i = 0; i < row; ++i){
// //     int sum = 0;
// //      for(int j = 0; j < col; ++j){
// //         // cout<<arr[i][j]<<" ";
// //         sum += arr[j][i];
// //      }
// //      cout<<"The col wise sum are:- "<<sum<<endl;
// //   }

// // for (int i = 0; i < row; ++i)
// // {
// //       if(i % 2 == 0){
// //         for(int j = 0; j < col; ++j){
// //             cout<<matrix[j][i]<<" ";
// //         }
// //       }else{
// //         for(int j = col - 1; j >= 0; --j){
// //            cout<<matrix[j][i]<<" ";
// //         }
// //       }
// // }

// // int row = 3, col = 3;
// // int matrix[row][col] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

// //     vector<vector<int>> matrix = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}};
// //     vector<vector<int>> result = {{0,0,0,0},{0,0,0,0},{0,0,0,0}};

// //     int row = matrix.size();
// //     int col = matrix[0].size();
// // }

// //  For replacing the row with -1;;

// // void rowZero(int i, int row,vector<vector<int>> &matrix){

// //    for(int j = 0; j < row; ++j){
// //       if(matrix[i][j] != 0){
// //         matrix[i][j] = -1;
// //       }
// //    }
// //     cout<<"First"<<endl;
// // }
// // void colZero(int j, int col,vector<vector<int>> &matrix){

// //    for(int i = 0; i < col; ++i){
// //     // cout<<"Hello"<<endl;
// //       if(matrix[i][j] != 0){
// //         matrix[i][j] = -1;
// //       }
// //    }
// // cout<<"Hello"<<endl;
// // }

// // int main()
// // {

// //     vector<vector<int>> matrix = {{1,1,1,1},{1,0,0,1}, {1,1,0,1}, {1,1,1,1}};
// //     int row = matrix.size();
// //     int col = matrix[0].size();

// //     for (int i = 0; i < row; ++i)
// //     {
// //         for (int j = 0; j < col; ++j)
// //         {
// //             if (matrix[i][j] == 0)
// //             {
// //                    rowZero(i, row, matrix);
// //                 //    cout<<"Hello"<<endl;
// //                    colZero(j, col, matrix);
// //             // cout<<"Hello"<<endl;
// //             }
// //         }
// //     }

// //      for (int i = 0; i < row; ++i)
// //     {
// //         for (int j = 0; j < col; ++j)
// //         {
// //             if (matrix[i][j] == -1)
// //             {
// //                      matrix[i][j] = 0;
// //             }
// //         }
// //     }

// //    for(auto element: matrix){
// //         // cout<<"Print<<";
// //        for(auto element2: element){
// //         cout<<element2<<"  ";
// //        }
// //        cout<<endl;
// //    }

// // }

// // int main()
// // {

// //     vector<int> array = {15, -2, 2, -8, 1, 7, 10, 23};
// // int target = 0;
// // int maxLength = INT_MIN;
// // vector<int> temp;

// // for (int i = 0; i < array.size(); ++i)
// // {
// //     int currSum = 0;
// //     for (int j = i; j < array.size(); ++j)
// //     {
// //         currSum += array[j];
// //         if (currSum == target && maxLength < j - i + 1)
// //         {
// //               maxLength = j-i+1;
// //             temp.clear();
// //             for (int p = i; p <= j; ++p)
// //             {
// //                 temp.push_back(array[p]);
// //             }
// //         }
// //     }
// // }

// //     for (auto element : temp)
// //     {
// //         cout << element << " ";
// //     }
// // }

// // int main()
// // {

// //     int start = 0;
// //     int end = nums.size() - 1;
// //     int result = -1;
// //     int target = 10;

// //        while(start <= end){
// //            int mid = start + (end - start) / 2;
// //            if(nums[mid] == target){
// //             result = mid;
// //             break;
// //            }else if(nums[mid] < target){
// //             result = start;
// //             start = mid + 1;
// //            }else{
// //             result= end;
// //             end = mid - 1;
// //            }
// //        }

// // #include <iostream>
// // #include <vector>
// // #include <algorithm>

// // int main() {
// //     std::vector<int> vec = {1, 2, 4, 6, 8, 10};
// //     int value = 5;

// //     auto lower = std::lower_bound(vec.begin(), vec.end(), value);

// //     if (lower == vec.begin()) {
// //         std::cout << "No floor exists for " << value << " in the array." << std::endl;
// //     } else {
// //         --lower;  // Move to the previous element
// //         std::cout << "Floor of " << value << " is " << *lower << std::endl;  // Output: 4
// //     }

// //     return 0;
// // }

// // cout<<"Element found at index of:- "<<result;
// // vector<int> arr = {5, 6, 8, 8, 6, 5, 5, 6};

// // int x = 10;
// //    auto itr = lower_bound(nums.begin(), nums.end(), 5);
// //      if(itr == nums.begin()){
// //         cout<<"-1"<<endl;
// //      }else{
// //        cout<<(*--itr);
// //      }

// //    sort(arr.begin(), arr.end());

// //        vector<int> main;

// //         int  start = 0;
// //         int end = arr.size() - 1;
// //         int result = -1;
// //         int result2 = -1;

// //           while(start <= end){
// //               int mid = start + (end - start) / 2;
// //               if(arr[mid] == x){
// //                   return mid;
// //               }else if(arr[mid] < x){
// //                   result = mid;
// //                   start = mid + 1;
// //               }else{
// //                   result2 = mid;
// //                   end = mid - 1;
// //               }

// //           }
// //           main.push_back(arr[result]);
// //           main.push_back(arr[result2]);

// //           for(auto element: main){
// //             cout<<element<<" ";
// //           }
// // }

// // int main()
// // {

// //     vector<int> arr = {5,7,7,8,8,10};
// //     int target = 8;

// //         //   Find the left Occurance of the element..
// //        int start = 0;
// //        int end  = arr.size() - 1;
// //        int first = -1;

// //        while(start  <=  end){
// //           int mid = start + (end - start) / 2;

// //             if(arr[mid] == target){
// //                 first = mid;
// //                 // end = mid - 1;
// //                 start = mid + 1;
// //             }
// //             else if(arr[mid] < target){
// //                 start = mid + 1;
// //             }else{
// //                 end = mid - 1;
// //             }
// //        }

// //        cout<<"The indexof the element are:- "<<first;

// // }

// //  int leftOccurance(vector<int> nums, int target) {

// //         int start = 0;
// //         int end = nums.size() - 1;
// //         int first = -1;

// //         while (start <= end) {
// //             int mid = start + (end - start) / 2;

// //             if (nums[mid] == target) {
// //                 first = mid;
// //                 end = mid - 1;
// //             } else if (nums[mid] < target) {
// //                 start = mid + 1;
// //             } else {
// //                 end = mid - 1;
// //             }
// //         }
// //         return first;
// //     }

// // int rightOccurance(vector<int> nums, int target) {

// //         int start = 0;
// //         int end = nums.size() - 1;
// //         int first = -1;

// //         while (start <= end) {
// //             int mid = start + (end - start) / 2;

// //             if (nums[mid] == target) {
// //                 first = mid;
// //                 start = mid + 1;
// //             } else if (nums[mid] < target) {
// //                 start = mid + 1;
// //             } else {
// //                 end = mid - 1;
// //             }
// //         }
// //         return first;
// //     }

// // int main(){

// // vector<int> nums = {3, 5, 5, 5, 5, 7, 8, 8};
// // int target = 5;
// //  //   Put the edge case for the problem..
// //         if (nums.size() == 0) {
// //             cout<<"No element"<<endl;
// //         }

// //         int first = leftOccurance(nums, target);
// //         int second = rightOccurance(nums, target);

// //         cout<<first<< " "<<second;

// //         cout<<"The num of occurance of target element are:- "<<(second - first) + 1;

// // }

// // int main(){

// // vector<int> array = {1,2,3,4,5};

// // auto itr = lower_bound(array.begin(), array.end(), 5);
// // // cout<<itr;
// // // int index = itr - array.begin();
// // // cout<<*itr;

// // // cout<<array[index];
// //   cout<<*array.begin()<<endl;
// //   cout<<*(array.end() - 1);

// // }

// // int main(){

// // vector<int> arr = {1, 2, 3, 4, 5};
// // int count = 0;
// // //   We need to find the kth rotation of the elementss into the vector or an arrray..
// //          for(int i = 0; i < arr.size() - 1; ++i){
// //               if(arr[i] > arr[i + 1]){
// //                 count = i + 1;
// //                 break;
// //               }
// //          }

// // cout<<"The Kth rotation of the vector are:- "<<count;

// // }

// // int main(){

// // vector<int> arr = {4, 5, 1, 2, 3};
// // vector<int> arr = {1, 2, 3, 4, 5, 6};
// // bool isSorted = true;
// // int count = 0;
// // //   We need to check the array is sorted or not.
// //    for(int i = 0; i < arr.size() - 1; ++i){
// //         if(arr[i] > arr[i + 1]){
// //             isSorted = false;
// //         }
// //    }
// // if(isSorted){
// //     cout<<"The array is sorted"<<endl;
// // }else{
// //     cout<<"The array is not sorted";
// // }

// // for(int i = 0; i < arr.size() - 1; ++i){
// //       if(arr[i] > arr[i + 1]){
// //        ++count;
// //        break;
// //       }
// // }
// // // cout<<isRotate<<endl;
// // if(count){
// //     cout<<"The array is rotated";
// // }else{
// //     cout<<"The array is not rotated";
// // }

// // int arr[] =
// //
// // }

// // int main()
// // {

// //     vector<int> array = {3, 8, 10, 17, 1};

// //     int start = 0;
// //     int end = array.size() - 1;

// //     while(start <= end){
// //           int mid = start + (end - start) / 2;
// //           if(array[mid] >= array[0]){
// //             start = mid + 1;
// //           }else{
// //             end = mid;
// //           }
// //     }
// //     // cout<<

// // }

// // int pivotIndex(vector<int> pivot)
// // {

// //     int start = 0;
// //     int end = pivot.size() - 1;

// // while (start < end)
// // {
// //     int mid = start + (end - start) / 2;
// //     if (pivot[mid] >= pivot[end])
// //     {
// //         end = mid;
// //     }
// //     else
// //     {
// //         start = mid + 1;
// //     }
// // }
// // return start;
// // }

// // int main()
// // {

// //     vector<int> pivot = {6, 9, 2, 4};

// //     //      Find the pivot element into the array using the binary search..

// //     cout<<"The indexof the pivot element are:- "<<pivotIndex(pivot);
// // }

// // int main()
// // {
// //     vector<int> nums = {1,2};

// //     int ans = 0;
// //         //   Solve this question using the O(n) time complexity..
// //          for(int i = 0; i < nums.size() - 1; ++i){
// //               if(nums[i] > nums[(i + 1) % nums.size()]){
// //                 ans = i;
// //                 break;
// //               }
// //          }
// // cout<<"The answer is:- " <<ans;

// // 1
// // 2 3
// // 4 5 6
// // 7 8 9 10
// // 11 12 13 14 15
// // int n = 11;
// // int print = 1;
// // for(int i = 0; i < n; ++i){
// //      for(int j = i; j >= 0; --j){
// //           cout<<print++<<" ";
// //      }
// //      cout<<endl;
// // }

// // int n = 4;

// // int value = -1;

// // for (int i = 1; i < n; ++i)
// // {
// //   if (pow(i, i) == n)
// //   {
// //     value = i;
// //     // return i;
// //   break;
// //   }
// // }

// // cout<<"The perfect square for the number is:- "<<value;

// //   int n = 2;
// //   cout<<floor(pow(n, 0.5));

// // }

// // int main(){

// //  vector<int> piles = {3,4,7,11};
// //      int hour = 8;
// //    Output we get the 30..

// //    Implement the binary search..

// // int start = 1;
// // int end = *max_element(piles.begin(), piles.end());
// // int hourCount = 0;

// // //  cout<<start<<" "<<end;

// // while(start < end){

// //       int mid = start + (end - start) / 2;
// //       int hourCount = 0;

// //        for(auto element: piles){
// //            hourCount += element / mid;

// //            if(element % mid != 0){
// //              ++hourCount;
// //            }
// //        }

// //       //  if(hourCount <= hour){
// //       //      end = mid;
// //       //  }else{
// //       //       start =  mid + 1;
// //       //  }
// //       hourCount <= hour ? end = mid : start = mid + 1;
// // }
// // cout<<"The value are:- "<<start;
// // }

// // int main(){

// //    vector<int> arr1 = {2, 3, 6, 7, 9};
// //    vector<int> arr2 = {1,4,8,10};

// //          int i = 0, j = 0;
// //          int k = 5;
// //          vector<int> main;

// //     while(i < arr1.size() && j < arr2.size()){

// //       if(arr1[i] < arr2[j]){
// //         main.push_back(arr1[i++]);
// //       }else{
// //         main.push_back(arr2[j++]);
// //       }
// //     }

// //     while(i < arr1.size()){
// //          main.push_back(arr1[i++]);
// //     }

// //     while(j < arr2.size()){
// //          main.push_back(arr2[j++]);
// //     }

// //   //  cout<<"The value is equal to:- "<<main[k - 1];

// //    for(auto element: main){
// //       cout<<element<<" ";
// //    }

// // }

// // int main(){

// //    vector<int> arr1 = {2, 3, 6, 7, 9};
// //    vector<int> arr2 = {1,4,8,10};

// //    int m = arr1.size();
// //    int n = arr2.size();

// //    arr1.resize(m + n);

// //    int i = m - 1;
// //    int j = n - 1;
// //    int mergeLast = m + n - 1;

// //          while(i >= 0 && j >= 0){

// //               if(arr1[i] > arr2[j]){
// //                 arr1[mergeLast] = arr1[i--];
// //               }else{
// //                 arr1[mergeLast] = arr2[j--];
// //               }
// //           mergeLast--;
// //          }

// //          while(i >= 0){
// //               arr1[mergeLast--] = arr1[i--];
// //          }

// //          while(j >= 0){
// //               arr1[mergeLast--] = arr2[j--];
// //          }

// //      for(int i = 0; i < arr1.size(); ++i){
// //          cout<<arr1[i]<<" ";
// //      }
// // }

// // int main(){

// // vector<int> first = {1, 3, 8, 9, 15};
// // vector<int> second = {7, 12, 18, 19, 21};

// // vector<int> result;

// // int i = 0, j = 0 ;
// // while( i < first.size() && j < second.size()){
// //     if(first[i] <= second[j]){
// //         result.push_back(first[i++]);
// //     }else{
// //       result.push_back(second[j++]);
// //     }
// // }
// // while(i < first.size()){
// //     result.push_back(first[i++]);
// // }
// // while(j < second.size()){
// //     result.push_back(second[j++]);
// // }

// // int median = 0;
// // //   Find the medium..
// //     if(result.size() % 2 == 0){
// //         median = result[result.size() / 2]  + result[(result.size() / 2 )- 1];
// //     }else{
// //       median = result[result.size() / 2];
// //     }

// // for(auto element: result){
// //     cout<<element<<" ";
// // }
// // cout<<endl;
// // cout<<"The median are:- "<<(double)median / 2;

// // }

// //  int main(){

// //   vector<int> array = {1,3,5,6,7,8,11,13,14,16,17,18,19,20,21,23,24,25,26,28,29,30,31,34,35,36,37,38,41,43,44,47,50,51,53,54,56,57,58,59,60,62,63,65,67,68,69,70,71,72,73,74,76,78,80,81,83,84,85,88,89,90,91,92,93,95,97,98,102,103,104,105,108,109,110,111,112,113,114,117,120,123,124,125,127,128,129,130,131,132,133,135,136,137,138,139,141,142,145,146,148,149,150,151,153,154,155,156,161,162,164,167,168,169,170,171,172,175,176,178,179,181,182,184,191,193,195,196,199,201,202,204,205,208,210,214,215,217,219,221,222,224,226,228,229,230,231,232,234,235,236,240,242,246,248,249,251,252,253,254,255,256,257,258,259,260,261,262,265,267,269,272,273,275,278,279,280,281,282,283,284,285,286,287,289,291,292,293,296,297,298,299,303,305,306,308,312,313,315,316,318,320,323,324,327,330,332,335,337,340,342,343,344,346,349,350,352,353,354,356,357,359,360,362,366,367,369,370,374,375,376,377,378,379,382,384,386,390,392,393,394,395,396,399,400,401,403,406,411,413,415,416,420,424,425,426,427,429,430,432,434,435,436,437,438,439,440,441,442,443,444,446,447,448,449,452,455,456,458,459,460,461,462,463,464,465,466,467,469,470,471,472,477,479,480,483,484,486,488,489,490,491,492,493,494,495,500,501,503,504,506,508,510,513,514,515,516,517,527,531,533,534,535,536,542,543,546,547,548,549,550,553,556,559,561,562,563,566,567,569,571,572,576,578,579,581,582,583,584,586,589,591,592,593,594,595,598,600,601,602,603,605,606,607,609,611,612,613,614,616,617,621,622,624,625,626,627,630,631,633,635,636,637,639,640,643,644,646,647,648,649,650,651,652,654,658,660,661,662,663,664,665,667,668,669,672,673,678,679,683,685,686,687,689,690,691,692,693,695,696,697,701,702,703,704,707,709,711,714,717,718,719,720,721,723,724,725,726,728,729,730,733,735,736,737,738,740,742,745,746,747,750,754,755,757,759,761,763,765,768,771,773,774,775,776,779,780,781,782,783,784,787,788,789,790,791,792,794,795,797,798,800,801,805,806,808,810,811,812,814,816,819,822,824,825,826,828,831,833,835,838,841,842,844,845,846,847,849,853,854,855,857,858,861,862,866,868,869,870,874,878,882,884,885,888,889,890,892,893,897,900,903,905,906,907,908,911,913,916,918,920,921,922,924,925,926,928,929,930,932,933,934,936,937,938,940,942,944,946,949,953,954,956,957,958,961,962,964,965,966,969,972,973,974,976,977,978,979,980,981,982,984,985,986,988,993,996,997,999};
// //    int value = 724;
// //    int count = 0;
// //    vector<int>  result;

// //    for(int i = 1; i <= 999; ++i){
// //          if(find(array.begin(), array.end(), i) == array.end()){
// //              result.push_back(i);
// //          }
// //    }

// // for(auto element: result){
// //      count += 1;
// //       cout<<element<<" ";
// //   }
// //   // cout<<endl;
// //   // cout<<count<<endl;
// //   // cout<<result[value - 1];
// //  }

// // int main(){

// // vector<int> arr1 = {1, 3, 8, 9, 15};
// // vector<int> arr2 = {7, 12, 18, 19, 21};

// // int n = arr1.size();
// // int m = arr2.size();

// //    arr1.resize(n + m);

// //             long long i = n - 1;
// //             long long j = m - 1;
// //             long long k = n + m - 1;

// //             while(i >= 0 && j >= 0 ){
// //                  if(arr1[i] > arr2[j]){
// //                        arr1[k] = arr1[i--];
// //                  }else{
// //                      arr1[k] = arr2[j--];
// //                  }
// //                  k--;
// //             }
// //             while(i >= 0){
// //                 arr1[k--] = arr1[i--];
// //             }
// //             while(j >= 0){
// //                 arr1[k--] = arr2[j--];
// //             }

// //    for(auto element: arr1){
// //       cout<<element<<" ";
// //    }
// // }

// // int main(){
// // int matrix[][3]= {{0, 1, 1},{0, 0, 1},{1, 1, 1},{0, 0, 0}};
// // vector<vector<int>> matrix = {{0}, {0}};

// // pair<int, int> myPair;      //  Pair used to store the maximum 1 and the row number;
// // int rowNumber = 0;
// // int checkCount = INT_MIN;
// // for(int i = 0;i < 2; ++i){
// //   int count = 0;
// //      for(int j = 0; j < 2; ++j){
// //           if(matrix[i][j] != 0){
// //                ++count;
// //           }
// //      }
// //      if(checkCount < count){
// //       checkCount = count;
// //       rowNumber = i;
// //      }
// //     //  cout<<endl;
// // }
// // cout<<"The maximum 1 row are:- "<<rowNumber;

// //  cout<<"The column size are:- "<<col;
// // }

// // int main(){

// //   //  vector<vector<int>> matrix = {{0, 1, 1, 1},{0, 0, 1, 1},{1, 1, 1, 1},{0, 0, 0, 0}};
// //    vector<vector<int>> matrix = {{0,0}, {0,0}};

// //      int value = 1;
// //      int max1 = 0;
// //      int index = -1;
// //      int i = 0;
// //      for(auto element: matrix){

// //     int count = std::count(element.begin(), element.end(), 1);
// //        if(max1 < count){
// //           max1 = count;
// //           index = i;
// //        }
// //        i++;
// //      }

// //      cout<<"The row are:- "<<index;

// // }

// // int main()
// // {

// // vector<vector<int>> matrix = {{1}, {2}, {3}, {4}};

// // int R = matrix.size();
// // int C = matrix[0].size();

// //  vector<int> mySet;

// //         for(int i = 0; i < R; ++i){
// //                for(int j = 0; j < C; ++j){
// //                     mySet.push_back(matrix[i][j]);
// //                }
// //         }

// // sort(mySet.begin(), mySet.end());

// //         if(mySet.size() % 2 == 0){
// //             // return mySet[mySet.size() / 2] + mySet[mySet.size() / 2] - 1 / 2;

// //             cout<<(float)(mySet[mySet.size() / 2] + mySet[mySet.size() / 2] - 1) / 2<<endl;
// //         }else{
// //             // return mySet[mySet.size() / 2];
// //             cout<<mySet[mySet.size() / 2]<<endl;
// //         }

// // string str = "tushar Kumar";
// //   Output are:- "Kumar tushar"

// // cout<<str.append(" hello")<<endl;
// // cout<<str<<endl;
// // cout << str.at(3) << endl;
// // cout << str.back() << endl;
// // cout << str.front() << endl;
// // cout << str.size() << endl;
// // cout << str.capacity() << endl;
// // cout << *str.cbegin() << endl;
// // cout << *str.cend() << endl;
// // // str.clear();
// // cout << str.size() << endl;
// // cout << str.capacity() << endl;
// // // cout<<*str.crbegin();
// // // cout<<*str.crend();
// // cout << str.data() << endl;
// // cout << str.empty() << endl;
// // cout << str.erase(0, 8) << endl;

// //   string str2 = "tushar kumar";
// //   string myStr = "";
// //   vector<string> vectStr;
// //   for (auto ch : str2)
// //   {
// //        if(ch  == ' '){
// //          vectStr.push_back(myStr);
// //          myStr.clear();
// //        }else{
// //           myStr += ch;
// //        }
// //   }

// // cout<<vectStr.size();
// //   for(auto element: vectStr){
// //         for(auto ele: element){
// //             cout<<ele;
// //         }
// //         cout<<endl;
// //   }
// // }

// // int main(){

// //  A anagram means if the two string have the same number of character frequency are called the anagram.
// //  string first = "anagram";
// //  string second = "nagaam";

// //  unordered_map<char, int> myMap;
// //  unordered_map<char, int> myMap2;

// //      for(auto ch: first){
// //          myMap[ch]++;
// //      }

// //      for(auto ch: second){
// //          myMap2[ch]++;
// //      }

// //   if(myMap == myMap2){
// //     cout<<"The string is anagram"<<endl;
// //   }else{
// //     cout<<"The string is not the anagram";
// //   }

// //  string first = "anagram";
// //  string second = "nagaram";

// //  for(auto element: second){
// //      if(first.find(element) == std::string::npos){
// //       cout<<"The string is not the anagram"<<endl;
// //           break;
// //      }
// //  }
// // }

// // int main()
// // {

// // int startStr = -1;
// // int startGoal = -1;

// // for(int i = 0, j = 0; i < str.size()&& j < goal.size();){
// //          if(str[i] == goal[j]){
// //            startStr = i;
// //            startGoal = j;
// //            break;
// //          }
// //          ++i;
// // }

// // cout<<startStr<<" "<<startGoal;

// // for(int i = startStr, j = startGoal, count = 0; count <= str.size();){
// //            if(str[i] == goal[j]){
// //               ++count;
// //               i = ((i + 1) % str.size());
// //               j = ((j + 1) % goal.size());
// //            }else{
// //             cout<<"The sting is not the rotation";
// //             break;
// //            }
// // }
// // string str = "egg";
// // string goal = "add";

// // if (str.length() != goal.length())
// // {
// //   return false;
// // }

// // unordered_map<char, int> myMap;

// // for (int i = 0, j = 0; i < str.size() && j < goal.size(); ++i, ++j)
// // {
// //       if(myMap.find(str[i]) != myMap.end()){
// //            if(str[i] - goal[j] != myMap[str[i]]){
// //                return false;
// //            }
// //       }
// //   myMap[str[i]] = str[i] - goal[j];
// // }

// // for(auto element: myMap){
// //   cout<<element.first<<" "<<element.second<<endl;
// // }
// // string s = "  hello world  ";
// // string demo = "";
// // vector<string> myVect;

// //       for(int i = s.size() - 1; i >= 0; --i)
// //       {
// //         if (s[i] == ' ')
// //         {
// //            reverse(demo.begin(), demo.end());
// //            if(demo != ""){
// //             myVect.push_back(demo);
// //            }
// //            demo.clear();
// //         }else{
// //           demo += s[i];
// //         }
// //       }
// //       reverse(demo.begin(), demo.end());
// //       myVect.push_back(demo);

// //   string result = "";
// //   for(auto element: myVect){
// //       result += element + " ";
// //   }
// //   cout<<result<<"F";

// //  string str = "9788";

// // if(stoi(str) % 2 == 1){
// //   cout<<str;
// // }

// // int maxi = INT_MIN;
// //    for(auto element: str){
// //       int value = element - '0';
// //       if(value % 2 == 0){
// //         continue;
// //       }else{
// //           maxi = max(maxi, value);
// //       }
// //    }
// // }

// // int main(){

// // vector<int> myArray = {2,3,2,3,5};
// // int p = 5;

// // unordered_map<int, int> myMap;

// // for(int i = 0; i < myArray.size(); ++i){
// //      myMap[myArray[i]]++;
// // }

// // for(int j = 1; j <= myArray.size(); ++j){
// //    myArray[j - 1] = myMap[j];
// // }

// // for(int i = 1, j = 0 ; i <= myArray.size(); ++i){
// //     myArray[j++] = myMap[myArray[i - 1]];
// // }

// // for(auto element: myMap){
// //     // cout<<element.first<<" "<<element.second<<" "<<endl;
// // }

// // for(auto element: myArray){
// //     cout<<element<<endl;
// // }
// // }

// // int main(){

// // vector<int> myVect = {3,6,9};
// // vector<int> myVect = {3,6,9};
// // int k , size;
// // k = size = 5;
// //   Output we got the 2..
// // unordered_map<int, int> myMap;

// // for(int i = 0; i  <  myVect.size(); ++i){
// //       myMap[myVect[i]]++;
// // }

// // for(int i = 0 ; i  <  myVect.size(); ++i){
// //      int element = myVect[i];
// //        for(int j = k; j >= 1 ; --j){
// //              if(myMap.find(element + j) != myMap.end()){
// //                   myMap[element + j]++;
// //              }
// //        }
// // }

// // int maxi = INT_MIN;
// // for(auto element: myMap){
// //     maxi = max(maxi, element.second);
// // }
// // cout<<maxi;
// // }

// // int main(){

// //    Bubble Sort for sorting the elements for the array..

// // vector<int> myVect = {3,2,1};

// // // sort(myVect.begin(), myVect.end());

// //   for(int i = 0; i < myVect.size(); ++i){
// //        for(int j = 0; j < myVect.size() - 1; ++j){
// //           if(myVect[j] > myVect[j + 1]){
// //               swap(myVect[j], myVect[j + 1]);
// //           }
// //        }
// //   }

// //  for(auto element: myVect){
// //   cout<<element<<" ";
// //  }

// //    Implementation of the selection sort for the array elements..

// //     vector<int> myVect = {7,6,5,4,3,2,1};

// //     for(int i = 0; i < myVect.size(); ++i){
// //           int minIndex = i;
// //           for(int j = i + 1; j < myVect.size(); ++j){
// //                  if(myVect[minIndex] > myVect[j]){
// //                     minIndex = j;
// //                  }
// //           }
// //           swap(myVect[minIndex], myVect[i]);
// //     }

// //  for(auto element: myVect){
// //      cout<<element<<" ";
// //  }

// //  Insertion Sort for sorting the array elements..
// //  vector<int> vect= {5,4,3,2,1};

// //    Logic for the insertion sort..

// // for(int i = 1; i < vect.size(); ++i){
// //      int element = vect[i];
// //      int j = i - 1;
// //      for(; j >= 0; --j ){
// //           if(element < vect[j]){
// //              vect[j+ 1] = vect[j];
// //           }else{
// //             break;
// //           }
// //      }
// //      vect[j + 1] = element;
// // }

// // for(auto element: vect){
// //   cout<<element<<" ";
// // }

// //   Merge Sort for sorting the elements of the array..

// //  vector<int> vect = {10,9,8,7,6,5,4,3,2,1};
// //  mergeSort(vect, 0, vect.size() - 1);

// // }

// // void merge(int *arr, int start, int end){

// // // cout<<"Hello";
// // int mid = start + (end - start) / 2;

// // //   Find the length for the subarrays..
// //    int length1 =  (mid - start) + 1;
// //    int length2 = end - mid;

// // // cout<<length1<<" "<<length2;

// //   //    Create the array dynamically of length the above given..
// //      int *arr1 = new int[length1];
// //      int *arr2 = new int[length2];

// //   //    Copy the value of the main array into the new array which is previously created..
// //      for(int i = 0, j = start; i < length1; ++i){
// //         arr1[i] = arr[j++];
// //      }

// //      for(int j = 0, p = mid + 1; j < length2; ++j){
// //         arr2[j] = arr[p++];
// //      }

// //     //    Here we have the two arrays now we need to merge them into the sorted order.

// //     int i = 0, j = 0, k = start;
// //     while(i < length1 && j < length2){
// //         if(arr1[i] < arr2[j]){
// //             arr[k] = arr1[i++];
// //         }else{
// //           arr[k] = arr2[j++];
// //         }
// //         ++k;
// //     }

// //     while(i < length1){
// //         arr[k++] = arr1[i++];
// //     }

// //     while(j < length2){
// //         arr[k++] = arr2[j++];
// //     }
// // }

// // void mergeSort(int *arr, int start, int end)
// // {

// //   //   Using the Recursion so we need to the base case for the recursion..
// //   if (start >= end)
// //   {
// //     return;
// //   }

// //   //    Calcumate the mid and sort the left array and the right array.
// //   int mid = start + (end - start) / 2;

// //   //   Now the time to call the recursion array and sort them..
// //   // cout<<"Hello Bhai";
// //   mergeSort(arr, start, mid);
// //   mergeSort(arr, mid + 1, end);
// //   merge(arr, start, end);

// // }

// // int main()
// // {

// //   int arr[] = {865, 546, 975, 349, 123, 658, 465, 325, 746, 985,
// //              231, 12, 965, 674, 432, 128, 789, 54, 357, 135,
// //              987, 876, 234, 567, 432, 754, 976, 321, 156, 654,
// //              897, 123, 764, 345, 210, 809, 902, 541, 698, 304,
// //              251, 389, 567, 692, 712, 879, 423, 512, 893, 670};
// //   int size = sizeof(arr) / sizeof(arr[0]);

// // cout<<"Before Array:- ";
// //    for(int i = 0; i < size; ++i){
// //        cout<<arr[i]<<" ";
// //    }
// //   cout<<endl;
// //   mergeSort(arr, 0, size - 1);
// //   cout<<"After Array:- ";
// //   for(int i = 0; i < size; ++i){
// //       cout<<arr[i]<<" ";
// //   }
// //   // int start = 0;
// //   // int end = vect.size() - 1;
// //   // int mid = start + (end - start) / 2;
// //   // merge(vect, start, mid, end);

// // }

// // int partition(int *arr, int start, int end)
// // {

// //   // Store the pivot element..
// //   int pivotElement = arr[start];
// //   int countIndex = 0;

// //   //   Calculate the correct position of the pivot element..
// //   for (int i = start + 1; i <= end; ++i)
// //   {
// //     if (pivotElement > arr[i])
// //     {
// //       ++countIndex;
// //     }
// //   }

// //   // cout<<countIndex;

// //   //   Replace the element from the pivot element..
// //   int pivotIndex = start + countIndex;
// //   swap(arr[pivotIndex], arr[start]);

// //   //   Now applying the two pointer appproach using on the array..
// //   int i = start;
// //   int j = end;

// //   while (i < pivotIndex && j > pivotIndex)
// //   {

// //     while (arr[i] <= arr[pivotIndex])
// //     {
// //       ++i;
// //     }
// //     while (arr[j] > arr[pivotIndex])
// //     {
// //       --j;
// //     }

// //     //  Swap the elements..
// //     if (i < pivotIndex && j > pivotIndex)
// //     {
// //       swap(arr[i++], arr[j--]);
// //     }
// //   }
// //   return pivotIndex;
// // }

// // void quickSort(int *arr, int start, int end)
// // {
// //   //   Base case for the recursion..
// //   if (start >= end)
// //   {
// //     return;
// //   }

// //   //    Calculate the mid Value for the array elements..

// //   int returnIndex = partition(arr, start, end);
// //   // cout<<returnIndex;
// //   quickSort(arr, start, returnIndex - 1);
// //   quickSort(arr, returnIndex + 1, end);
// // }

// // int main()
// // {

// //   //  Implement the Quick sort algorithm to sort the elemnts..
// //   int arr[] = {865, 546, 975, 349, 123, 658, 465, 325, 746, 985,
// //                231, 12, 965, 674, 432, 128, 789, 54, 357, 135,
// //                987, 876, 234, 567, 432, 754, 976, 321, 156, 654,
// //                897, 123, 764, 345, 210, 809, 902, 541, 698, 304,
// //                251, 389, 567, 692, 712, 879, 423, 512, 893, 670};
// //     //  int arr[] = {5,1,2,4,3,7,6,9,8};

// //   int size = sizeof(arr) / sizeof(arr[0]);
// //   cout << "Before the array:- ";
// //   for (int i = 0; i < size; ++i)
// //   {
// //     cout << arr[i] << " ";
// //   }
// //   cout << endl;
// //   //  Quick Sort Algorithm..
// //   quickSort(arr, 0, size - 1);
// //   cout<<"After Array:- ";
// //   for(int i = 0; i < size; ++i){
// //        cout<<arr[i]<<" ";
// //   }
// // }

// // int main()
// // {

// //   // int arr[] = {2,4,1,3,5};
// //   int arr[] = {5,4,3,2,1};
// //   int size = sizeof(arr) / sizeof(arr[0]);
// //   int count = 0;
// //    for(int i = 0; i < size; ++i){
// //     int element = arr[i];
// //         for(int j = i + 1; j < size; ++j){
// //              if(element  > arr[j] && i < j ){
// //                ++count;
// //              }
// //         }
// //    }

// // cout<<"The maximum number of inversions are:- "<<count;

// // vector<int> nums = {0};

// // vector<int> store(nums.size(), 0);

// // for (int i = 0,j = 0; i < nums.size(); ++i)
// // {
// //   if (nums[i] != 0)
// //   {
// //     store[j++] = nums[i];
// //   }
// // }
// // nums = store;

// // for(auto element: nums){
// //   cout<<element<<" ";
// // }

// // vector<int>  vect = {3, 1, 4, 1, 5, 9, 2, 6};

// //   First We need to find the maximum element into the array..
// // int maxElement = INT_MIN;
// //   for(int i = 0; i < vect.size(); ++i){
// //         maxElement = max(maxElement, vect[i]);
// //   }
// //  int secondMax = INT_MIN;

// //  for(int i = 0; i <  vect.size(); ++i){
// //         if(vect[i] < maxElement){
// //           secondMax = max(secondMax, vect[i]);
// //         }
// //  }
// //  cout<<"The maximum element are:- "<<maxElement<<endl;
// //  cout<<"The Second maximum element are:- "<<secondMax;

// // vector<int> arr1 = {1, 2, 3, 4, 5};
// // vector<int> arr2 = {1, 2, 3, 6, 7};

// // for(auto element: arr2){
// //      if(arr1.erase(element) ){
// //         cout<<"The erased element are:- "<<element<<endl;
// //      }
// // }
// // vector<int> vect = {5,4,-1,7,8};

// // int currSum = 0, maxi = INT_MAX;

// // //   The time complexityof this algorithm are :- O(n) and the space are O(1);
// // for (int i = 0; i < vect.size(); ++i)
// // {
// //   //  First Calculate the sum for the array..
// //   currSum += vect[i];

// //   // Store the maximum Value intot the maxi.
// //   maxi = min(maxi, currSum);

// //   // If Sum are negative then sum = 0;
// //   if(currSum > 0){
// //       currSum = 0;
// //   }
// // }
// //   cout<<"The maximum subarray sum are:- "<<maxi;

// //    This time complexity are O(n2) and the space is O(1)
// //   vector<int> vect = {5,4,-1,7,8};
// // int maxi = 0;
// // int allSubarraySum = 0;
// //   for(int i = 0; i < vect.size(); ++i){
// //          int sum = 0;
// //          for(int j = i; j < vect.size(); ++j){
// //             sum += vect[j];
// //             allSubarraySum += sum;
// //          }
// //     cout<<maxi<<endl;
// //   }
// //   cout<<"The maximum Subarray sum are:- "<<allSubarraySum;

// // bool isPresent = false;

// // for(int i = 0 ; i < subArray.size(); ++i){
// //      int sum = 0;
// //       for(int j = i; j < subArray.size(); ++j){
// //              sum += subArray[j];
// //               if(sum == k){
// //                  cout<<"The subarray present into the array";
// //                   isPresent = true;
// //                 break;
// //               }
// //       }
// //       if(isPresent){
// //         break;
// //       }
// // }

// // vector<int> subArray = {1,3,2,5,7,2};
// // int k = 14;
// // int currSum = 0;
// // int start = 0;
// // int end = -1;
// // unordered_map<int, int> myMap;
// // for(int i = 0; i < subArray.size(); ++i){

// //      // Calculate the sum of the elements..
// //         currSum += subArray[i];

// //         //  Check the till current the elements sum are equal to K..
// //         if(currSum - k == 0){
// //            start = 0;
// //            end = i;
// //           //  break;
// //         }

// //         //   Check if the  subarray present into the hashmap..
// //            if(myMap.find(currSum - k) != myMap.end()){
// //                 start = myMap[currSum - k] + 1;
// //                 end = i;
// //                 // break;/
// //            }
// //    myMap[currSum] = i;
// // }

// // cout<<"The indexes for the subarray which sum equals to k are:- "<<start<<" "<<end;

// // vector<int> subArray = {10,15,-5, 15, -10, 5};
// // int k = 5;
// // int maxLength = INT_MAX;

// //  for(int i = 0; i < subArray.size(); ++i){
// //        int sum = 0;
// //        for(int j = i; j < subArray.size(); ++j){
// //            sum += subArray[j];
// //              if(sum == k){
// //                 maxLength = min(maxLength, (j - i)+ 1);
// //              }
// //        }
// //  }

// // cout<<"The maximum subarray length which sum equals to k are:- "<<maxLength;

// // }

// // int main()
// // {

// //   vector<int> subArray = {4,3,2,2,5,6};
// //   int k = 7;
// //   int currSum = 0;
// //   int start = 0;
// //   int end = -1;
// //   int minLength = INT_MAX;
// //   unordered_map<int, int> myMap;
// //   for (int i = 0; i < subArray.size(); ++i)
// //   {

// //     // Calculate the sum of the elements..
// //     currSum += subArray[i];

// //     //  Check the till current the elements sum are equal to K..
// //     if (currSum - k == 0)
// //     {
// //       start = 0;
// //       end = i;
// //       minLength = min(minLength, end - start + 1);

// //     }

// //     //   Check if the  subarray present into the hashmap..
// //     if (myMap.find(currSum - k) != myMap.end())
// //     {
// //         start = myMap[currSum - k] + 1;
// //         end = i;
// //         if(minLength > (end - start) + 1){
// //       cout<<"Hello";
// //           // minLength = max(minLength, end - start + 1);
// //           cout<<start<<" "<<end;
// //             minLength = (end- start + 1);
// //         }

// //     }
// //     if(myMap.find(currSum) == myMap.end()){
// //         myMap[currSum] = i;
// //     }

// //   minLength = minLength == INT_MIN ? 0 : minLength;
// //   }

// //   cout<<"The minimum length of the subarray which sum equals to K:- "<<minLength;
// // }

// // int main(){

// // vector<int> vect = {11,81,94,43,3};
// // Output we want:-
// // int sumValue = 0;

// // for(int i = 0; i < vect.size(); ++i){
// //     for(int j = i ;j < vect.size(); ++j){
// //          int sum = 0;
// //          vector<int> temp;
// //          for(int k = i; k <= j; ++k){
// //                 temp.push_back(vect[k]);
// //          }
// //          sumValue += *min_element(temp.begin(), temp.end());
// //          temp.clear();
// //     }
// // }

// //     cout<<"The total sum are:- "<<sumValue;
// // }

// // int main(){

// // vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

// // int row = matrix.size();
// // int col = matrix[0].size();

// // for(int i = 0; i < row; ++i){
// //      for(int j = i; j < col; ++j){
// //          swap(matrix[i][j], matrix[j][i]);
// //      }
// // }

// // for(auto &element: matrix){
// //        reverse(element.begin(), element.end());
// // }

// // for(auto element: matrix){
// //      for(auto element2: element){
// //         cout<<element2<<" ";
// //      }
// //      cout<<endl;
// // }

// // }

// // vector<int> vect = {30, 10, 10, 5};
// // int count = 0;
// // vector<int> store;
// // for (int i = 0; i < vect.size(); ++i)
// // {
// //   int element = vect[i];
// //   bool isCount = true;

// //   for (int j = i + 1; j < vect.size(); ++j)
// //   {
// //     if (element < vect[j])
// //     {
// //       isCount = false;
// //     }
// //   }
// //   if(isCount){
// //   store.push_back(element);
// //     ++count;
// //   }
// // }

// // for(auto element: store){
// //     cout<<element<<" ";
// // }

// // void rowZero(int rowValue, int col, vector<vector<int>> &matrix){
// //    for(int i = 0; i < col; ++i){
// //     // cout<<i<<" "<<rowValue<<endl;
// //           // matrix[rowValue][i] = -1;
// //           if(matrix[rowValue][i] != 0){
// //               matrix[rowValue][i] = -1;
// //           }
// //    }
// // }

// // void colZero(int colValue, int row, vector<vector<int>> &matrix){

// //    for(int j = 0; j < row; ++j){
// //     // cout<<j <<" "<<colValue<<endl;
// //           if(matrix[j][colValue] != 0){
// //               matrix[j][colValue] = -1;
// //           }
// //    }
// //   // cout<<"I am not yet done sir ";
// // }

// // int main()
// // {

// // vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
// // int row = matrix.size();
// // int col = matrix[0].size();

// // for(int i = 0; i < row; ++i){
// //      for(int j = 0; j < col; ++j){
// //         if(matrix[i][j] == 0){
// //              rowZero(i, col, matrix);
// //              colZero(j, row, matrix);
// //         }
// //      }
// // }

// // for(int i = 0; i < row; ++i){
// //      for(int j = 0; j < col; ++j){
// //         if(matrix[i][j] == -1){
// //              matrix[i][j] = 0;
// //         }
// //      }
// // }

// // for(auto element: matrix){
// //      for(auto element2: element){
// //           cout<<element2<<" ";
// //      }
// //      cout<<endl;
// // }
// // }

// // int main()
// // {

// // vector<int> arr = {16, 17, 4, 3, 5, 2};

// // int count = 0;
// // vector<int> store;

// // for (int i = 0; i < arr.size(); ++i)
// // {
// //      int element = arr[i];
// //      bool isCount = true;

// //      for (int j = i + 1; j < arr.size(); ++j)
// //      {
// //           if (element < arr[j])
// //           {
// //                isCount = false;
// //           }
// //      }
// //      if (isCount)
// //      {
// //           store.push_back(element);
// //           ++count;
// //      }
// // }
// // for(auto element: store){
// //        cout<<element<<" ";
// // }

// //      we need the optimized solution for this leader problem..

// //    Input :-  [16,17,4,3,5,2];

// //    vector<int> input = {9489, 8245, 6980, 7076, 1396, 8163, 2524, 6553, 2644, 2690, 5714, 471, 360, 4953, 5789, 2197, 9790, 9883, 6448, 1809, 8883, 8285, 8747, 2204, 1957, 4775, 1588, 1362, 8930, 3273, 1822, 4855, 1388, 5653, 2323, 4205, 1387, 9578, 7299, 2195, 4799, 1553, 457, 1271, 7489, 3280, 86, 4315, 7861, 4491, 8221, 6405, 2207, 6923, 6746, 6305, 7278, 8695, 7440, 386, 1705, 7758, 7053, 8021, 2277, 2471, 4524, 9814, 9808, 8128, 359, 2828, 6173, 8130, 3014, 2655, 9356, 2118, 8360, 9466, 8981, 7713, 1885, 8811, 7857, 3210, 9119, 776, 3862, 6572, 2731, 107, 1805, 5414, 2063, 3406, 2225, 2864, 4817, 5090, 6070, 9097, 9609, 4761, 8883, 7339, 3196, 1892, 3933, 1328, 7047, 7814, 9426, 1438, 3540, 9607, 4111, 5661, 7756, 9220, 9918, 746, 5641, 6964, 1248, 452, 4870, 4566, 9123, 6147, 7046, 8166, 2656, 6120, 9502, 4030, 531, 4064, 496, 137, 7976, 3330, 2437, 9891, 1487, 2888, 8054, 5116, 3387, 4250, 6486, 6923, 8044, 1813, 5168, 7519, 4663, 2971, 9912, 7585, 5023, 1284, 5825, 5573, 9523, 7747, 1643, 1423, 6404, 3683, 2966, 8547, 7536, 8096, 679, 9733, 6592, 658, 182, 8830, 6026, 1875, 5442, 5648, 9316, 3714, 8145, 449, 8758, 3888, 3080, 1523, 4394, 5352, 1668, 4500, 6291, 9276, 6674, 5089, 1671, 1642, 3185, 7941, 6379, 3469, 674, 9295, 8682, 9984, 5721, 9138, 7360, 4605, 4099, 4103, 5481, 3492, 7795, 285, 6833, 2327, 827, 2256, 4232, 7538, 7891, 3334, 4996, 6984, 6441, 790, 1923, 6152, 2198, 3028, 9403, 3326, 1945, 567, 6576, 118, 9538, 3420, 1538, 4524, 9837, 867, 5919, 9439, 5864, 7575, 284, 1892, 307, 3852, 684, 7926, 5555, 8416, 9690, 331, 5539, 947, 8297, 65, 5257, 5715, 7494, 7287, 0, 6384, 246, 9977, 2822, 3039, 2417, 4052, 7060, 9338, 123, 8631, 5477, 8916, 2315, 7514, 9125, 3211, 3882, 9240, 5448, 838, 2137, 3032, 5973, 253, 5407, 1162, 4589, 9207, 3038, 6636, 8427, 1518, 6081, 9548, 857, 3760, 2164, 5448, 2780, 6895, 8336, 1777, 286, 3400, 530, 8478, 710, 7777, 2934, 541, 4598, 5930, 7061, 7396, 9313, 3718, 344, 4438, 2087, 5780, 5800, 5313, 3070, 3413, 6052, 1460, 830, 7874, 1374, 2861, 873, 4454, 6083, 2048, 9734, 3526, 2676, 9316, 7273, 5570, 8181, 8472, 6176, 5379, 658, 355, 5612, 4132, 1641, 3753, 3610, 2765, 4056, 6169, 1181, 6026, 3172, 9939, 1242, 8234, 4195, 2263, 1040, 1875, 5910, 6761, 626, 643, 2087, 3232, 2306, 4642, 3611, 6813, 5691, 6739, 2435, 57, 6171, 9929, 6613, 6296, 6859, 9254, 7970, 3369, 8877, 2239, 8964, 8303, 2977, 7643, 1334, 4746, 4548, 1994, 192, 1022, 341, 1330, 8157, 3398, 2293, 1205, 7483, 5345, 5163, 2751, 8430, 2266, 7649, 5435, 6897, 53, 7214, 196, 8106, 2629, 1809, 5865, 3705, 9243, 8455, 7322, 3597, 2298, 4809, 1455, 8563, 4485, 4469, 888, 171, 425, 2550, 959, 409, 791, 9939, 2522, 7749, 8265, 2738, 6796, 6832, 9638, 4439, 7691, 5364, 1249, 3325, 1276, 2198, 5404, 8799, 5322, 9530, 2474, 3667, 5574, 4531, 5345, 2435, 600, 630, 9470, 6874, 9780, 8809, 3299, 7144, 9112, 5086, 1628, 1234, 4882, 5574, 3231, 8169, 1310, 6052, 2465, 4773, 6268, 559, 7349, 8141, 9552, 3730, 6367, 8998, 7299, 5780, 7447, 5798, 5751, 6512, 8105, 2131, 5032, 2304, 9593, 9469, 6030, 1019, 2964, 8613, 3055, 168, 578, 7097, 1153, 649};
// //    vector<int> store;
// // int maxElement = INT_MIN;

// //        for(int i = input.size() - 1; i >= 0; --i){

// //            if(input[i] > maxElement){
// //                   store.push_back(input[i]);
// //                   maxElement = input[i];
// //            }

// //        }

// //      for(auto element: store){
// //               cout<<element<<" ";
// //      }
// // }

// // int main()
// // {

// // vector<int> vect = {-4,3,6,-2,1,-1,0,2,-2,3,1};
// // int k = 5;
// // int count = 0;
// //         for(int i = 0; i < vect.size(); ++i){
// //                int sum = 0;
// //                  for(int j = i; j < vect.size(); ++j){
// //                       sum += vect[j];
// //                         if(sum == k){
// //                             ++count;
// //                         }
// //                  }
// //         }
// // cout<<"the subarray which sum is equal too the K are:- "<<count;

// //    Using the hashmap..
// //     int currSum = 0;
// //     unordered_map<int, int> myMap;
// //        for(int i =0; i < vect.size(); ++i){
// //           //     Calculate the sum forr all the elements..
// //              currSum += vect[i];

// //       if(currSum - k == 0){
// //              ++count;
// //       }
// // //    Find the value in the hashmap that store the values in the form of key and the value..
// //             if(myMap.find(currSum - k) != myMap.end()){
// //                   ++count;
// //             }
// // //   we ensure that the value which already present into the hasmap we does not want to put again in the hashmap..
// //        if(myMap.find(currSum - k) == myMap.end()){
// //             myMap[currSum] = i;
// //        }
// //        }

// //        cout<<"The number of subarray present for the vector are:- "<<count;
// // }

// // void colMatrix(int col, vector<vector<int>> &matrix, int first)
// // {

// //      for (int i = 0; i < col; ++i)
// //      {
// //           if (matrix[col][i] != 0)
// //           {
// //                matrix[col][i] = 0;
// //           }
// //      }
// // }

// // void rowMatrix(int row, vector<vector<int>> &matrix, int second)
// // {
// //      for (int j = 0; j < row; ++j)
// //      {
// //           if (matrix[j][row] != 0)
// //           {
// //                matrix[j][row] = 0;
// //           }
// //      }
// // }

// // int main()
// // {

// //      //      vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
// //      //      int row = matrix.size();
// //      //      int col = matrix[0].size();

// //      //      //   Creating the array for optimize the solution..
// //      //      vector<int> colArray(col, 0);
// //      //      vector<int> rowArray(row, 0);

// //      //      for (int i = 0; i < row; ++i)
// //      //      {
// //      //           for (int j = 0; j < col; ++j)
// //      //           {
// //      //                if (matrix[i][j] == 0)
// //      //                {
// //      //                     rowArray[i] = 1;
// //      //                     colArray[j] = 1;
// //      //                }
// //      //           }
// //      //      }

// //      //     for(int i = 0; i < row; ++i){
// //      //          for(int j = 0; j < col; ++j){
// //      //              if(rowArray[i] || colArray[j]){
// //      //                  matrix[i][j] = 0;
// //      //              }
// //      //          }
// //      //      }

// //      //     for(auto element: matrix){
// //      //          for(auto element2: element){
// //      //               cout<<element2<<" ";
// //      //          }
// //      //          cout<<endl;
// //      //     }

// //      //     Find in case of the string, set, vector and the hashmap..

// //      //    Find function with the string.
// //      //  string str = "tushar";
// //      //  if(str.find('z') == std::string::npos){
// //      //          cout<<"Not Present"<<endl;
// //      //  }else{
// //      //        cout<<"Present into the String"<<endl;
// //      //  }

// //      //    Find function with the vector.
// //      //  vector<int> vect = { 1,2,3,4,5};
// //      //     if(find(vect.begin(), vect.end(), 5) != vect.end()){
// //      //          cout<<"The value is present into the vector"<<endl;
// //      //     }else{
// //      //          cout<<"The value is not present into the vector";
// //      //     }

// //      // //   In hashmap..
// //      // //   In the set..
// //      //   set<int> mySet = {1,2,3,4,5};
// //      //     if(find(mySet.begin(), mySet.end(), 5) != mySet.end()){
// //      //           cout<<"The value is present into the set"<<endl;
// //      //     }else{
// //      //         cout<<"The value is not present into the set"<<endl;
// //      //     }

// //      //     unordered_set<int> mySet2 = {1,2,3,4,5};
// //      //     if(find(mySet2.begin(), mySet2.end(), 5) != mySet2.end()){
// //      //           cout<<"The value is present into the unordered Set"<<endl;
// //      //     }else{
// //      //         cout<<"The value is not present into the Unordered Set"<<endl;
// //      //     }

// //      //     map<int, int> myMap;
// //      //     myMap.insert(make_pair(1,2));
// //      //     myMap.insert(make_pair(2,3));
// //      //     myMap.insert(make_pair(3,4));

// //      //      //  for(auto element : myMap){
// //      //      //         cout<<element.first<<" "<<element.second<<endl;
// //      //      //  }
// //      //        if(myMap.find(1) != myMap.end()){
// //      //               cout<<"The value is find into th emap..";
// //      //        }

// //      // string str = "aaaccc";
// //      // sort(str.begin(), str.end());
// //      // // cout<<str;

// //      //  vector<int> vect = {1,2,3,4,5};
// //      //  sort(vect.begin(), vect.end());

// //      //   for(auto element: vect){
// //      //          cout<<element<<" ";
// //      //   }

// //      // string str = "paper";
// //      // string str2 = "title";

// //      // map<char, char> myMap;

// //      // for (int i = 0; i < str.length(); ++i)
// //      // {

// //      //      if (myMap.find(str[i]) == myMap.end())
// //      //      {
// //      //           myMap[str[i]] = str2[i];
// //      //      }else{
// //      //           //     if the element are present....
// //      //             if(myMap[str[i]] != str2[i]){
// //      //                  return false;
// //      //             }
// //      //      }
// //      // }

// //      //     for(auto element: myMap){
// //      //        cout<<element.first<<" "<<element.second<<endl;
// //      //     }

// //      // std::vector<int> mySet = {1, 2, 3, 2, 2};
// //      // std::unordered_set<int> myUnorderedSet = {1, 2, 3, 4, 5};

// //      // // Count in std::set
// //      // std::cout << "Count of 3 in set: " <<std::count(mySet.begin(), mySet.end(), 2) << std::endl; // O(log n)

// //      // // Count in std::unordered_set
// //      // std::cout << "Count of 3 in unordered_set: " << myUnorderedSet.count(3) << std::endl; // O(1) average

// //      //*****************************************  String Questions ******************************************** */

// //      // vector<string> strs = {""};
// //      // string demo = "";
// //      // int i = 0;
// //      // int size = 1;
// //      // bool isBreak = false;
// //      // while(i < strs.size() || strs[0].length() != 0)
// //      // {
// //      //      char store = strs[0][i];
// //      //      for(auto element: strs){
// //      //            if(store != element[i]){
// //      //                  isBreak = true;
// //      //                  break;
// //      //            }
// //      //      }
// //      //      if(isBreak){
// //      //            break;
// //      //      }
// //      //      demo += store;
// //      //      ++i;
// //      // }
// //      // cout<<"The maximum prefix of the strsings are:- "<<demo;

// //      // string str = "4206";
// //      // string demo = "";
// //      // int maxNum = INT_MIN;

// //      //   for(int i = str.length() - 1; i >= 0 ; --i){
// //      //           //   here we check the minElement.. and all
// //      //                  demo = str[i] + demo;
// //      //           if(stoi(demo) > maxNum && stoi(demo) % 2 != 0){
// //      //                maxNum = max(maxNum, stoi(demo));
// //      //           }else if(stoi(demo) % 2 == 0){

// //      //              demo.clear();

// //      //           }
// //      //   }
// //      //   cout<<"The demo Value is:- "<<demo;

// //      string s = "  hello world  ";
// //      if (s.size() == 0)
// //      {
// //           cout << "The string is Empty Here" << endl;
// //      }

// //      // "  hello world  "

// //      string demo = "";
// //      vector<string> myVect;

// //      for (int i = s.size() - 1; i >= 0; --i)
// //      {
// //           if (s[i] == ' ')
// //           {
// //                reverse(demo.begin(), demo.end());
// //                if (demo != "")
// //                {
// //                     myVect.push_back(demo);
// //                }
// //                demo.clear();
// //           }
// //           else
// //           {
// //                demo += s[i];
// //           }
// //      }
// //      if (demo != "")
// //      {
// //           reverse(demo.begin(), demo.end());
// //           myVect.push_back(demo);
// //      }

// // //         std::ostringstream result;
// // //     for (size_t i = 0; i < myVect.size(); ++i) {
// // //         result << myVect[i];   // Add each string to the result stream
// // //         if (i != myVect.size() - 1) {
// // //             result << " ";   // Add space between strings (except after the last one)
// // //         }
// // //     }
// //          string result = "";
// //         for(int i = 0; i < myVect.size(); ++i){
// //              result += myVect[i];
// //              if(i != myVect.size() - 1){
// //                   result += " ";
// //              }
// //         }
// //        cout<<"1"<<result<<"1";
// // }

// // int main()
// // {
// // Implementation of ATOI..

// //    string s = "-123";
// //     int start = 0;
// //       if(s[0] == '-'){
// //             start = 1;
// //       }

// //      int result = 0;
// //    for(int i = start; i < s.size(); ++i){
// //        int value = s[i] - '0';
// //        if(value >= 0 && value <= 9){
// //         result = (result * 10) + value;
// //        }else{
// //            cout<<-1;
// //        }
// //        }

// //        if(s[0] == '-'){
// //            cout<<-result;
// //        }else{
// //        cout<<result;
// //        }

// //   Solving the second Question for sort character by Frequency..
// // string str = "Aabb";
// // "B"
// // "RILmT0oZF8"
// // "dApqqbh7pNtDplFTLnSf"
// // "oMd6DBkNgnXEAYxN0KBUZi2t7HOEZy77UOtZo3l119bKJOgaD3"
// // "ApsY9AQF2xsz1pbHl5Po7Q1yKNOthVVY9wkGrvktI1dcbXirB5k82sK1lFrx2Wv3mc1viEfvt31TRor6HFCe4M40hztHX3pVSAoi"
// // "IkWBhGISvgpEEvw5XdEp25kwMtnf2ww7sbbEqoOx9BXz2pS2TE7YolAw42hioODDph5FfadcWyFMpln381SinvWe6Lzz5b8hkCvnIU38ph0T1iXPp2elYNunfqH1wH1luqfgZ51LQIGkOVT9JnNSgYnBzooJBcXKeet4NnjfuEIhQBl5C4M4pE4DJSlJ6YZilH7qvSjdnixjJDin6Xpk3xaMd2TRSFGAZo7HqSu0NmlKrzgEK3n5jfNkm0SGvaFNyUTAQVcEnLx4omizRJg0lB72y4yNh4GpBddD6SiP9yuPjo96U3QZJMFlAFNP4psWR3MoCKwmIlzyEWdcgDdXnoDBWYqpTMXGx90pDMpezvvQ99HKuUhJLWgGu7EEU49SnpebahRXtpuGchpBRnzfY6ZMMGkjhEIe5lFEiNNNagfhgMRf6I4udgP9y84YyLXWETO40xVOc5ntXqvzvko63FzugCWxzugJzKA2AmdCFNs1mZQSW8oJwWc58TnmaatX5P7ub98O9boTTncWPS7zd5xaVutjPhtg6VLew3Rq0UXOz1Pl2BeNLwJJ9SUuGewwVgRqpECIn0Y9VLq5cE5QKsVJxcRDiqtOP9Aan4u8UgypcTa0ngDw4ejJFDNofwybaOD53vFI99cCMnhFUkKV8DsqFtx8gLnw3L5uL60BWJ0aLPpW46LvUzPjbWjTRJHzWj7P6z4nNDYNoMg9OoZU2fkyELtz4Vq8R5BsIcC4lrC12AMjfPju1Oy4rmGqDcZZMNy5bG9Z8qvgIc6bhu6qfVB2P4i0XtHw9Fsr4pv8rY5WgXv8XYcL2Fj3cnNgGj2a9IoFHWQvt8SWxG33LOW7NU8P39Zoh13C84bm4JfyDG6pcByhPAEFURTfJn0aNiMyGo1zyD6G2K4uvpnOvhCJGB591HcnxQw34Jju0Ag1fEatI4lQWj8XewxpuDzzjMXaUkApHhRpmJXzepzH9e0rFb0uL6B7uhZbYAKCX7QX"

// //      string str = "loveleetcode";
// //      unordered_map<char, int> myMap;
// //      vector<pair<int, char>> vect;
// //      string result = "";

// //      for (auto ch : str)
// //      {
// //           myMap[ch]++;
// //      }

// //      for (auto element : myMap)
// //      {
// //           vect.push_back({element.second, element.first});
// //      }
// //      sort(vect.begin(), vect.end(), std::greater<pair<int, char>>());

// //     for(auto element: vect){
// //          int length = element.first;
// //        while(length--){
// //           result += element.second;
// //        }
// //     }
// // //     reverse(result.begin(), result.end());
// //   cout<<"The entire string are:- "<<result;

// //   First We need to understand the problem and find the optimize solution for this problem..
// //      string str = "()(())((()()))";
// //      int maxParen = INT_MIN;
// //      int track = 0;
// //         for(auto element: str){
// //             if(element == '('){
// //                  ++track;
// //                  maxParen = max(maxParen, track);
// //             }else if(element == ')'){
// //                --track;
// //             }
// //         }

// //   cout<<"The maximum nested length of the parenthesis are:- "<<maxParen;

// //     string s = "LVIII";

// //    std::unordered_map<char, int> roman = {
// //         {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
// //         {'C', 100}, {'D', 500}, {'M', 1000}
// //     };

// //     int total = 0;
// //     int n = s.length();

// //     for (int i = 0; i < n; ++i) {
// //         // If the current value is less than the next value, subtract it
// //         if (i < n - 1 && roman[s[i]] < roman[s[i + 1]]) {
// //             total -= roman[s[i]];
// //         }
// //         // Otherwise, add the value
// //         else {
// //             total += roman[s[i]];
// //         }
// //     }
// //     cout<<total;
// // }

// // int main(){

// //     Here we Know about the binary search and implementation of the binary search and also solving the questions of the binary search..
// //   Iterative approach of the binary search..

// //  int start = 0;
// //  int end = vect.size() - 1;
// //  int target = 50;

// //  while(start <= end){
// //     //  First e need to find the mid for the array..
// //       int mid = start + (end - start) / 2;

// //       if(target == vect[mid]){
// //         cout<<"The Element present in the index:- "<<mid<<endl;
// //         break;
// //       }else if(target > vect[mid]){
// //         start = mid + 1;
// //       }else{
// //         end = mid - 1;
// //       }
// //  }

// //  Inbuit algorithm of the binary search..

// //   Binary search algorithm return the bool value
// // int element = binary_search(vect.begin(), vect.end(), 40);
// // cout<<element;

// //  vector<int> vect = {1,2,3,4,7,31,34,50};

// //  int element = *lower_bound(vect.begin(), vect.end(),35);
// //  cout<<element;

// // vector<int> v = {35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113};
// // int x = 159;

// // //   e find the floor value for the x elements..
// //   int start = 0;
// //   int ans = -1;
// //   int end = v.size() - 1;

// //   while(start <= end){
// //     //    Calculate the mid..
// //     int mid = start + (end - start) / 2;

// //     if(v[mid] == x){
// //         ans = mid;
// //         end = mid - 1;
// //     }

// //     if(v[mid] < x){
// //         ans = mid;
// //         start = mid + 1;
// //     }else{
// //         end = mid - 1;
// //     }
// //   }
// //   cout<<"The floor element present on the index:- "<<ans;

// // sort(arr.begin(), arr.end());

// // //   Implement the binary search..
// //   int start = 0;
// //   int end = arr.size() - 1;
// //   int floor = -1;
// //   int ceil = -1;

// //   while(start <= end){
// //     //    Calculate the mid Elements..
// //     int mid = start + (end - start) / 2;

// //     if(arr[mid] == x){
// //         cout<<"The floor and the ceil Value are:- "<<arr[mid] <<" " << arr[mid]<<endl;
// //     }else if(arr[mid] < x){
// //         floor = arr[mid];
// //         start = mid + 1;
// //     }else{
// //         ceil = arr[mid];
// //         end = mid - 1;
// //     }
// //   }

// //   cout<<"Floor:- "<<floor<<endl;
// //   cout<<"Ceil:- "<<ceil<<endl;

// // vector<int> arr = {5, 6, 8, 9, 6, 5, 5, 6};
// // int target = 7;
// // int floor = -1;
// // int ceil = -1;

// //   for(int i = 0; i < arr.size(); ++i){
// //         if(arr[i] < target){
// //            floor = min(target, arr[i]);
// //         }
// //   }

// //   for(int i = 0; i < arr.size(); ++i){
// //         if(arr[i] > target){
// //            ceil = max(target, arr[i]);
// //         }
// //   }

// //   cout<<floor<<" "<<ceil;

// // Example 1:

// // Input: nums = [1,3,5,6], target = 5
// // Output: 2
// // Example 2:

// // Input: nums = [1,3,5,6], target = 2
// // Output: 1
// // Example 3:

// // Input: nums = [1,3,5,6], target = 7
// // Output: 4

// // vector<int> vect = {1,3,5,6};

// // int start = 0;
// // int end = vect.size() - 1;
// // int target = 7;
// // int insertPos = -1;

// // while(start <= end){
// //     //    Calculate the mid element..
// //     int mid = start + (end - start) / 2;

// //     if(vect[mid] == target){
// //           cout<<"The index to be inserted are:- "<<mid<<endl;
// //     }else if(vect[mid] > target){
// //      end = mid - 1;
// //     }else{
// //      insertPos = mid + 1;
// //     start = mid + 1;
// //     }
// // }

// // cout<<"The position are:- "<<insertPos;

// // Input: nums = [5,7,7,8,8,10], target = 8
// // Output: [3,4]
// // }

// // int firstOccurance(vector<int> nums, int target){

// //    int start = 0;
// //    int end = nums.size() - 1;
// //   int ans = -1;

// //    while(start <= end){
// //     //   Calculate the mid element..
// //       int mid = start + (end - start) / 2;

// //       if(nums[mid] == target){
// //           ans = mid;
// //     //  start = mid + 1;
// //           end = mid - 1;
// //       }else if(nums[mid] < target){
// //         start = mid + 1;
// //       }else{
// //         end = mid - 1;
// //       }
// //    }
// // return ans;
// // }
// // int lastOccurance(vector<int> nums, int target){

// //    int start = 0;
// //    int end = nums.size() - 1;
// //   int ans = -1;

// //    while(start <= end){
// //     //   Calculate the mid element..
// //       int mid = start + (end - start) / 2;

// //       if(nums[mid] == target){
// //           ans = mid;
// //           start = mid + 1;
// //       }else if(nums[mid] < target){
// //         start = mid + 1;
// //       }else{
// //         end = mid - 1;
// //       }
// //    }
// // return ans;
// // }

// // int main(){

// //   Find the first and the last occurance of the elements..
// //    Input: nums = [5,7,7,8,8,10], target = 8
// // Output: [3,4]
// // vector<int> nums = {1, 1, 2, 2, 2, 2, 3};
// // int target = 2;
// // int first = firstOccurance(nums, target);
// // int second = lastOccurance(nums, target);

// // cout<<"The leftmost occurance of the element are:- "<<first<<endl;
// // cout<<"The rightMost occurance of the element are:- "<<second<<endl;
// // cout<<"The total number of element are:- "<<(second - first) + 1;

// // vector<int> vect = {5, 6, 7, 8, 9, 1, 2, 3, 4};
// //   Find the pivot using the O(n) time complexity..

// // for(int i = 0; i < vect.size() - 1; ++i){
// //       if(vect[i] > vect[i + 1]){
// //         cout<<"The pivot element are the:- "<<vect[i + 1];
// //       }
// // }

// //   Find the pivot element using the binary search in the O(logn) time complexity.
// //    int start = 0;
// //    int end = vect.size() - 1;

// //    while(start < end){

// //      int mid = start + (end - start) / 2;

// //      if(vect[mid] > vect[0]){
// //         start = mid + 1;
// //      }else{
// //         end = mid;
// //      }
// //    }
// // cout<<"The pivot element are :- "<<vect[start];

// // }

// // int pivotElement(vector<int> vect)
// // {
// //     int start = 0;
// //     int end = vect.size() - 1;

// //     while (start < end)
// //     {

// //         int mid = start + (end - start) / 2;

// //         if (vect[mid] > vect[0])
// //         {
// //             start = mid + 1;
// //         }
// //         else
// //         {
// //             end = mid;
// //         }
// //     }
// //     return start;
// // }

// // int main()
// // {
// //     vector<int> vect = {5, 6, 7, 8, 9, 1, 2, 3, 4};
// //     int target = 2;
// //     int size = vect.size()- 1;
// //     int pivot = pivotElement(vect);

// //    if( vect[pivot] <= target <= vect[size]){
// //       binarySearch();
// //    }else{
// //      binarySearch();
// //    }
// // }

// // int findPivot(vector<int> vect){

// // int start = 0;
// // int end = vect.size() - 1;

// // while(start < end){

// //   int mid = start + (end - start) / 2;

// //   if(vect[mid] > vect[0]){
// //     start = mid + 1;
// //   }else{
// //     end = mid;
// //   }
// // }
// // return vect[end];
// // }

// // int main(){

// // vector<int> vect = {1,2,1,3,5,6,4};
// //  We need to find the pivot element into the array..

// // cout<<"Hello";

// // int pivotElement = findPivot(vect);
// // cout<<"The pivot element are:- "<<pivotElement;

// //   Find the Kth Rotation of the array using the binary search..

// // int start = 0;
// // int end = vect.size() - 1;

// // while(start < end){
// //     //   Calculate the mid element of the array.
// //     int mid = start + (end - start) / 2;

// //     if(vect[mid] < vect[mid + 1]){
// //       start = mid + 1;
// //     }else{
// //       end = mid;
// //     }
// // }

// // cout<<"The peak element index are:-  "<<vect[end];

// // }

// // int main(){

// //   int number = 1;
// // //    e need to find the square root of the number if the square root is not perfect then return the floor value for that particular element. Here we present the value of the number is 5 so the square root of the number are 2.
// //   //  Find the square root of the number using the binary search..

// //    int start = 1;
// //    int end = number - 1;
// //    int result = 1;

// //    while(start <= end){
// //       // Calculate the mid Element for the binary search..
// //         int mid = start + (end - start) / 2;
// //        if(mid * mid <= number){
// //           //  Possibility case so store the value and move forward..
// //             result = mid;
// //             start = mid + 1;
// //        }else{
// //         end = mid - 1;
// //        }
// //    }
// //   cout<<"The square root of the number is:- "<<result;

// // int n = 3;
// // int m = 9;
// // int result = -1;

// // for(int i = 1; i <= 9; ++i){
// //     if(pow(i, n) == m){
// //         result = i;
// //         break;
// //     }
// // }
// // cout<<"The value is:- "<<result;
// // }

// // int main()
// // {

// //   vector<int> first = {1,34,56,69,90};
// //   vector<int> second = {11,12,67,78,99};
// //   vector<int> store((first.size() + second.size()));

// // //   We need to merge the 2 sorted array..
// //   int i = 0;
// //   int j = 0;
// //   int k = 0;
// //   while(i < first.size() && j < second.size()){

// //    if(first[i] <= second[j]){
// //       store[k++] = first[i++];
// //    }else{
// //       store[k++] = second[j++];
// //    }
// //   }
// //   while(i < first.size()){
// //     store[k++] = first[i++];
// //   }
// //   while(j < second.size()){
// //     store[k++] = second[j++];
// //   }

// //   for(auto element: store){
// //        cout<<element<<" ";
// //   }

// // We need to solve the question using the constant space and the time complexity is O(n) and the space complexity is O(1)
// // vector<int> nums1 = {1,8,8};
// // vector<int> nums2 = {2,3,4,5};
// // vector<int> nums1 = {1,8,8};
// // vector<int> nums2 = {2,3,4,5};
// //   int n = nums1.size();
// //   int m = nums2.size();
// //   int k = n + m - 1;
// // //   We resize the nums1rrnums1y of n+m length.
// //   nums1.resize(n+m);

// //    int i = n - 1, j= m - 1;
// //       while(i >= 0 && j >= 0){
// //           if(nums1[i] >= nums2[j]){
// //             nums1[k--] = nums1[i--];
// //           }else{
// //             nums1[k--] = nums2[j--];
// //           }
// //       }
// //       while(i >= 0){
// //           nums1[k--] = nums1[i--];
// //       }
// //       while(j >= 0){
// //           nums1[k--] = nums2[j--];
// //       }
// // for(auto element: nums1){
// //     cout<<element<<" ";
// // }
// // }

// // int main(){

// // vector<int> nums = {30,11,23,4,20};
// // int threshold = 5;

// // We need to find the minimum speed that koko eats banana before come the guard.
// // sort(nums.begin(), nums.end());

// //    int start = 1;
// //    int end = nums[nums.size() - 1];

// //    while(start < end){
// //       //  Calculate the mid element of the array..
// //        int mid = start + (end - start) / 2;
// //         int count = 0;
// //       // Traverse the value and find the count.
// //          for(auto element: nums){
// //              count += element / mid;
// //             //   if the element are not perfectly divide by mid then.
// //             if(element % mid != 0){
// //                 ++count;
// //             }
// //          }
// //          count <= threshold ? end  = mid : start = mid + 1;
// //    }
// //  cout<<"The minimum per hour speed to eat banana are:- "<<start;
// // }

// // int main(){

// //  string str = "babad";
// // //  We need to calculate the longest palindromic string.

// // }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//   int data;
//   Node *next;

//   // Constructor to create a new node
//   Node(int data)
//   {
//     this->data = data;
//     this->next = nullptr;
//   }
// };

// void insertAtTail(Node *&head, Node *&tail, int data)
// {
//   //  Here initially the head is the NULL value so we need to create the first node of the linked list..
//   Node *newNode = new Node(data);
//   if (head == NULL)
//   {
//     tail = head = newNode;
//   }
//   else
//   {
//     // If the linked list have more than or equal to the 1 node present..
//     tail->next = newNode;
//     tail = newNode;
//   }
// }

// void printLL(Node *&head)
// {

//   Node *temp = head;

//   while (temp != NULL)
//   {
//     cout << temp->data << " -> ";
//     temp = temp->next;
//   }
//   cout<<"NULL";
// }

// int main()
// {
//   vector<int> vect = {2, 4, 6, 7, 5, 1, 0};

//   Node *head = NULL;
//   Node *tail = NULL;

//   //   Insert the element into the linked list..
//   for (auto element : vect)
//   {
//     insertAtTail(head, tail, element);
//   }
//   // Print the linkedlist..
//   printLL(head);
// }
