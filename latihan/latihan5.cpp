#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    void *p_void;

    float var_f = 3.5;
    p_void = &var_f;

    cout << "Nilai variable = " << var_f << endl;

    *(float *)p_void = 5.5;

    cout << "Nilai variable = " << var_f << endl;
}