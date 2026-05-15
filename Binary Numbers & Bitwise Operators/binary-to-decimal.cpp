#include <iostream>
using namespace std;

//finding decimal number of 110010

int decimal(int x){
    int decNum = 0;
    int pow2 = 1;
    while (x>0){
        int lastDigit = x%10;
        decNum += lastDigit*pow2;
        pow2 *= 2;
        x /= 10;
    }
    return decNum;
}

int main(){
    cout << decimal(110010);
    return 0;
}