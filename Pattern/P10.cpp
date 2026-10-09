#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int k=1;k<=n;k++){
        for(int g=0;g<k;g++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int l=n-1;l>=1;l--){
        for(int h=0;h<l;h++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}