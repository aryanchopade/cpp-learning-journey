#include <iostream>
using namespace std;

int main(){
    // pattern 21
    int n = 4;
    for (int i = 1; i<=n; i++){
        if (i == 1 || i == n){
            for (int j = 1; j<=n;j++){
                cout << "*";
            }
        }
        else {
            //star
                cout << "*";
            //space
                for (int j=1; j<=(n-2); j++){
                    cout << " ";
                }
            //star
                cout << "*";
        }
        cout << "\n";
    }

    return 0;
}