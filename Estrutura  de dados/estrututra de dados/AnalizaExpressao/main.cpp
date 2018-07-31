#include <iostream>
#include "Pilha.h"

using namespace std;

int main()
{
    cout << "Analizando Expresao " << endl;

    char simbolo;
    int opc,i;
    bool valido;
    string expressao;
    Pilha<char>p(50);
    do{
        cout<<"1-Nova expressao "<<endl;
        cout <<"9-Fim "<<endl;
        cout<<"Selecione :"<<endl;
        cin>>opc;
        cin.sync();
        switch(opc){
        case 1:{

                p.zeraPilha();
                cout<<"Digite a expressao"<<endl;
                getline(cin,expressao);
                cout<<"Digitado "<<expressao<<endl;
              i=0;
            valido=true;
                while(i<expressao.length()){
                    simbolo=expressao[i];
                    if(simbolo=='{'||simbolo=='['||simbolo=='('){
                            p.empilha(simbolo);
                       }
                    else{
                        if(simbolo=='}'||simbolo==']'||simbolo==')'){
                           if(p.pilhaVazia()){
                                valido=false;
                                break;
                                }
                            else{
                                    if(simbolo==']'&&p.elementoDoTopo()=='['){
                                        p.desenpilha();
                                    }
                                    else{
                                            if(simbolo=='}'&&p.elementoDoTopo()=='{'){
                                            p.desenpilha();

                                            }
                                            else{
                                                if(simbolo==')'&&p.elementoDoTopo()=='('){
                                                p.desenpilha();
                                                }
                                                else{
                                                break;
                                                }

                                                }
                                        }
                                }
                        }
                       }
                       i++;
                }
                  if(valido && p.pilhaVazia()){
                    cout<<"Expressao correta"<<endl;
                  }
                  else{
                    cout<<"Expressao errada"<<endl;
                  }
                break;
        }
        case 9:{
            cout<<"Fim..."<<endl;
        break;
        }
        default:
            {
                cout<<"Opcao errada"<<endl;
                break;
            }
        }
    }while(opc!=9);


    return 0;
}
