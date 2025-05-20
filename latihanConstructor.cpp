#include <iostream>
#include <string>
using namespace std;

class Barang {
private:
    string namaBarang;
    string kodeBarang;

public: 
Barang (string nama, string kode)
{
    namaBarang = nama;
    kodeBarang = kode;
}


void Cetak() {
    cout << "Nama Barang : " << namaBarang << endl;
    cout << "Kode Barang : " << kodeBarang << endl;
}
};

int main() {
    
    Barang barang("lemari", "3976");

    barang.Cetak();
    return 0;
}