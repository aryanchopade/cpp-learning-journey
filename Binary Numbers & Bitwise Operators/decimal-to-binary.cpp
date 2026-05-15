#include <iostream>
using namespace std;

//finding binary number of 50

int binary(int x){
    int binNum = 0;
    int pow10 = 1;
    while (x>0){
        int remainder = x%2;
        binNum += pow10*remainder;
        x /= 2;
        pow10 *= 10;
    }
    return binNum;
}

int main(){
    cout << binary(50);
    return 0;
}