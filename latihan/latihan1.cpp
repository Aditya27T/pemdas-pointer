#include <iostream>

using namespace std;

int main() {
    int *pBil;

    int bilX = 77;

    pBil = &bilX;

    cout << "Nilai bilX: " << bilX << endl;
    cout << "Alamat bilX: " << &bilX << endl;

    *pBil = *pBil + 3;

    cout << "Nilai bilX: " << bilX << endl;
    cout << "Alamat bilX: " << &bilX << endl;

    return 0;
}
