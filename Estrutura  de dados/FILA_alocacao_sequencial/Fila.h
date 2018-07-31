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
void inserirD(Tipo x){
fim++;
if(fim==tamanho){
    fim=0;
}
v[fim]=x;
qtde++;
}
Tipo removerD(){
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
int getFim(){
return fim;
}
int getQtde(){
return qtde;
}
Tipo getValor(int pos){

return v[pos];
}

void inserirE(Tipo x){
inic--;
if(inic==-1){
    inic=tamanho-1;
}
v[inic]=x;
qtde++;
}
Tipo removerE(){


if(fim==-1){
    fim=tamanho-1;
}
 Tipo temp=v[fim]; 
fim--;
qtde--;
return temp;
}
Tipo ultimo(){
return v[fim];
}


};


#endif // FILA_H_INCLUDED
