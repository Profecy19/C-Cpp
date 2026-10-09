/*

5
A
AB
ABC
ABCD
ABCDE
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string a="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<a[j];
        }
        cout<<endl;
    }
    return 0;
}