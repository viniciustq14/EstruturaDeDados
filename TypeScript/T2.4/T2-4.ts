class Livro{
    private nome:string;
    private valor:number;
    private disponibilidade:boolean;
    catLivro:Categoria;
    
    
    constructor(nome:string,cat:Categoria,dispo:boolean){
        this.nome=nome;
        this.catLivro=cat;
        this.disponibilidade=dispo;
        this.setValor();
    

    }

    private setValor():void{
        switch(this.catLivro){
            case Categoria.EPUB:{
                this.valor=20;
            break;
            }

            case Categoria.PDF:{
                this.valor=40;
            break;
            }

            case Categoria.FISICO:{
                this.valor=80;
            break;
            }
            default:{
                console.log("Invalido");
            break;    
            }
        }
    
    }


    public getValor():number{
        return this.valor;
    }
    public getCatLivro ():string{
        
        switch(this.catLivro){
            case Categoria.EPUB:{
                return "EPUB";
           // break;
            }

            case Categoria.PDF:{
                return "PDF";
           // break;
            }

            case Categoria.FISICO:{
                return "FISICO"
           // break;
            }
            default:{
                console.log("Invalido");
            break;    
            }
        }


    }
   public getNome():string{
         return this.nome;
    }
   public getDispo():string{
        if(this.disponibilidade){
            return "Disponivel";
        }
        else{
              return "Ocupado";
        }
    }
}
enum Categoria{EPUB,PDF,FISICO};

class Tela{
private a:Livro;

    public mostrarLivro(a:Livro):void{
        this.a=a;
        console.log("\nINFORMAÇÕES LIVRO :")
        console.log("NOME : "+this.a.getNome());
        console.log("TIPO : "+this.a.getCatLivro());
        console.log("PREÇO : "+this.a.getValor());
        console.log("Disponibilidade : "+this.a.getDispo());
    }

}

//var c:Categoria=Categoria.FISICO;
var l=new Livro("m",Categoria.PDF,false);
var t=new Tela();
var g=new Livro("Java e seu recursos",Categoria.EPUB,true);
t.mostrarLivro(l);
t.mostrarLivro(g);

