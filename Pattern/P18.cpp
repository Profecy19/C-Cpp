#include<iostream>
using namespace std;
int main(){
    string a="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i,k=0;j>=0;j--){
            cout<<a[n-i+k-1];
            k++;
        }
        cout<<endl;
    }
    return 0;
}