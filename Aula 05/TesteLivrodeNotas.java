import javax.swing.JOptionPane;

public class TesteLivroDeNotas{
    public static void main(String[] args) {
        LivroDeNotas livroDeNotas = new LivroDeNotas();
        String nomeDoCurso = showInputDialog("Digite o nome do Curso");
        livroDeNotas.setNomeDoCurso(nomeDoCurso);
        System.out.println(livroDeNotas.getNomeDoCurso());
    }
}