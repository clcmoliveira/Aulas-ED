import javax.swing.JOptionPane;

public class TesteLivroDeNotas{
    public static void main(String[] args) {
        LivroDeNotas livroDeNotas = new LivroDeNotas();
        System.out.println(livroDeNotas.nomeDoCurso);
        String nomeDoCurso = showMessageDialog(null, "oi");
    }
}