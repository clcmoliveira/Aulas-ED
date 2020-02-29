public class Aluno {
  //Classe de Negócio
  
  //Atributos
  private int anoNasc;
  private String nome;
  private char sexo;
  private boolean formando;
  
  //Métodos
  public int getAnoNasc() { return anoNasc; }
 
  public void setAnoNasc(int anoNasc) { this.anoNasc = anoNasc; }
  
  public String getNome() { return nome; }
 
  public void setNome(String nome) { this.nome = nome; }
  
  public int getSexo() { return sexo; }
 
  public void setSexo(char sexo) { this.sexo = sexo; }
  
  public int getFormando() { return formando; }
 
  public void setFormando(boolean formando) { this.formando = formando; }
  
}
