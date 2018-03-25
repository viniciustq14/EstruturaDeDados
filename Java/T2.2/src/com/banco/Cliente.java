package com.banco;

public class Cliente {
	private String nome;
	private double saldo,limite;
	
	public Cliente(String nome, double saldo, double limite) {
		this.nome = nome;
		this.saldo = saldo;
		this.limite = limite;
	}
	
	public void sacar(double val) {
		
		if(val <= checarSaldo()) {
			this.saldo -= val;
			System.out.println("O saldo atual do " + nome + " é: R$" + checarSaldo());
		}
		else {
			System.out.println("Saldo insuficiente para o saque");
		}
		
	}
	
	public void depositar(double val) {
		this.saldo += val;
		System.out.println("O saldo atual do " + nome + " é: R$" + checarSaldo());
	}
	
	public void transf(Cliente c1, Cliente c2, double val) {
		Doc doc = new Doc();
		doc.transferir(c1, c2, val);
	}
	
	public double checarSaldo() {
		return saldo+limite;
	}


	public String getNome() {
		return nome;
	}

	public double getSaldo() {
		return saldo;
	}

	public double getLimite() {
		return limite;
	}
	
}
