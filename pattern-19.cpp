#include <iostream>
using namespace std;

int main(){
    // pattern 19
    int n = 5;

    // upper empty pyramid
    for (int i = 0; i<n; i++){
        //star
            for (int j = 1; j<=(n-i);j++){
                cout << "*";
            }
        //space
            for (int j = 1; j <= 2*i; j++){
                cout << " ";
            }
        //star
            for (int j = 1; j<=(n-i);j++){
                cout << "*";
            }
        cout << "\n";
    }
    
    // lower empty pyramid
    for (int i = 0 ; i<n;i++){
        //star
            for (int j = 1; j <= (i+1); j++){
                cout << "*";
            }
        //space
            for (int j = 1; j<=(2*(n-i-1));j++){
                cout << " ";
            }
        //star
            for (int j = 1; j <= (i+1); j++){
                cout << "*";
            }
        cout << "\n";
    }
    return 0;
}