#include <iostream>
using namespace std;

int main(){
    // pattern 15
    int n = 5;
    for (int i = 1; i<=n; i++){
        char alphabet = 'A';
        for (int j = 1; j<=(n-i+1);j++){
            cout << alphabet;
            alphabet++;
        }
        cout << "\n";
    }
        
    return 0;
}