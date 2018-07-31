#include <iostream>
#include "ArvoreBB.h"
using namespace std;

int main()
{
    cout<<"BST"<<endl;
    Bst<int> b;
    b.insere(b.pRaiz,5);
    b.insere(b.pRaiz,3);
    b.insere(b.pRaiz,9);
    b.insere(b.pRaiz,2);
    b.insere(b.pRaiz,4);
    b.insere(b.pRaiz,8);
    b.insere(b.pRaiz,10);
    cout<<"Em ordem"<<endl;
    b.emOrdem(b.pRaiz);
    cout<<"Pos ordem"<<endl;
    b.posOrdem(b.pRaiz);
    cout<<"Pre ordem"<<endl;
    b.preOrdem(b.pRaiz);
    b.Buscar(5,b.pRaiz);


    b.Minimo(b.pRaiz);
    b.Maximo(b.pRaiz);
    return 0;
}
