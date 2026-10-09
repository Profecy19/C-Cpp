#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            for(int a=1;a<=n;a++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int b=1;b<=n-2;b++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}