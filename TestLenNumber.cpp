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

int main() {
    cout <<  "Testing of lenNumber method" << endl;
    
    bool run = true;
    string entre;
    int number;

    while (run) {
        cout << "Entrez un nombre : ";
        cin >> entre;

        if  (entre == "q" || entre == "Q" || entre == "quit") {
            run = false;
        } else {
            stringstream convert(entre);
            convert >> number;

            cout << "Ce nombre a une longueur de : " << lenNumber(number) << endl;
        }
    }

    return 0;

}