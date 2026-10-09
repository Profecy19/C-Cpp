#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c=n;
    for(int b=1;b<=n;b++){
        for(int a=1;a<c;a++){
            cout<<" ";
        }
        c--;
        for(int d=1;d<=(2*b)-1;d++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}