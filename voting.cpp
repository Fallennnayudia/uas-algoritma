#include <iostream>
using namespace std;

int main() {
    int jumlahPelanggan;
    int vote[4] = {0, 0, 0, 0};
    int pilihan;

    cout << "=== SISTEM VOTING PELAYANAN KASIR MINIMARKET ===\n";
    cout << "Masukkan jumlah pelanggan: ";
    cin >> jumlahPelanggan;

    for (int i = 1; i <= jumlahPelanggan; i++) {
        cout << "\nPelanggan ke-" << i << endl;
        cout << "1. Sangat Puas\n";
        cout << "2. Puas\n";
        cout << "3. Cukup\n";
        cout << "4. Tidak Puas\n";
        cout << "Pilih (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                vote[0]++;
                break;
            case 2:
                vote[1]++;
                break;
            case 3:
                vote[2]++;
                break;
            case 4:
                vote[3]++;
                break;
            default:
                cout << "Pilihan tidak valid, ulangi!\n";
                i--; // supaya voting diulang
        }
    }

    cout << "\n=== HASIL VOTING ===\n";
    cout << "Sangat Puas : " << vote[0] << endl;
    cout << "Puas        : " << vote[1] << endl;
    cout << "Cukup       : " << vote[2] << endl;
    cout << "Tidak Puas  : " << vote[3] << endl;

    cout << "\nTerima kasih atas partisipasi Anda.\n";
    return 0;
}