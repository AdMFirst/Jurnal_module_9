#include "queue.h"
List GlobalList;
void Masukkan_transaksi(string s){
    //mengubah pesan transaksi menjadi node dan memasukannnya ke list global
    address p = new node;
    p->info = s;
    p->next = NULL;
    enqueue(GlobalList, p);
};

void Proses_transaksi(string &data_transaksi){
    //memperoses data yang ada di barisan list
    address q = dequeue(GlobalList);
    data_transaksi = q->info;
}
int main_queue(){
    string data_transaksi;
    Masukkan_transaksi("Andi transfer doni 50.000");
    Masukkan_transaksi("Doni Trasnfer Saras 20.000");
    printQueue(GlobalList);
    Masukkan_transaksi("Tono Transfer Bili 20.000");
    Proses_transaksi(data_transaksi);
    printQueue(GlobalList);
    cout << data_transaksi <<endl;
    return 0;
}
