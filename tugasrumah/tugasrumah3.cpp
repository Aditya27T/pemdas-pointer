
#include <iostream>
using namespace std;

int hitungJumlahKata(char *str) {
    int jumlahKata = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            jumlahKata++;
        }
        i++;
    }
    return jumlahKata + 1;
}

int hitungJumlahHuruf(char *str) {
    int jumlahHuruf = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            jumlahHuruf++;
        }
        i++;
    }
    return jumlahHuruf;
}

int main() {
    char str[100];
    cout << "Masukkan kalimat: ";
    cin.getline(str, 100);

    cout << "Jumlah kata: " << hitungJumlahKata(str) << endl;
    cout << "Jumlah huruf: " << hitungJumlahHuruf(str) << endl;

    return 0;
}
