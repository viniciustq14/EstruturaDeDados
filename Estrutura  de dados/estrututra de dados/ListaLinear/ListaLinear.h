#ifndef LISTALINEAR_H_INCLUDED
#define LISTALINEAR_H_INCLUDED
#include "math.h"
template <typename Tipo>

struct Lista{
    private:
        Tipo *v;
        Tipo temp;
        int qtde;
        int tamanho;
      int indice;

    public:
        Lista(int tam){
            tamanho = tam*5;
            qtde = 0;
            indice = -1;
            v = new Tipo[tamanho];


        }
        ~Lista(){
            delete v;
        }
        bool listaVazia(){
            bool t;
            if(qtde==0){
                t=1;
            }
            else{
                t=0;
            }
            return t;
        }
        bool listaCheia(){
            bool t;
            if(qtde>=9){
                t=1;
            }
            else{
                t=0;
            }
            return t;
        }
        void insere(Tipo x,Tipo y,Tipo z){
            float a;


                    v[5*qtde+0]=x;
                    v[5*qtde+1]=y;
                    v[5*qtde+2]=z;
                    v[5*qtde+3]=x+y+z;
                    a=(x+z+y)/2;
                    v[5*qtde+4]=sqrt(a*(a-v[5*qtde+0])*(a-v[5*qtde+1])*(a-v[5*qtde+2]));
                    qtde++;





        }
        void remover(int x){
            v[5*x+0]=0;
            v[5*x+1]=0;
            v[5*x+2]=0;
            v[5*x+3]=0;
            v[5*x+4]=0;
            qtde--;
        }
        Tipo visualizar(int a, int b){
            return v[5*a+b];
        }
        int tipoTriagulo(Tipo a,Tipo b,Tipo c){
        int d;

        if(a==b&&a==c){
        d=3;
        }
        else{
            if(a==b||a==c||b==c){
        d=2;
        }
            else{
        d=1;
        }
        }
            return d;
        }


       int valida(Tipo x, Tipo y,Tipo z){
       int s;
       if(x+y>z&&x+z>y&&z+y>x){
        s=1;
       }
       else{
        s=0;
       }
       return s;
       }

};
#endif // LISTALINEAR_H_INCLUDED
