#include <iostream>
#include <conio.h>

using namespace std;


const char *nama_hari(int hr)
{
    const char *nama[7] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
    if (hr < 1 || hr > 7)
        return "kode hari salah";
    else
        return nama[hr - 1];
}


int main()
{
    int hr;
    cout << "Hari (1-7) : ";
    cin >> hr;
    cout << "Hari ke- " << hr << " adalah hari " << nama_hari(hr) << endl;
    getch();
}