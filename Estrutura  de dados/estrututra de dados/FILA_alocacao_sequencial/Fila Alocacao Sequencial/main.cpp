#include <iostream>
#include "fila.h"
using namespace std;
int main()
{
    cout << "Fila em alocacao sequencial" << endl;
    char opc;
    int x;
    Fila<int> f(10);
    do{
        cout<<"1-insere"<<endl;
        cout<<"2-remove"<<endl;
        cout<<"3-primeiro"<<endl;
        cout<<"4-exibe a fila"<<endl;
        cout<<"9-fim"<<endl;
        cout<<"Selecione:";
        cin>>opc;
        switch(opc){
        case '1':
            if(f.filaCheia()){
                cout<<"Fila cheia..."<<endl;
            }
            else{
                cout<<"Digite o valor:";
                cin>>x;
                f.insere(x);
            }
            break;
        case '2':
            if(f.filaVazia()){
                cout<<"Fila vazia..."<<endl;
            }
            else{
                cout<<"Removido:"<<f.remover()<<endl;
            }
            break;
        case '3':
            if(f.filaVazia()){
                cout<<"Fila vazia..."<<endl;
            }
            else{
                cout<<"Primeiro:"<<f.primeiro()<<endl;
            }
            break;
        case '4':
            if(f.filaVazia()){
                cout<<"Fila vazia..."<<endl;
            }
            else{
                cout<<"Elementos da Fila"<<endl;
                //implemente
            }
            break;
        case '9':
            cout<<"fim..."<<endl;
            break;
        default:
            cout<<"opcao invalida...."<<endl;
            break;
        }
    }while(opc != '9');
    return 0;
}






