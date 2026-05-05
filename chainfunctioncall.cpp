#include <iostream>
using namespace std;

class Buku {
    string judul;

    public:
        Buku &setJudul(string judul) {
            this->judul = judul;
            return *this; // chain function
        }

        string getJudul() {
            return this->judul;
        }
};

int main() {
    Buku bukunya;
    //bukunya.setJudul("matematika");
    //cout << bukunya.getJudul();
    cout << bukunya.setJudul("Matematika").getJudul() << endl; // chain function call
    return 0;
}