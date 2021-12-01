#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>

using namespace std;


typedef struct node *address;

struct node{
    string info;
    address next;
};

struct List {
    address head = NULL;
    address tail = NULL;
};
void enqueue(List &L, address p);
address dequeue(List &L);
void printQueue(List &L);
int main_queue();
#endif // QUEUE_H_INCLUDED
