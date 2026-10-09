/* Square
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *
 */

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int e=0;e<n;e++){
        for(int i=0; i<n; i++){
            cout << "* ";
        }
        cout<< endl;
    }
    return 0;
}