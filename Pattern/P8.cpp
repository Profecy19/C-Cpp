#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c=n;
    for(int b=0;b<n;b++){
        for(int a=0;a<b;a++){
            cout<<" ";
        }
        for(int d=1;d<=(2*c)-1;d++){
            cout<<"*";
        }
        c--;
        cout<<endl;
    }
    return 0;
}