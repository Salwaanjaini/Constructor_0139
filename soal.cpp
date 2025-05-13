#include <iostream>
using namespace std;

class bangunDatar
{
    public: // akses modifier
    int panjang,lebar;


public: 
    void input()
    {
        cout << "Masukkan panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar : ";
        cin >> lebar;
    }

    int luasBD(int a, int b)
    {
        return a * b;
    }
    int lebarBD(int a, int b,int c){
        return a + b + c;
    }
    // PersegiPanjang

};

class persegiPanjang
{
public: // akses modifer
    int panjang,lebar;

public:
    void input()
    {
        cout << "Masukkan panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar: ";
        cin >> lebar;
    }
    int luasBd(int a, int b)
    {
        return 20 * 30;
    }
    
};

int main ()
{
    bangunDatar objekBD;
    persegiPanjang ol;

    cout << "Masukkan panjang: ";
    cin >> objekBD.panjang;
    cout << "Masukkan lebar : ";
    cin >> objekBD.lebar;
    cout << " luas persegi panjang: " <<
    objekBD.luasBD(objekBD.panjang,objekBD.lebar) << endl;
    
};