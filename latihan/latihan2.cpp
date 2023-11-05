#include <iostream>

using namespace std;

int main() {
    long *p, x;

    p = &x;
    x = 40;

    cout << "Nilai x: " << x << endl;
    cout << "Nilai &x: " << &x << endl;
    cout << "Nilai p: " << p << endl;
    cout << "Nilai *p: " << *p << endl;

    *p = 25;

    cout << "Nilai x: " << x << endl;
    cout << "Nilai &x: " << &x << endl;
    cout << "Nilai p: " << p << endl;
    cout << "Nilai *p: " << *p << endl;

    return 0;
}
