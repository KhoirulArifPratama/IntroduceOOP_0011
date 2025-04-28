#include <iostream>
using namespace std;

class PersegiPanjang
{
private:
    int panjang;
    int lebar;
    int luas;

public:
    void inputdata()
    {
        cout << "Masukkan panjang = ";
        cin >> panjang;
        cout << "Masukkan lebar = ";
        cin >> lebar;
        cout << "Masukkan luas = ";
        cin >> luas;
    }
