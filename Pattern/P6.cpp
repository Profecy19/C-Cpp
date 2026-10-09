#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=n;i>0;i--){
        for(int z=1; z<=i;z++){
            cout<<z;
        }
        cout << endl;
    }
    return 0;
}