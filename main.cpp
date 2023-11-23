//Avav Abdillah Sam F55123020
#include <iostream>

using namespace std;

int main()
{
    int biaya, kendaraan;
    double durasi;
    char konfirmasi;

    awal: cout << "----- Sistem Parkir Otomatis -----" << endl;
    cout << "\n";

    cout << "Masukkan Durasi Parkir (jam) = ";
    cin >> durasi;
    wkwk: cout << "Masukkan Jenis Kendaraan (1 = Mobil 2 = Motor) = ";
    cin >> kendaraan;
    cout << "\n";

    if (durasi < 1) {
        biaya = 5000;
    }

    if (durasi >= 10) {
        biaya = 10000;
    } else if (durasi >= 1) {
        biaya = 5000 + 1000;
    }

    //Output
    if ( kendaraan == 1 ) {
        cout << "Jenis Kendaraan Anda \t \t = Mobil" << endl;
    } else if ( kendaraan == 2 ) {
        cout << "Jenis Kendaraan Anda \t \t = Motor" << endl;
    } else {
        cout << "Masukkan Jenis Kendaraan Yang Sesuai" << endl;
        goto wkwk;
    }
    cout << "Durasi Parkir Anda \t \t = " << durasi << " Jam" << endl;
    cout << "Biaya Yang Harus Anda Bayar \t = Rp. " << biaya << ",-" << endl;

    loop: cout << "Apakah Anda Ingin Melanjutkan? (y/n) = ";
    cin >> konfirmasi;
    if (konfirmasi == 'y') {
        goto awal;
    } else if (konfirmasi == 'n') {
        cout << "\n";
        cout << "-------- Terimakasih --------" << endl;
        cout << "-F55123020_Avav Abdillah Sam-" << endl;
        return 0;
    } else {goto loop;}

    return 0;
}
