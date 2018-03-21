class Cliente{
    private nome: string
    private saldo: number
    private limite: number
    
    constructor (nome: string, saldo: number, limite: number) {
        this.nome = nome
        this.saldo = saldo
        this.limite = limite
    }

    public sacar(val: number) {
		
		if(val <= this.checarSaldo()) {
			this.saldo -= val
			console.log("O saldo atual do " + this.nome + " é: R$" + this.checarSaldo())
		}
		else {
			console.log("Saldo insuficiente para o saque")
		}
		
	}
	
	public depositar(val: number) {
		this.saldo += val
		console.log("O saldo do " + this.nome + " atual é: R$" + this.checarSaldo())
	}
	
	public transf(c1: Cliente, c2: Cliente, val: number) {
        var doc = new Doc()
        doc.transferir(c1, c2, val)
	}
	
	public checarSaldo(): number {
		return this.saldo + this.limite
	}


	public getNome(): string {
		return this.nome
	}

	public getSaldo(): number {
		return this.saldo
	}

	public getLimite(): number {
		return this.limite
	}
    
}

class Doc {
    public transferir(c1: Cliente, c2: Cliente, quantia: number) {
		if(quantia <= c1.checarSaldo()) 
			c2.depositar(quantia)
		else
			console.log("Saldo insuficiente para transferência")
	}
}

var c1 = new Cliente("Mark", 1500, 1000)
console.log("O nome do titular da conta é: " + c1.getNome())
console.log("Seu saldo em conta é: R$" + c1.getSaldo())
console.log("Seu limite é: R$" + c1.getLimite())
console.log("Seu saldo + limite é: R$" + c1.checarSaldo())
c1.sacar(5000)
c1.sacar(1000)
c1.depositar(550)
var c2 = new Cliente("Bill", 3000, 2000)
console.log("O nome do titular da conta é: " + c2.getNome())
console.log("Seu saldo em conta é: R$" + c2.getSaldo())
console.log("Seu limite é: R$" + c2.getLimite())
console.log("Seu saldo + limite é: R$" + c2.checarSaldo())
c2.sacar(3000)
c2.sacar(3000)
c2.depositar(225)
c1.transf(c1, c2, 5000)
c1.transf(c1, c2, 1000)
c2.transf(c2, c1, 6000)
c2.transf(c2, c1, 2000)