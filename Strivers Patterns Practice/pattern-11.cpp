#include <iostream>
using namespace std;

int main(){
    // pattern 11
    int n = 5;
    for (int row = 1; row<=n ; row++){
        for (int column = 1; column<=row; column++){
            if ((row+column)%2 == 0){
                cout << "1";
            }
            else{
                cout << "0";
            }
        }
        cout << "\n";
    }
    return 0;
}