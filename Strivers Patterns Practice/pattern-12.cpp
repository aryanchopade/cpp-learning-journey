#include <iostream>
using namespace std;

int main(){
    // pattern 12
    int n = 4;
    for (int i = 1; i<=n; i++){
        //inc. numbers
        for (int j = 1; j<=i; j++){
            cout << j;
        }
        //space
        for (int j = 1; j<=((n-i)*2); j++){
            cout << " ";
        }
        //dec. numbers
        for (int j = i; j>=1; j--){
            cout << j;
        }
        cout << "\n";
    }
        
    return 0;
}