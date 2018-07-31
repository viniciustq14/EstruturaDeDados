#include <iostream>
#include "ListaLinear.h"


using namespace std;

int main()
{
    int op;
    cout << "Triangulo " << endl;
    Lista<int> lista(10);
   int t1,t2,t3;

    do{
     cout<<"Escolha uma opcao"<<endl;
     cout<<"1-Inserir "<<endl;
     cout<<"2-Apagar "<<endl;
     cout<<"3-Visualizar "<<endl;
     cout<<"4-Sair"<<endl;
     cin>>op;
     switch(op){
     case 1:{
        if(lista.listaCheia()==1){
            cout<<"Lista cheia"<<endl;
        }
        else{

            do{
            cout<<"Lado 1:"<<endl;
            cin>>t1;
            cout<<"Lado 2:"<<endl;
            cin>>t2;
            cout<<"Lado 3:"<<endl;
            cin>>t3;
            }while((lista.valida(t1,t2,t3))==0);

           lista.insere(t1,t2,t3);
        }

     break;
     }
     case 2:{
         if(lista.listaVazia()==0){
            cout<<"Escolha um triangulo :"<<endl;
            cin>>t1;
            lista.remover(t1);
         }
         else{
            cout<<"Lista vazia "<<endl;
         }

     break;
     }
      case 3:{
            cout<<"Escolha um triangulo :"<<endl;
            cin>>t1;
            cout<<"Lado 1 :" lista.visualizar(t1,0);<<endl;
            cout<<"Lado 2 :" lista.visualizar(t1,1)<<endl;
            cout<<"Lado 3 :" lista.visualizar(t1,2)<<endl;
            cout<<"Perimetro :" lista.visualizar(t1,3)<<endl;
            cout<<"Area :" lista.visualiar(t1,4)<<endl;
cout<<"O triangulo é :"lista.tipoTriangulo( lista.visualizar(t1,0), lista.visualizar(t1,1), lista.visualizar(t1,2))<<endl;

     break;
     }
      case 4:{

     break;
     }
     default:{

     }

     }
    }while(op<4);

    return 0;
}
