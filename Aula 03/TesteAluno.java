public class TesteAluno {
  //Classe de Aplicacao
  
  public static void main(String[] args) {
    //Declarar a variavel Aluno
    Aluno aluno1;
    Aluno aluno2;
    
    //Instanciar a variavel
    aluno1 = new Aluno();
    aluno2 = new Aluno();
    
    //setAnoNasc - Chamar método de encapsulamento
    aluno1.setAnoNasc(2000);
    aluno2.setAnoNasc(1999);
    
    
    System.out.println("Ano de nascimento: " + aluno1.getAnoNasc());
    System.out.println("Ano de nascimento: " + aluno2.getAnoNasc());
  }
}
