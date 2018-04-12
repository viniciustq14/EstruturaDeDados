/**Exercício 1.2. Sabe-se que VIP, Premium e Regular são tipos de Cliente.
Em cada cliente, há a necessidade de controle de conta corrente.
Em uma conta, há dados como nome, e saldo. Para cada tipo de conta
uma tarifa deve ser calculada: 1% do saldo para Regular, 2% para Premium
e 4% para VIP. Use Herança. Aqui, fica proíbido usar conceitos
que não foram vistos em aula. 
-Esboce um diagrama de classes.
-Implemente as classes e seus métodos.
-Crie um pequeno menu para cadastrar clientes e vericar o valor
das tarifas.*/



class Cliente {
    private _nome: string
    private _saldo: number
    
    public constructor(nome: string, saldo: number){
        this._nome = nome
        this._saldo = saldo
    }

    get nome(): string{
        return this._nome
    }
    
    get saldo(): number{
        return this._saldo
    }
}

class clienteVip extends Cliente {
    private _tarifa: number
    public constructor(nome: string, saldo: number){
        super(nome, saldo)
        this._tarifa = 0.04
    }

    get tarifa(): number{
        return this._tarifa
    }

    calcularTarifa(): number{
        return this.tarifa * this.saldo
    }

}
class clienteRegular extends Cliente {
    private _tarifa: number
    public constructor(nome: string, saldo: number){
        super(nome, saldo)
        this._tarifa = 0.01
    }

    get tarifa(): number{
        return this._tarifa
    }

    calcularTarifa(): number{
        return this.tarifa * this.saldo
    }

}

class clientePremium extends Cliente {
    private _tarifa: number
    public constructor(nome: string, saldo: number){
        super(nome, saldo)
        this._tarifa = 0.02
    }

    get tarifa(): number{
        return this._tarifa
    }

    calcularTarifa(): number{
        return this.tarifa * this.saldo
    }

}

let list: any[] = []
let op = 10
while(op != 9){
    console.log("1 - Verificar tarifas e cadastrar cliente vip.")
    console.log("2 - Verificar tarifas e cadastrar cliente regular.")
    console.log("3 - Verificar tarifas e cadastrar cliente premium.")
    console.log("4 - Verificar tarifas gerais.")

    console.log("9 - Sair.")
            console.log(op)
    switch(op){
        case 1:
            
            break
        case 2:
            break
        case 3:
            break
        case 4:
            break

        default:
            console.log("OP Errada!")
    }

}

console.log(list)


