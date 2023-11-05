#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    void tunjuk;

    double n_double = 25.5;
    char n_char[1] = 'A';

    tunjuk = &n_double;
    cout << "Nilai yang ditunjuk adalah : " << *(double *)tunjuk << endl;

    tunjuk = &n_char;
    cout << "Nilai yang ditunjuk adalah : " << *(char *)tunjuk << endl;
}