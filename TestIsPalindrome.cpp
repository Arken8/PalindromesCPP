#include <iostream>
#include <cmath>
#include <sstream>

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
    cout <<  "Testing of IsPalindrome method" << endl;

    bool run = true;
    string entre;
    int number;

    while(run) {
        cout << "Entrez un nombre : ";
        cin >> entre;

        if  (entre == "q" || entre == "Q" || entre == "quit") {
            run = false;
        } else {
            stringstream convert(entre);
            convert >> number;

            if(isPalindrome(number)) {
                cout << number << " is a palindrome" << endl;
            }
            else {
                cout << number << " is NOT a palindrome" << endl;
            }
        }
        
    }
    
    return 0;
}