#include <iostream>
using namespace std;

long potong(long belanja) {
    double diskon = 0;

    if (belanja < 1000000) {
        diskon = 0;
    } else if (belanja <= 5000000) {
        diskon = 0.20;
    } else {
        diskon = 0.35;
    }

    return belanja * diskon;
}

int main() {
    long belanja, potongan, bayar;
    char ulang;

    do {
        cout << "Program Hitung Potongan.\n";
        cout << "Besar pembelian barang            Rp. ";
        cin >> belanja;

        potongan = potong(belanja);
        bayar = belanja - potongan;

        cout << "Besar diskon yang diberikan       Rp. " << potongan << endl;
        cout << "Besar harga yang harus dibayarkan Rp. " << bayar << endl;

        cout << "\nIngin menjalankan program dari awal (y/n)? ";
        cin >> ulang;
        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
