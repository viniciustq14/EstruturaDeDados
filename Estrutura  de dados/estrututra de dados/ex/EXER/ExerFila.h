#ifndef EXERFILA_H_INCLUDED
#define EXERFILA_H_INCLUDED
#include "time.h"
#include "ctype.h"
#include "stdlib.h"
using namespace std;
struct NODE{
int info;
NODE *prox;

};
struct EX{
NODE *inic;
NODE *fim;
NODE *topo1;
NODE *topo2;
NODE *lista;
EX(){
    fim=NULL;
    inic=NULL;
    topo1=NULL;
    topo2=NULL;
    lista=NULL;
}
bool filaVazia(){
    return inic==NULL&&fim==NULL;
}
bool ListaVazia(){
    return lista==NULL;
}
bool PilhaVazia(){
    return topo1==NULL;
}
void EncheFila(){
    int x;
     srand(time(NULL));
for(int i=0;i<100;i++){

    x=50+(rand()%100);
    cout<<x<<endl;
   NODE*aux=new NODE;//1
    if(aux!=NULL){
        aux->info=x;//2
        aux->prox=NULL;//3
        if(inic==NULL){
            inic=aux;//4
        }
        else{
            fim->prox=aux;//5
        }
        fim=aux;//6

    }
}

}
void Arruma(){
    NODE *laux;
    NODE *faux;

while(filaVazia()==false){
laux=lista;
faux=inic;
if(lista!=NULL){
    if(faux->info>laux->info){
        if(faux->info<laux->prox->info){
            faux->prox=laux->prox;
            laux->prox=faux;
            inic=inic->prox;
        }
        else{
            laux=laux->prox;
        }
    }
    else{
        faux->prox=lista;
        lista=faux;
        inic=inic->prox;
    }
}
else{
    lista=faux;
    inic=inic->prox;
}



};

}
void Empilha1(){
while(ListaVazia()==false){

    topo1=lista;
    lista=lista->prox;
}


}
void Empilha2(){
    while(PilhaVazia()==false){

        topo2=topo1;
       topo1=topo1->prox;
    }


    }




};



#endif // EXERFILA_H_INCLUDED
