/*

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6 

*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            cout<<i<<" ";
        }
        cout << endl;
    }
    return 0;
}