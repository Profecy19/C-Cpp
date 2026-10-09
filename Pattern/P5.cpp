/*
Reverse star triangle pattern

* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=n;i>0;i--){
        for(int k=i;k>0;k--){
            cout<<"* ";
        }
        cout << endl;
    }
    return 0;
}