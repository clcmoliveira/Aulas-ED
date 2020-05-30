package view;

import modelo.Aluno;

import static java.lang.Boolean.parseBoolean;
import static java.lang.Double.parseDouble;
import static java.lang.Integer.parseInt;
import static javax.swing.JOptionPane.showInputDialog;
import static javax.swing.JOptionPane.showMessageDialog;

public class TesteAluno {
    public static void main(String[] args) {
        Aluno aluno;

        String nomeAluno = showInputDialog("Informe o nome do aluno: ");
        int idadeAluno = parseInt(showInputDialog("Informe a idade do aluno: "));
        double pesoAluno = parseDouble(showInputDialog("Informe o peso do aluno: "));
        char sexoAluno = showInputDialog("Informe o sexo do aluno: ").charAt(0);
        boolean formadoAluno = parseBoolean(String.valueOf(showInputDialog("Informe se o aluno é formado \n" +
                "T para formado ou F para não formado)").charAt(0)));
        
        aluno = new Aluno(nomeAluno, idadeAluno, pesoAluno, sexoAluno, formadoAluno);

        showMessageDialog(null,
                "aluno.Aluno:" + nomeAluno + "\n" +
                        "Idade:" + idadeAluno + "\n" +
                        "Peso:" + pesoAluno + "\n" +
                        "Sexo:" + sexoAluno + "\n" +
                        "Formado?:" + formadoAluno
        );

        String nomeAlunoM = showInputDialog("O nome do aluno é: " + nomeAluno);
        int idadeAlunoM = parseInt(showInputDialog("A idade do aluno é: " + idadeAluno));
        double pesoAlunoM = parseDouble(showInputDialog("O peso do aluno é: " + pesoAluno));
        char sexoAlunoM = showInputDialog("O sexo do aluno é: "  + sexoAluno).charAt(0);
        boolean formadoAlunoM = parseBoolean(String.valueOf(showInputDialog("O aluno é formado?" + formadoAluno).charAt(0)));


        aluno = new Aluno (nomeAlunoM, idadeAlunoM, pesoAlunoM, sexoAlunoM, formadoAlunoM);

        showMessageDialog(null,
                "aluno.Aluno:" + nomeAlunoM + "\n" +
                        "Idade:" + idadeAlunoM + "\n" +
                        "Peso:" + pesoAlunoM + "\n" +
                        "Sexo:" + sexoAlunoM + "\n" +
                        "Formado?:" + formadoAlunoM
        );
    }
}
