/*
1. Two Sum

You are given an array of integers nums and an integer target, return indices of the two numbers 
such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same 
element twice.

You can return the answer in any order.

 

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]

Explanation:
The sum of nums[0] and nums[1] is 2 + 7 = 9, which equals the target. Therefore, the indices [0, 1]
 are returned.

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Explanation:
The sum of nums[1] and nums[2] is 2 + 4 = 6, which equals the target. Therefore, the indices [1, 2] are returned.

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Explanation:
The sum of nums[0] and nums[1] is 3 + 3 = 6, which equals the target. Therefore, the indices [0, 1] 
are returned.

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
*/
#include <bits/stdc++.h>
using namespace std;
void TwoSum(int *arr, int size,int target,int *indexarray){
    int firstptr=0,secondptr=size-1;
    while(arr[firstptr]+arr[secondptr]==target || firstptr!=secondptr){
        if(arr[firstptr]+arr[secondptr]<target){
            firstptr++;
        }
        else if(arr[firstptr]+arr[secondptr]>target){
            secondptr--;
        }
        else{
            indexarray[0]=firstptr;
            indexarray[1]=secondptr;
            break;
        }
    }
}
int main(){
    int size,target,indexarray[2];
    cout<<"Enter the size of your array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the number on "<<i<<" index: ";
        cin>>arr[i];
    }
    cout<<"Enter the taget sum you want as result: ";
    cin>>target;
    TwoSum(arr,size,target,indexarray);
    cout<<"The two sum indices are: [";
    for(int i=0;i<2;i++){
        cout<<" "<<indexarray[i]<<" ";
    }
    cout<<"]";
    return 0;
}