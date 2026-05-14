#include <iostream>
using namespace std;

int main(){
    // pattern 7
    int n = 5;
    for (int i = 0; i<n; i++){
        //space
        for (int j = 0; j<(n-i-1); j++){
            cout << " ";
        }
        //star
        for (int j = 0; j < ((2*i)+1); j++){
            cout << "*";
        }
        //space (optional)
        for (int j = 0; j<(n-i); j++){
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}