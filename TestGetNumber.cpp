#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

//Corriger ici Erreur

int getNumber(int x, int len, int pos) {
    int divide = len -1 - pos;
    return ( (int) ( x / pow(10, divide) ) % 10 );
}

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
    cout <<  "Testing of getNumber method" << endl;
    
    bool run = true;
    int number;
    int position;

    while (run) {
        cout << "Entrez un nombre : ";
        cin >> number;
        cout << "Entrez une position : ";
        cin >> position;

        cout << "Le chiffre a la position " << position << " est : " << getNumber(number, lenNumber(number), position) << endl;
    }
    return 0;

}