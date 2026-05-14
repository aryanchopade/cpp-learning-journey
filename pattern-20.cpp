#include <iostream>
using namespace std;

int main(){
    // pattern 20
    int n = 5;
    for (int i = 0; i<((2*n)-1); i++){
        if ( i<=(n-1)){
            //star
                for (int j=1; j<=(i+1);j++){
                    cout << "*";
                }
            //space
                for (int j=1; j<=2*(n-i-1);j++){
                    cout << " ";
                }
            //star
                for (int j=1; j<=(i+1);j++){
                    cout << "*";
                }
        }
        else {// i=5
            //star
                for (int j=1; j<=((2*n)-i-1);j++){
                    cout << "*";
                }
            //space
                for (int j=1; j<=(2*(i-n+1));j++){
                    cout << " ";
                }
            //star
                for (int j=1; j<=((2*n)-i-1);j++){
                    cout << "*";
                }
        }
        cout << "\n";
    }
    return 0;
}