#include <iostream>
#include <string>
using namespace std;

int Tarif(char kode, string &jenisBuku) {
    int tarif = 0;

    if (kode == 'C' || kode == 'c') {
        jenisBuku = "CerPen (Kumpulan Cerita Pendek)";
        tarif = 500;
    }
    else if (kode == 'K' || kode == 'k') {
        jenisBuku = "Komik";
        tarif = 700;
    }
    else if (kode == 'N' || kode == 'n') {
        jenisBuku = "Novel";
        tarif = 1000;
    }
    else {
        jenisBuku = "Tidak Diketahui";
        tarif = 0;
    }

    return tarif;
}

int main() {
    char ulang;
    do {
        string nama, jenisBuku;
        char kode;
        int banyakPinjam, tarifSewa, totalBayar;

        cout << "Perpustakaan \"Kecil-Kecilan\"" << endl;
        cout << "-----------------------------" << endl;

        cout << "Nama Penyewa Buku     : ";
        getline(cin, nama);

        cout << "Kode Buku [C/K/N]     : ";
        cin >> kode;

        cout << "Banyak Pinjam         : ";
        cin >> banyakPinjam;

        tarifSewa = Tarif(kode, jenisBuku);
        totalBayar = tarifSewa * banyakPinjam;

        cout << endl;
        cout << "Tarif Sewa            : Rp. " << tarifSewa << endl;
        cout << "Jenis Buku            : " << jenisBuku << endl;
        cout << endl;
        cout << "Penyewa dengan Nama " << nama << endl;
        cout << "Jumlah Bayar Penyewaan Sebesar Rp. " << totalBayar << endl;
        cout << endl;

        cout << "Ingin menjalankan program dari awal (y/n) ? ";
        cin >> ulang;
        cin.ignore();

        cout << endl;
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
