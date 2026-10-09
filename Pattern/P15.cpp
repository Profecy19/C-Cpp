/*

5
ABCDE
ABCD
ABC
AB
A
*/
#include <iostream>
using namespace std;
int main(){
    string a="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int b=0;
        for(int j=n-i;j>=0;j--){
            cout<<a[b];
            b++;
        }
        cout<<endl;
    }
    return 0;
}