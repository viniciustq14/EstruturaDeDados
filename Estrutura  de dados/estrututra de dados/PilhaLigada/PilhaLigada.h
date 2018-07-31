#ifndef PILHALIGADA_H_INCLUDED
#define PILHALIGADA_H_INCLUDED
template <typename TIPO>
struct Node{
    TIPO info;
    Node<TIPO> *prox;

} ;
template <typename TIPO>
struct Pilha{
    private:
    Node<TIPO> *topo;
public:
Pilha(){
    topo=NULL;
}
bool pilhaVazia(){
return topo=NULL;
}

bool empilha(TIPO x){
bool t=false;
//passo 1 aloca
Node<TIPO> *aux=new Node<TIPO>;

        if(aux!=NULL){
            t=true;
            //2 Guarda info
            aux->info=x;
            //3 apontar prox para topo
            aux->prox=topo;
            //4 topo aponta para aux
            topo=aux;
            }

return t;

}
TIPO desempilha(){
    TIPO temp=topo->info;
    Node<TIPO> *aux=topo;
    topo=topo->prox;
    delete aux;

return temp;
}
TIPO elementoTOPO(){
return topo->info;
}
Node<TIPO> *getTopo(){
return topo;
}

} ;




#endif // PILHALIGADA_H_INCLUDED
