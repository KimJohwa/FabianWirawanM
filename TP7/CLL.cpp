#include "CLL.h"

void createList_1301210013(List& L)
{
    first(L) = nil;
}
adr createNewElement_1301210013(infotype a)
{
    adr P = new elmList;
    info(P) = a;
    next(P) = nil;
    prev(P) = nil;

    return P;
}
void showAll_1301210013(List L)
{
    adr P;
    if (first(L) != nil) {
        P = first(L);
        cout << "===========DATA NASABAH===========" << endl << endl;

        cout << "Nama: " << info(P).nama << endl;
        cout << "Jenis Kelamin: " << info(P).jenisKelamin << endl;
        cout << "Warga Negara: " << info(P).wargaNegara << endl;
        cout << "Pekerjaan: " << info(P).pekerjaan << endl;
        cout << "Usia: " << info(P).usia << endl;
        cout << "Berat Badan: " << info(P).beratBadan << endl;
        cout << "Tinggi Badan: " << info(P).tinggiBadan << endl << endl;

        P = next(P);
        while (P != first(L)) {
        cout << "Nama: " << info(P).nama << endl;
        cout << "Jenis Kelamin: " << info(P).jenisKelamin << endl;
        cout << "Warga Negara: " << info(P).wargaNegara << endl;
        cout << "Pekerjaan: " << info(P).pekerjaan << endl;
        cout << "Usia: " << info(P).usia << endl;
        cout << "Berat Badan: " << info(P).beratBadan << endl;
        cout << "Tinggi Badan: " << info(P).tinggiBadan << endl << endl;

        P = next(P);
        }
    } else {
        cout << "List Kosong" << endl << endl;
    }

}
void reverseList_1301210013(List L)
{
    adr P;
    if (first(L) != nil) {
        P = prev(first(L));
        cout << "===========DATA NASABAH===========" << endl << endl;

        cout << "Nama: " << info(P).nama << endl;
        cout << "Jenis Kelamin: " << info(P).jenisKelamin << endl;
        cout << "Warga Negara: " << info(P).wargaNegara << endl;
        cout << "Pekerjaan: " << info(P).pekerjaan << endl;
        cout << "Usia: " << info(P).usia << endl;
        cout << "Berat Badan: " << info(P).beratBadan << endl;
        cout << "Tinggi Badan: " << info(P).tinggiBadan << endl << endl;

        P = prev(P);
        while (P!=prev(first(L))) {
        cout << "Nama: " << info(P).nama << endl;
        cout << "Jenis Kelamin: " << info(P).jenisKelamin << endl;
        cout << "Warga Negara: " << info(P).wargaNegara << endl;
        cout << "Pekerjaan: " << info(P).pekerjaan << endl;
        cout << "Usia: " << info(P).usia << endl;
        cout << "Berat Badan: " << info(P).beratBadan << endl;
        cout << "Tinggi Badan: " << info(P).tinggiBadan << endl << endl;

        P = prev(P);
        }
    } else {
        cout << "List Kosong";
    }
}
void insertFirst_1301210013(List& L, adr P)
{
    if (first(L) != nil) {
        prev(P) = prev(first(L));
        next(prev(first(L))) = P;
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    } else {
        next(P) = prev(P) = P;
        first(L) = P;
    }

}
float secondBiggest_1301210013(List L)
{
    adr P;
    float secbig,firstbig;
    if (first(L)!=nil) {
        P = first(L);
        firstbig = 0;
        if (info(P).tinggiBadan > firstbig) {
                firstbig = info(P).tinggiBadan;
            }
        P = next(P);
        while (P != first(L)) {
            if (info(P).tinggiBadan > firstbig) {
                firstbig = info(P).tinggiBadan;
            }
            P = next(P);
        }
        secbig = 0;
        if (info(P).tinggiBadan > secbig && info(P).tinggiBadan < firstbig) {
                secbig = info(P).tinggiBadan;
            }
        P = next(P);
        while (P != first(L)) {
            if (info(P).tinggiBadan > secbig && info(P).tinggiBadan < firstbig) {
                secbig = info(P).tinggiBadan;
            }
            P = next(P);
        }
        return secbig;
    } else {
        return 0;
    }
}

int selectMenu_1301210013()
{
    int x;
    cout << "=====================DATA NASABAH ASURANSI JIWA=====================" << endl << endl;
    cout << "----------------------------MENU-----------------------------" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Membalik List" << endl;
    cout << "4. Menampilkan tinggi badan nasabah terbesar kedua" << endl;
    cout << "0. Exit" << endl << endl;
    cout << "Masukkan Menu: "; cin >> x;
    cout << endl;
    return x;
}
