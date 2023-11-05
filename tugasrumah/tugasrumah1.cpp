#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void kapital(char *kata)
{
    int i = 0;

    for (i = 0; i < strlen(kata); i++)
    {
        if (kata[0] >= 'a' && kata[0] <= 'z')
        {
            kata[0] -= 32;
        }
        if (kata[i] == ' ')
        {
            if (kata[i + 1] >= 'a' && kata[i + 1] <= 'z')
            {
                kata[i + 1] -= 32;
            }
        }
    }
}

int main()
{
    char kata[100];
    cout << " Masukkan kata : ";
    cin.getline(kata, sizeof(kata));
    kapital(kata);
    cout << " Kata yang telah diubah menjadi huruf kapital adalah : " << kata << endl;
    getch();
}