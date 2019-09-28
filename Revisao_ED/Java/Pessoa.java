class Pessoa{
	private String nome;
	private int idade;
	private double peso;
	private char sexo;

	public Pessoa(){} //Sobrecarga vazia

	//Criação e Atualização (possui ambiguidade)
	public Pessoa(String nome, int idade, double peso, char sexo){
		this.nome = nome;
		this.idade = idade;
		this.peso = peso;
		this.sexo = sexo;
	}

	public Pessoa(String nome){
		this.nome = nome;
	}

	//quando vc usa um constructor ou uma função de tipo void, o return não existe
	public void setNome(String nome){
		this.nome = nome;
	}

	public void setIdade(int idade){
		this.idade = idade;
	}

	public void setPeso(double peso){
		this.peso = peso;
	}
	
	public void setSexo(char sexo){
		this.sexo = sexo;
	}

	//Pegar a informação encontrada para exibir por meio da toString()
	public String getNome(){
		return this.nome;
	}

	public int getIdade(){
		return this.idade;
	}

	public double getPeso(){
		return this.peso;
	}
	
	public char getSexo(){
		return this.sexo;
	}

	@Override
	public String toString(){
		return(this.nome + ", " + this.idade + "\n" +
			String.format("%.2f",this.peso) + ", " +
			(this.sexo == "m" || this.sexo == "M") ? "Masculino" : (this.sexo == "f" || this.sexo == "F") ? "Feminino" : "Outros");
	}
}