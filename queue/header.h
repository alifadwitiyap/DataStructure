#include <iostream>
using namespace std;

typedef struct node *address;
struct node{
    string data;
    address next;
};

address first,last;

void enqueue(string data);
void dequeque();
void view();
