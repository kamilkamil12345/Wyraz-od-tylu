#include <iostream>

using namespace std;

int main()
{
    string wyraz; int dlugosc;
    cout << "Podaj jakis wyraz:" << endl;   cin >> wyraz;

    dlugosc = wyraz.length();
    cout << "Dlugosc wyrazu to: " << dlugosc << endl;

    for (int i = dlugosc-1; i >= 0; i--)
    {
        cout << wyraz[i];
    }

    return 0;
}
