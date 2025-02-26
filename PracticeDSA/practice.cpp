// #include <bits/stdc++.h>
// using namespace std;

// // // int main()
// // // {
// // //     // vector<int> nums1 = {0};
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

// //   vector<int> ans;
// // //   ans.push_back(2);
// // //   ans.push_back(3);
// // //   ans.push_back(4);
// // //   ans.push_back(5);

// //   cout<<ans.size();
// //   int arr[5] = {1,2,3,4,5};
// //   for(int i = 0; i < 5; i++){
// //     //    ans[i] = arr[i];
// //      ans.push_back(arr[i]);
// //   }

// //   cout<<ans.size();
// //   cout<<ans[0]<<endl;
// //   cout<<ans[1]<<endl;
// //   cout<<ans[2]<<endl;
// //   cout<<ans[3]<<endl;
// //   cout<<ans[4]<<endl;

// // int arr[5] = {5,4,3,2,1};
// // int size = sizeof(arr) / sizeof(arr[0]);

// // sort(arr, arr + size);

// // for(int i = 0; i < size; ++i){
// //       cout<<arr[i]<<" ";
// // }

// // vector<int> ans(5, 0);

// // ans[0] = 1;
// // ans[1] = 2;
// // ans[2] = 3;
// // ans[3] = 4;
// // ans[4] = 5;

// // for(auto element: ans){
// //       cout<<element<<" ";
// // }

// // cout<<ans.size();

// // // set<int> mySet;

// // vector<int> vect = {1,2,3,4,5};

// // }

// //  insertion sort using the Recursion...

// // int main(){
// // int array[10] = {10,9,8,7,6,5,4,3,2,1};
// // int size = sizeof(array) / sizeof(array[0]);
// // //  Sort this array using the insertion sort with the recursion..
// //     for(int i = 1; i < size; ++i){
// //           int element = array[i];
// //           int j = i - 1;
// //           for(; j >= 0; --j){
// //               if(array[j] > element){
// //                 array[j + 1] = array[j];
// //               }else{
// //                 break;
// //               }
// //           }
// //           array[j + 1] = element;
// //     }
// //      for(int i = 0; i < size; ++i){
// //            cout<<array[i]<<" ";
// //      }
// // }

// int main()
// {

//     // //    for(int i = 0; i < str.length(); ++i){

//     // //    }
//     //     vector<int> vect(10, 0);
//     //     vect.push_back(1);
//     //     vect.push_back(2);
//     //     vect.push_back(3);
//     //     vect.push_back(4);

//     //    cout<<vect.size();

//     //    for(auto element: vect){
//     //       cout<<element<<" ";
//     //    }

//     // string str = "tushar kumar";
//     //    cout<<str.length();
//     //    cout<<str.size();

//     //    if(str.find("kumar") != string::npos){
//     //       cout<<"Present";
//     //    }else{
//     //     cout<<"Not Present";
//     //    }

//     //    int len = str.find("kumar");
//     //    cout<<len;

//     //    string first = "anagram";
//     //    string second = "nagaram";

//     //     sort(first.begin(), first.end());
//     //     sort(second.begin(), second.end());

//     //     if(first.compare(second)){
//     //         cout<<"Same";
//     //     }

//     //   string first = "abcde";
//     //   string second = "cdeab";
//     //   int size = first.size();

//     //   for(int i=0;i < 100; ++i){
//     //     first[(i + 1) / size] = first[i];
//     //   }
//     //   cout<<first;

//     //   int arr[7] = {1,2,3,4,5,6,7};
//     //   int k = 2;
//     //   int size = sizeof(arr) / sizeof(arr[0]);

//     // string s = "abcde";
//     // string goal = "cdeab";

//     // int n = s.length();
//     // for (int i = 0; i < n; i++) {
//     //     // Perform the rotation
//     //     string rotated = s.substr(i) + s.substr(0, i); // Rotate the string

//     //     // Check if the rotated string matches goal
//     //     if (rotated == goal) {
//     //         cout<<"Possible";
//     //     }
//     // }
//     //  cout<<"Not Possible";
//     // int size = s.length();
//     // string third = s;
//     // for (int i = 0; i < size; ++i)
//     // {
//     //     for (int j = 0; j < size; ++j)
//     //     {
//     //         third[(j + i) % size] = s[j];
//     //     }
//     //     if (third == goal)
//     //     {
//     //         cout << "possible";
//     //     }
//     // }
//     // cout << "Not Possible";

//     string str = "Aabb";
//     unordered_map<char, int> myMap;
//     vector<pair<int, char>> myVect;

//     for (int i = 0; i < str.length(); ++i)
//     {
//         myMap[str[i]]++;
//     }

// //     storing the elements.. of the map into the vector..
//     // for(auto element: myMap){
//     //     myVect.push_back({element.second, element.first});
//     // }
//     for(auto element: myVect){
//           cout<<element.first<<" "<<element.second<<endl;
//     }

// }
