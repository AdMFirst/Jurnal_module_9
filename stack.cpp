#include "stack.h"

void createStack(stack &S){
    /*I.S. sembarang
    F.S. terbentuk stack dengan Top= 0 */
    Top(S) = 0;
};
bool isEmpty(stack S){
    /*Mengembalikan nilai true jika stackkosong*/
    if(Top(S) == 0){
        return true;
    } else {
        return false;
    }
};
bool isFull(stack S){
    /*Mengembalikan nilai true jika stackpenuh*/
    if(Top(S) == 10){
        return true;
    } else {
        return false;
    }
};
void push(stack &S,infotype x){
    /*I.S. mungkin kosong
    F.S. menambahkan elemen pada stack dengannilai x, Top = Top + 1*/
    if(isFull(S) == false){
        Top(S)++;
        info(S)[Top(S)] = x;
    }
};
int pop(stack &S){
    /*Mengembalikan nilai infotype yang ada pada indeksTop, Top = Top - 1*/
    int x;
    x = info(S)[Top(S)];
    Top(S)--;
    return x;
};
void printInfo(stack S){
    /* I.S. stack mungkin kosong
    F.S. Jika stack tidak kosong, maka menampilkansemua info yang ada pada stack */
    for(int i = Top(S); i>=1; i--){
        cout<<info(S)[i]<<" ";
    }
    cout<<endl;
};
void ascending(stack &S){
    /*membuat stack terurut ascending*/
    int pass = 2;
    int i,temp;
    while( pass <= Top(S)){
        i = pass;
        temp = info(S)[pass];
        while(i>0 && temp <info(S)[i-1]){
            info(S)[i] = info(S)[i-1];
            i--;
        }
        info(S)[i] = temp;
        pass++;
    }

}

void descending(stack &S){
    /*membuat stack terurut descending*/
    int pass = 2;
    int i,temp;
    while( pass <= Top(S)){
        i = pass;
        temp = info(S)[pass];
        while(i>0 && temp >info(S)[i-1]){
            info(S)[i] = info(S)[i-1];
            i--;
        }
        info(S)[i] = temp;
        pass++;
    }

}
