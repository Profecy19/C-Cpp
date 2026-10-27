/*
Reverse an array

Example
Input 1:
arr = {1, 2, 3, 4, 5}
Output 1:
{5, 4, 3, 2, 1}
*/


#include <iostream>
using namespace std;
void reverse(int* arr, int size){
    int firstptr=0,secondptr=size-1;
    while(firstptr<=secondptr){
        int st = arr[firstptr];
        arr[firstptr]=arr[secondptr];
        arr[secondptr]=st;

        secondptr--;
        firstptr++;
    }
}

int main(){
    int inp;
    cout<<"Enter the size of the array: ";
    cin>>inp;
    int arr[inp];
    int i=0;
    while(i<inp){
        cout<<"Enter the value on "<<i<<" index: ";
        cin>>arr[i];
        i++;
    }
    cout<<"Array before reversal: "<<endl;
    for(int j=0;j<inp;j++){
        cout<<" "<<arr[j]<<" ";
    }
    cout<<endl<<" ";
    reverse(arr, inp);
    cout<<"Array after reversal: "<<endl;
    for(int j=0;j<inp;j++){
        cout<<" "<<arr[j]<<" ";
    }
    return 0;
}