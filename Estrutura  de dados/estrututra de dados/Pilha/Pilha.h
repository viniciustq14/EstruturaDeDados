#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
template <typename Tipo>
struct Pilha {
   private:
Tipo *v;
int topo;
int tamanho;
public:
Pilha(int tam){
tamanho=tam;
v=new Tipo[tamanho];
topo=-1;
}

~Pilha(){
    delete v;
}

void empilha(Tipo x){
topo++;
v[topo]=x;
}

Tipo desenpilha(){
Tipo temp=v[topo];
topo--;
return temp;
}

Tipo elementoDoTopo(){
return v[topo];
}

bool pilhaCheia(){
return topo==tamanho-1;
}

bool pilhaVazia(){
return topo==-1;
}

int getTopo(){
return topo;
}

int getTamanho(){
return tamanho;
}

int getValor(int pos ){
return v[pos];
}
void zeraPilha(){
topo=-1;
}


};
template <typename Tipo>
void Pilha<Tipo>:: zeraPilha(){
        topo=-1;
}

#endif // PILHA_H_INCLUDED
