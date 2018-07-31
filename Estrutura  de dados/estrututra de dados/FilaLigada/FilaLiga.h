#ifndef FILALIGA_H_INCLUDED
#define FILALIGA_H_INCLUDED
template <typename tipo>
struct Node{
    tipo info;
    Node<tipo> *prox;

};
template <typename tipo>
struct Fila{
private :
    Node <tipo>* inic;
    Node <tipo>* fim;

public:
    Fila(){
    inic=NULL;
    fim=NULL;
    }
bool Insere(tipo x){
bool v=false;

Node<tipo> *aux=new Node<tipo>;//1
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
        v=true;
    }
return v;
}
tipo remover(){
Node<tipo> *aux;
tipo temp=inic->info;
    if(inic!=NULL){
        aux=inic;
        inic=inic->prox;
        delete aux;
    }

return temp;
}
tipo Primeiro(){
return inic->info;
}
Node<tipo> *getInic(){
return inic;
}
Node<tipo> *getFim(){
return fim;
}
bool FilaVazia(){

return inic==NULL;
}

};
#endif // FILALIGA_H_INCLUDED
