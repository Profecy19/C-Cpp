/*

5
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int j1=n;j1>0;j1--){
        for(int i1=0;i1<j1;i1++){
            cout<<"*";
        }
        for(int a1=0;a1<2*(n-j1);a1++){
            cout<<" ";
        }
        for(int i1=0;i1<j1;i1++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int j1=1;j1<=n;j1++){
        for(int i1=0;i1<j1;i1++){
            cout<<"*";
        }
        for(int a1=0;a1<2*(n-j1);a1++){
            cout<<" ";
        }
        for(int i1=0;i1<j1;i1++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}