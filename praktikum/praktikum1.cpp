#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void line()
{
    for (int i = 0; i < 2; i++)
        cout << "**--------------------**";
    cout << endl;
}
int main()
{
    void *tunjuk;
    char kata[100];
    char balik;
    int jumlah;

    cout << " Masukkan kata : ";
    cin.getline(kata, sizeof(kata));
    jumlah = strlen(kata) - 1;
    cout << endl;

    line();
    cout << endl;
    cout << " Pembalikan kata : ";
    for (int j = jumlah; j >= 0; j--)
    {
        tunjuk = &kata[j];
        balik = *(int *)tunjuk;
        cout << balik;
    }
    cout << endl << endl;
    line();
    getch();
}