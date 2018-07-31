#include <iostream>
#include"FilaLiga.h"
#define tipo int
using namespace std;

int main()
{
    Fila<int> f;
  cout<<"Fila ligada "<<endl;
  int op,x;
  do{
    cout<<"1-Insere "<<endl;
    cout<<"2-remove "<<endl;
    cout<<"3-Primeiro "<<endl;
    cout<<"4-Exibe fila "<<endl;
    cout<<"5-fim "<<endl;
    cin>>op;
    switch(op){
    case 1:{
        cout<<"Digite um numero :"<<endl;
        cin>>x;
        if(f.Insere(x)){
            cout<<"Insercao com sucesso "<<endl;
        }
        else{
            cout<<"Fila cheia"<<endl;
        }
    break;
    }
    case 2:{
        if(f.FilaVazia()){
            cout<<"Fila vazia"<<endl;
        }
        else{
        cout<<"O elemento removido foi :"<<f.remover()<<endl;
        }
    break;
    }
    case 3:{
         if(f.FilaVazia()){
            cout<<"Fila vazia"<<endl;
        }
        else{
        cout<<"O primeiro item e :"<<f.Primeiro()<<endl;
        }

    break;
    }
    case 4:{
 if(f.FilaVazia()){
            cout<<"Fila vazia"<<endl;
        }
        else{
            Node <int> *aux=f.getInic();
                while(aux!=NULL){
                cout<<"O elemento da fila :"<<aux->info<<endl;
                aux=aux->prox;
                }
        }
    break;
    }
    case 5:{
        cout<<"Fim "<<endl;
    break;
    }
    default:{
        cout<<"Opcao invalida"<<endl;
    break;
    }
    }

  }while(op!=5);


    return 0;
}
