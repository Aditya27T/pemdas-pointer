
#include <iostream>
#include <string>

using namespace std;

const char *bulan[] = {
    "Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli",
    "Agustus", "September", "Oktober", "November", "Desember"
};

int main() {
    int bulan;

    cout << "Masukkan bulan (1-12): ";
    cin >> bulan;

    if (bulan < 1 || bulan > 12) {
        cout << "Bulan tidak valid" << endl;
        return 1;
    }

    cout << "Nama bulan: " << ::bulan[bulan - 1] << endl;

    return 0;
}
