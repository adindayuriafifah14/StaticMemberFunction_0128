#include <iostream>
using namespace std;

class mahasiswa {//membuat class mahasiswa
public:
    static int nim;//deklarasi variabel static yaitu variabel nim
    //deklarasi variabel member
    int id;
    string nama;

    //deklarasi prosedursetID() dan printAll()
    void setID();
    void printAll();

    //pembuatan constructor mahasiswa dengan parameter pnama
    //member initialize list
    mahasiswa(string pnama) :nama(pnama) {
        setID();
    }
};

//memberi value ke variabel nim dari class mahasiswa
int Mahasiswa::nim = 0;

//mengimplementasikan prosedur - prosedur di luar class
void Mahasiswa::setID() {
    id = ++nim;
};




