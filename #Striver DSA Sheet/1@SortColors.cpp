/*75. Sort Colors
Medium
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 
Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.
*/
#include<iostream>
#include<vector>
using namespace std;
class Solutions{
    public:
    void SortColors(vector<int>& nums){
        int i,j,n;
        n=nums.size();
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
    }
};
int main(){
    vector<int>nums;
    int size;
    nums={0,1,1,2,0,1,2};
}

