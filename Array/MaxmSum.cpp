/*
// 53. Maximum Subarray Problem

Given an integer array nums, find the subarray with the largest sum, and return its sum.


Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

Hint: Preferrably use Kaden's algo
*/
#include <bits/stdc++.h>
using namespace std;
int maxsum(int *arr, int size){
    int firstptr=0,secondptr=1,sum=0;
    while(secondptr<size){
        if(arr[firstptr]*arr[secondptr]>sum){
            sum=arr[firstptr]+arr[secondptr];
        }else;
        firstptr++;
        secondptr++;
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter the size of your array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element on "<<i<<" index: ";
        cin>>arr[i];
    }
    cout<<"The maximum sum is: "<<maxsum(arr,size);
    return 0;
}