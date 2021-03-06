/**
 * Exercício 1.3. Implemente uma classe chamada Complexo para representar números imaginários e esta 
 * deve possuir: Atributos: dois doubles a(Parte real) e b(Parte imaginária).
 *  Métodos:
 *  (1) Construtor;
 *  (2) soma(): recebeviaparâmetrooutronúmerocomplexo(objetodesta classe) e efetua sua soma, ou seja, 
 * parte real será somada com parte real, e parte imaginária com parte imaginária. 
 * (3) multiplica(): recebe via parâmetro outro complexo(objeto desta classe) e efetue
 *  a formula (a+bi)*(c+di) = (ac-bd)+(ad+bc)i
 *  (4) toString(): Mostra uma string na tela com os atributos a e b na notação Complexa a+bi; 
    (5) modulo(): retorna o modulo do número complexo que é dado po |a+bi|=√a2 + b2
     (6) argumentoPrincipal(): retorna o ângulo formado pelo número complexo no plano de argand-gauss 
     que é dado pela fórmula θ = tan−1(b a)
 */
public class teste {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Complexo c = new Complexo();
		
		c.a = 1;
		c.b = 2;
		
		c.soma(5, 2);
		c.multiplica(1, 1);
		c.mostrar();
		System.out.println("O módulo é: " + c.modulo());
		System.out.println("O argumento é: " + c.argumentoPrincipal());
		
		
	}

}
