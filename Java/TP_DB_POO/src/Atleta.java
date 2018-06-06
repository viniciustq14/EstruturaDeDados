
public class Atleta {
	private int id;
	private String nome;
	private Categoria categoria;
	private int idade;
	
	public Atleta(int id,String nome, Categoria categoria, int idade) {
		this.id=id;
		this.nome = nome;
		this.categoria = categoria;
		this.idade = idade;
	}
	
	public int getId() {
		return id;
	}
	
	public String getNome() {
		return nome;
	}
	
	public Categoria getCategoria() {
		return categoria;
	}
	
	public int getIdade() {
		return idade;
	}
	
}
