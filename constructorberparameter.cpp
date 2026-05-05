#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
    mahasiswa(int nim, string nama); //constructor dengan parameter
};

//definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constractor dengan Parameter Terpanggil" << endl;
    cout << "NIM : " << nim << endl;
    cout << "Nma : " << nama << endl;
}