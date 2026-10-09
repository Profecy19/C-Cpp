#include <iostream>
using namespace std;
int main(){
    string a="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int s=0;s<n-i;s++){
            cout<<' ';
        }
        for(int j=1;j<=i;j++){
            cout<<a[j-1];
        }
        for(int t=1,z=i-2;t<i;t++){
            cout<<a[z];
            z--;
        }
        cout<<endl;
    }
    return 0;
}