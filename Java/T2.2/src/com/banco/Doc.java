package com.banco;

public class Doc {

	public void transferir(Cliente c1, Cliente c2, double quantia) {
		if(quantia <= c1.checarSaldo()) 
			c2.depositar(quantia);
		else
			System.out.println("Saldo insuficiente para transferência");
	}
}
