#include <iostream>
using namespace std;

int main(){
    // pattern 18
    int n = 5;
    for (int i =1 ; i<=n ; i++){
        char alphabet = 'A' + (n-i);
        for (int j = 1 ; j<=i; j++){
            cout << alphabet << " ";
            alphabet++;
        }
        cout << "\n";
    }
    return 0;
}