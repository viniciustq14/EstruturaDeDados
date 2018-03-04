
public class Complexo {
	
	double a, b;
	
	void Construtor(double a, double b) {
		this.a = a;
		this.b = b;
	}
	
	void soma(double c, double d) {
		
		System.out.println("A soma de " + c + "+" + d + "i com " + this.a + "+" + this.b + "i é: " + (this.a + c) + "+ "+ (this.b + d) + "i");
		
	}
	
	void multiplica(double c, double d) {
		
		System.out.println("A multiplicacao de " + c + "+" + d + "i com " + this.a + "+" + this.b + "i é: " + ((this.a * c) - (this.b * d)) + "+" + ((this.a * d) + (this.b * c)) + "i");
		
	}
	
	void mostrar() {
		
		System.out.println(this.a + "+" + this.b + "i");
		
	}
	
	double modulo() {
			
		return Math.sqrt(Math.pow(this.a, 2) + Math.pow(this.b, 2));
				
	}
	
	double argumentoPrincipal() {
		
	/*	double tangente, cosseno, seno;
		cosseno = this.a / this.modulo();
		seno = this.b / this.modulo();
		tangente = seno / cosseno; */
		
		return Math.pow(((this.b/this.modulo())/(this.a/this.modulo())), -1) * (this.a / this.b);
		
	}
	

	
}


