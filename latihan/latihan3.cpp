#include <iostream>

using namespace std;


void ubah(int *b) {
    *b = *b + 22;
}

int main() {
    int b = 12;

    cout << "isi nilai semula =" << b << endl;

    ubah(&b);

    cout << "isi nilai sekarang =" << b << endl;
}