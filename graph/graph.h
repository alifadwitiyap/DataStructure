#include <iostream>
#include <vector>

using namespace std;

typedef struct Pelm *Padr;
typedef struct Celm *Cadr; 

struct Pelm{
int info;
Cadr firstChild;
bool status=false;
bool output=false;
Padr next;
};

struct Celm{
Padr tetangga;
Cadr next;
};


Padr G=NULL;

void insertParent(int info);
void insertChild(Padr P);
void Connect(int info1, int info2);
Padr Search(int info);
void view();
void BreadhFirstSearch();
void DeepFirstSearch();

//
