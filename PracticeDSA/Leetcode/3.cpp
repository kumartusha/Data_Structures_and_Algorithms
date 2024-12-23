// #include <iostream>
// using namespace std;
// #include <vector>

// int main()
// {
//     vector<int> nums = {-1,-4,-1,4};
//     int count = 0;
//     int size = nums.size();

//     for (int i = 0; i < size - 2; ++i)
//     {
//         if (nums[i] + nums[i + 2] == nums[i + 1] / 2.0)
//         {
        
//             ++count;
//         }
//     }
//     // cout << count;
// }

// Revision  

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     vector<int> vect = {54,56,567,445,54455,6555,454,34};
//     // sort(vect.begin(), vect.end());
    
//     sort(vect.begin(), vect.end(), greater<int>());
//     for(auto element: vect){
//           cout<<element<<" ";
//     }

// }