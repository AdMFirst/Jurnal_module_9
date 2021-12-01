#include "queue.h"

void enqueue(List &L, address p){
    //memasukan sebuah node ke barisan list

    address Q = L.tail;

    if(Q != NULL){
        Q->next = p;
        L.tail = p;
    } else {
        L.head = p;
        L.tail = p;
    }
}

address dequeue(List &L){
    //mengeluakan node dari barisan list
    /*
    IS. Terdefinisi sebuah list L (L tidak kosong dan mungkin berisi satu elemen).
    FS. P berisi alamat elmList yang pertama, elmList yang ditunjuk oleh P dihapus dari
    list
    */
    address P;

    P = L.head;
    if((L.head)->next == NULL){
        L.head = NULL;
    } else {
        L.head = (L.head)->next;
    };
    P->next = NULL;

    return P;
}

void printQueue(List &L){
    //mengeluarkan semua isi barisan list

    /*
    IS. Terdefinisi sebuah list L
    FS. Menampilkan semua info elmList di list.
    */
    address P;

    if(L.head == NULL){
        cout << "List kosong!" << endl;
    } else {
        P = L.head;

        while(P != NULL){
            cout<< P->info <<endl;
            P = P->next;
        };

        }
}



