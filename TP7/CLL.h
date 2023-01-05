#ifndef CLL_H_INCLUDED
#define CLL_H_INCLUDED

#include <iostream>
using namespace std;

#define first(P) ((P).first)
#define next(P) P -> next
#define prev(P) P -> prev
#define info(P) P -> info
#define nil NULL

struct dataNasabah {
    string nama;
    string jenisKelamin;
    string wargaNegara;
    string pekerjaan;
    int usia;
    float beratBadan;
    float tinggiBadan;
};

typedef dataNasabah infotype;
typedef struct elmList *adr;

struct elmList {
    infotype info;
    adr next;
    adr prev;
};

struct List {
    adr first;
};

void createList_1301210013(List& L);
adr createNewElement_1301210013(infotype a);
void showAll_1301210013(List L);
void reverseList_1301210013(List L);
void insertFirst_1301210013(List& L, adr P);
float secondBiggest_1301210013(List L);
int selectMenu_1301210013();

#endif // CLL_H_INCLUDED
