/*

8
1              1
12            21
123          321
1234        4321
12345      54321
123456    654321
1234567  7654321
1234567887654321
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=0;k<n*2-(2*i);k++){
            cout<<" ";
        }
        for(int l=i;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}