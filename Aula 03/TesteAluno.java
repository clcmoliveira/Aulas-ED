public class TesteAluno {
  //Classe de Aplicacao
  
  public static void main(String[] args) {
    //Declarar a variavel Aluno
    Aluno aluno1;
    
    //Instanciar a variavel
    aluno1 = new Aluno();
    
    //setAnoNasc - Chamar método de encapsulamento
    aluno1.setAnoNasc(2000);
    aluno1.setNome("Ana");
    aluno1.setSexo('F');
    aluno1.setFormando(true);
    
    
    //Impressão dos valores na tela
    System.out.println("Ano de nascimento: " + aluno1.getAnoNasc());
    System.out.println("Nome: " + aluno1.getNome());
    System.out.println("Sexo: " + aluno1.getSexo());
    System.out.println("Formando: " + aluno1.getFormando());
  }
}
