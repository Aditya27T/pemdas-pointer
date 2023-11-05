#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int aziz = 70, *defa, *dewi;

    cout << " aziz = " << aziz << endl;
    cout << " defa = aziz\n";
    cout << " dewi = aziz + 3\n\n";
    defa = &aziz;
    cout << " a. Berapakah nilai Defa ?? \n";
    cout << " Nilai Defa = " << *defa << endl;
    dewi = &aziz;
    cout << " b. Berapakah nilai Dewi ?? \n";
    cout << " Nilai Dewi = " << *dewi + 3;
    cout << "\n\n aziz = " << aziz << endl;
    cout << " defa = &aziz\n";
    cout << " dewi = *aziz + 3\n\n";
    defa = &aziz;
    cout << " a. Berapakah nilai Defa ?? \n";
    cout << " Nilai Defa = " << *defa;
    dewi = &aziz;
    cout << "\n b. Berapakah nilai Dewi ?? \n";
    cout << " Nilai Dewi = " << *dewi + 3 << endl;
    getch();
}