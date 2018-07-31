#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
template <typename Tipo>
struct Fila{
private:
Tipo *v;
int inic;
int fim ;
int qtde;
int tamanho;
public:
Fila(int tam){
tamanho=tam;
v=new Tipo[tamanho];
fim=-1;
inic=0;
qtde=0;

}
~Fila(){
delete v;
}
void inserir(Tipo x){
fim++;
if(fim==tamanho){
    fim=0;
}
v[fim]=x;
qtde++;
}
Tipo remover(){
Tipo temp=v[inic];
inic++;
if(inic==tamanho){
    inic=0;
}
qtde--;
return temp;
}
Tipo primeiro(){
return v[inic];
}
bool FilaCheia(){
return qtde==tamanho;
}
bool FilaVazia(){
return qtde==0;
}
int getTamanho(){
return tamanho;
}
int getInic(){
return inic;
}
int getQtde(){
return qtde;
}
Tipo getValor(int pos){
    Tipo valor;

    if(inic>fim){
        if(pos>inic&&pos<tamanho-1||pos<fim){
            valor=v[pos];
        }
        else{

        }

    }
    else{
        valor=v[pos];
    }


return valor;
}
};


#endif // FILA_H_INCLUDED
