#include <iostream>
#include <cmath>
using namespace std;

int lenNumber(int x) {

    if (x < 0) {
        x = -x;
    }

    int len = ceil(log10(x + 1));
    if (len > 0) {
        return len;
    } else {
        return 0;
    }
    
}

int getNumber(int x, int len, int pos) {
    int divide = len -1 - pos;
    return ( (int) ( x / pow(10, divide) ) % 10 );
}

bool isPalindrome(int x) {
    //complete the function
    int len = lenNumber(x);
    for (int i = 0; i < len / 2; i++) {
        if (getNumber(x, len, i) != getNumber(x, len, len - 1 - i)) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    
    if(isPalindrome(n)) {
        cout << n << " is a palindrome";
    }
    else {
        cout << n << " is NOT a palindrome";
    }
    
    return 0;
}