/*
152. Maximum Product Subarray

Given an integer array nums, find a subarray that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

Note that the product of an array with a single element is the value of that element.

 

​​​​​​​Example 1:

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
*/
#include <bits/stdc++.h>
using namespace std;
int maxpro(int *arr, int size){
    int firstptr=0,secondptr=1,product=0;
    while(secondptr<size){
        if(arr[firstptr]*arr[secondptr]>product){
            product=arr[firstptr]*arr[secondptr];
        }else;
        firstptr++;
        secondptr++;
    }
    return product;
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
    cout<<"The maximum product is: "<<maxpro(arr,size);
    return 0;
}