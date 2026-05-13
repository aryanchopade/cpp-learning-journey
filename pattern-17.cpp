#include <iostream>
using namespace std;

int main(){
    // pattern 17
    int n = 4;
    for (int i = 1; i<=n; i++){
        char alphabet = 'A';
        //space
        for (int j = 1; j <= (n-i); j++){
            cout << " ";
        }
        //increasing alphabets
        for (int j = 1; j<=i;j++){
            cout << alphabet;
            alphabet++;
        }

        alphabet--;
        
        //decreasing alphabets
        for (int j = 1; j<i; j++){
            alphabet--;
            cout << alphabet;
        }
        //space (optional)
        for (int j = 1; j <= (n-i); j++){
            cout << " ";
        }

        cout << "\n";
    }
        
    return 0;
}