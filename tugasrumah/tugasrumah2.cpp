#include <iostream>

using namespace std;

void line () {
    cout << "=====================================" << endl;
}

void tripleValue(int* w, int* x, int* y, int* z) {
    *w *= 3;
    *x *= 3;
    *y *= 3;
    *z *= 3;
}

int main() {
    int w, x, y, z;
    line();
    cout << "Program untuk mengalikan nilai variabel dengan 3" << endl;
    line();
    cout << "Masukkan nilai w: ";
    cin >> w;
    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;
    cout << "Masukkan nilai z: ";
    cin >> z;

    int* wPtr = &w;
    int* xPtr = &x;
    int* yPtr = &y;
    int* zPtr = &z;

    tripleValue(wPtr, xPtr, yPtr, zPtr);

    line();
    cout << "Nilai variabel setelah diproses: " << endl;
    line();
    cout << "w = " << w << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}
