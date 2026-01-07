#include <iostream>
using namespace std;

int main() {
    string namaBarang[50];
    int hargaBarang[50], jumlahBarang[50];
    int totalBarang;
    int totalBayar = 0;
    int bayar, kembalian;

    cout << "=== KASIR MINIMARKET ===" << endl;
    cout << "Masukkan jumlah barang: ";
    cin >> totalBarang;

    for(int i = 0; i < totalBarang; i++) {
        cout << "\nBarang ke-" << i + 1 << endl;
        cout << "Nama Barang   : ";
        cin >> namaBarang[i];
        cout << "Harga Barang  : ";
        cin >> hargaBarang[i];
        cout << "Jumlah Barang : ";
        cin >> jumlahBarang[i];

        totalBayar += hargaBarang[i] * jumlahBarang[i];
    }

    cout << "\nTotal Bayar : Rp " << totalBayar << endl;
    cout << "Uang Bayar  : Rp ";
    cin >> bayar;

    if(bayar >= totalBayar) {
        kembalian = bayar - totalBayar;
        cout << "Kembalian   : Rp " << kembalian << endl;
    } else {
        cout << "Uang tidak cukup!" << endl;
    }

    cout << "\nTerima kasih telah berbelanja." << endl;
    return 0;
}