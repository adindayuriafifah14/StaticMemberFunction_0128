#include <iostream>
using namespace std;

class angka 
{
private:
    int *arr;
    int panjang;

public:
    angka(int); //constructor
    ~angka(); //destructor
    void cetalData();
    void isiData();
};

angka::angka(int i){ //constructor
    panjang = 1;
    arr = new int[i];
    isiData();
    delete[] arr;
    cout << "Alamat array sudah dilepaskan" << endl;
}

    