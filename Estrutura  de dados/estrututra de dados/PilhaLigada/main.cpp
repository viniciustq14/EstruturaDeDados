#include <iostream>
#include "PilhaLigada.h"
using namespace std;

int main()
{
    Pilha<int>p;
    cout << "Pilha ligada" << endl;

    p.empilha(3);
    p.empilha(5);
    p.empilha(9);


cout<<p.desempilha()<<endl;
Node <int> *aux=p.getTopo();
while(aux!=NULL){
    cout<<" NA pilha "<<aux->info<<endl;
    aux=aux->prox;
}
    return 0;
}
