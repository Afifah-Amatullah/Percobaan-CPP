#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    cout << ("abc\n");
    cout << ("abc\t");
    cout << ("\"Halo\"");
    cout << ("Panjang kata Unand = ");
    cout << strlen("Unand");
    cout << strlen("Selamat Pagi. 0\n") << endl;
    cout << strlen("Selamat Pagi. ") << endl;
    cout << strlen("Selamat") << endl;
    cout << strlen("S") << endl;
    cout << strlen("") << endl;
}