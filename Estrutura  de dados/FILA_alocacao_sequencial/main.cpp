#include <iostream>
#include "Fila.h"
using namespace std;

int main()
{
    cout << "Fila em alocacao sequecial " << endl;
    Fila<int> f(10);
    //Fila<char> *f2=new Fila<int>(10);

int x;
char opc,direc;
do{
cout<<"Escolha a direcao para a fila :"<<endl;
cin>>direc;
}while(direc!='e'&&direc!='d');
do{
    cout<<"1-Insere"<<endl;
    cout<<"2-Remove"<<endl;
    cout<<"3-Primeiro "<<endl;
    cout<<"4-Exibe fila"<<endl;
    cout<<"5_Fim"<<endl;
    cout<<"Selecione :"<<endl;
    cin>>opc;
    switch(opc){
    case '1':{
        if(direc=='d'){
        if(f.FilaCheia()){
            cout<<"Fila cheia"<<endl;
        }
        else{
            cout<<"Digite um numero"<<endl;
            cin>>x;
            f.inserirD(x);
        }
        }
        else{
         if(f.FilaCheia()){
            cout<<"Fila cheia"<<endl;
        }
        else{
            cout<<"Digite um numero"<<endl;
            cin>>x;
            f.inserirE(x);
        }
        }

     break;
    }

    case '2':{
        if(direc=='d'){
        if(f.FilaVazia()){
            cout<<"Fila vazia"<<endl;
        }
        else{
            cout<<"Removido "<<f.removerD()<<endl;
        }
        }
        else{
            if(f.FilaVazia()){
            cout<<"Fila vazia"<<endl;
        }
        else{
            cout<<"Removido "<<f.removerE()<<endl;
        }
        }
    break;
    }

    case '3':{
        if(f.FilaVazia()){
            cout<<"Fila vazia"<<endl;
        }
        else{
            cout<<"Primeiro "<<f.primeiro()<<endl;
        }
    break;
    }

    case '4':{
        if(f.FilaVazia()){
            cout<<"Fila vazia"<<endl;
        }
        else{
            int i=0;
            if(f.getInic()<f.getFim()){
                for(i;i<f.getFim();i++){
                    cout<<"A sequencia da fila "<<f.getValor(i)<<endl;
                }
            }
            else{
                    i=f.getInic();
                for(i;i<f.getTamanho();i++){
                    cout<<"A sequencia da fila "<<f.getValor(i)<<endl;
                }
                i=0;
                for(i;i<f.getFim();i++){
                    cout<<"A sequencia da fila "<<f.getValor(i)<<endl;
                }
            }
            }
    break ;
    }

    case '5':{
            cout<<"Fim ...."<<endl;
    break;
    }
    default:{
        cout<<"Opcao invalida"<<endl;
    break;
    }
    }

}while(opc!='5');

    return 0;
}
