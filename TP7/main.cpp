#include "CLL.h"

using namespace std;

int main()
{
    List L;
    createList_1301210013(L);

    adr P;
    int select,jumlah;
    float secbig;
    string conti;
    infotype nasabah;

     while(true) {
        select = selectMenu_1301210013();
        if (select == 1) {
            cout << "Jumlah data yang akan ditambahkan: "; cin >> jumlah;
            cout << endl;

            for (int i = 1; i <= jumlah; i++) {
                cout << "Masukkan data nasabah ke-" << i << endl;
                cout << "Nama: "; cin >> nasabah.nama;
                cout << "Jenis Kelamin: "; cin >> nasabah.jenisKelamin;
                cout << "Warga Negara: "; cin >> nasabah.wargaNegara;
                cout << "Pekerjaan: "; cin >> nasabah.pekerjaan;
                cout << "Usia: "; cin >> nasabah.usia;
                cout << "Berat Badan: "; cin >> nasabah.beratBadan;
                cout << "Tinggi Badan: "; cin >> nasabah.tinggiBadan;
                P = createNewElement_1301210013(nasabah);
                insertFirst_1301210013(L,P);
                cout << endl;
            }

            cout << "Kembali ke menu utama? (Y/N): "; cin >> conti;
            if (conti == "Y" || conti == "y") {
                continue;
            } else {
                break;
            }

        } else if (select == 2) {
            cout << "Menampilkan semua data..." << endl << endl;
            showAll_1301210013(L);
            cout << endl;

            cout << "Kembali ke menu utama? (Y/N): "; cin >> conti;
            if (conti == "Y" || conti == "y") {
                continue;
            } else {
                break;
            }

        } else if (select == 3) {
            cout << "Menampilkan Data Nasabah terbalik..." << endl << endl;
            reverseList_1301210013(L);

            cout << "Kembali ke menu utama? (Y/N): "; cin >> conti;
            if (conti == "Y" || conti == "y") {
                continue;
            } else {
                break;
            }

        }else if (select == 4){
            secbig = secondBiggest_1301210013(L);
            cout << "Menampilkan tinggi nasabah dengan badan terbesar kedua: " << secbig << endl << endl;

            cout << "Kembali ke menu utama? (Y/N): "; cin >> conti;
            if (conti == "Y" || conti == "y") {
                continue;
            } else {
                break;
            }
        }else if (select == 0) {
            break;

        } else {
            continue;
        }
    }


    return 0;
}
