/*
189. Rotate Array

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
 

Follow up:

Try to come up with as many solutions as you can. There are at least three different ways to solve 
this problem.
Could you do it in-place with O(1) extra space?

*/
#include <iostream>
using namespace std;
void rotate(int* arr,int size,int rotateby){
    if (size <= 1) return;
    rotateby %= size;
    if (rotateby == 0) return;
    int ltemp[size-rotateby],rmost[rotateby];
    for(int i=size-rotateby,k=0;i<size;i++,k++){
        rmost[k]=arr[i];
    }
    for(int i=0;i<size-rotateby;i++){
        ltemp[i]=arr[i];
    }
    for(int i=0;i<rotateby;i++){
        arr[i]=rmost[i];
    }
    for(int i=rotateby,k=0;k<size-rotateby;i++,k++){
        arr[i]=ltemp[k];
    }

}
int main(){
    int size;
    cout<<"Enter the size of the array you want? ";
    cin>>size;
    int arr[size],rotateby;
    for(int i=0;i<size;i++){
        cout<<"Enter the value on "<<i<<" index: ";
        cin>>arr[i];
    }
    cout<<"By how much it should be rotated to right: ";
    cin>>rotateby;
    cout<<"Before Rotation: "<<endl;
    for(int i=0;i<size;i++){
        cout<<" | "<<arr[i]<<" | ";
    }
    rotate(arr,size,rotateby);
    cout<<endl;
    cout<<"After Rotation: "<<endl;
    for(int i=0;i<size;i++){
        cout<<" | "<<arr[i]<<" | ";
    }
    return 0;
}