#ifndef ARVOREBB_H_INCLUDED
#define ARVOREBB_H_INCLUDED
using namespace std;
template <typename Tipo>
struct Node{
Tipo info;
Node<Tipo> *pEsq;
Node<Tipo> *pDir;
};
template <typename Tipo>
struct Bst{
Node<Tipo>*pRaiz;
Bst(){
pRaiz=NULL;
}
    void insere(Node<Tipo>*&t,Tipo x){
    if(t==NULL){
            t=new Node<Tipo>;
            t->info=x;
            t->pEsq=NULL;
            t->pDir=NULL;
    }
    else{
            if(x<t->info){
                insere(t->pEsq,x);
            }
            else{
                insere(t->pDir,x);
            }
    }

    }
    bool ArvoreVazia(){
    return pRaiz==NULL;
    }
    void preOrdem(Node<Tipo> *t){
        if(t!=NULL){
            cout<<t->info<<""<<endl;
            preOrdem(t->pEsq);
            preOrdem(t->pDir);
        }

    }
    void posOrdem(Node<Tipo> *t){
        if(t!=NULL){
            posOrdem(t->pEsq);
            posOrdem(t->pDir);
            cout<<t->info<<""<<endl;

        }

    }
    void emOrdem(Node<Tipo> *t){
        if(t!=NULL){
            emOrdem(t->pEsq);
            cout<<t->info<<""<<endl;
            emOrdem(t->pDir);
        }

    }
    void Buscar(Tipo x,Node<Tipo> *t){
        if(t==NULL){
            cout<<"Nao encontrado"<<endl;
        }
        else{
            if(x<t->info){
                Buscar(x,t->pEsq);
            }
            else{
                if(x>t->info){
                    Buscar(x,t->pDir);
                }
                else{
                    cout<<"O numero e :"<<t->info<<endl;
                }
            }
        }
    }
   void Minimo(Node<Tipo>*t){
       if(t->pEsq==NULL){
        cout<<"Minimo "<<t->info<<endl;
       }
       else{
        Minimo(t->pEsq);
       }
   }
   void Maximo(Node<Tipo>*t){
     if( t==NULL ){
       while(t->pDir!=NULL) {
          t = t->pDir;
       }

     }
     cout<<"maximo "<<t->info<<endl;
   }
   void remover(Node<Tipo>*t,Tipo x){
       Node<Tipo>aux;
   if(x<t->info){
    remover(t->pEsq,x);
   }
   else{
    if(x>t->info){
        remover(t->pDir,x);
    }
    else{
        if(t->pDir==NULL&&t->pEsq==NULL){
            aux=Minimo(t->pDir);
            t->info=aux->info;
            remover(t->pDir,t->info);
        }
        else{
            aux=t;
            if(t->pEsq==NULL){
                t=t->pDir;
            }
            else{
                t=t->pEsq;
            }
            delete aux;
        }
    }
   }



   }
};
#endif // ARVOREBB_H_INCLUDED
