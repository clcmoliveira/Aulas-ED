//programa que le a opcao de operacao, executa a operacao desejada e le o resultado

import static java.lang.Integer.parseInt;
import static javax.swing.JOptionPane.showInputDialog;
import static javax.swing.JOptionPane.showMessageDialog;

public class Calculadora {

    static char menu() {
//        o método está associado a classe, pq ele é estático
        String auxiliar;
        auxiliar = showInputDialog("Digite sua opcao:" +
                "\n+ = soma" +
                "\n- = subtracao" +
                "\n* = multiplicacao" +
                "\n/ = divisao" +
                "\ns = sair");
        return auxiliar.charAt(0);
    }

    public static void main(String[] args) {
        char opcao = menu();
        int res;
        while (opcao != 's' && opcao != 'S') {
            String auxiliar = showInputDialog("Digite o primeiro valor: ");
            int num1 = parseInt(auxiliar);
            auxiliar = showInputDialog("Digite o segundo valor: ");
            int num2 = parseInt(auxiliar);
            switch (opcao) {
                case '+':
                    res = soma(num1, num2);
                    showMessageDialog(null, res);
                    break;
                case '-':
                    res = sub(num1, num2);
                    showMessageDialog(null, res);
                    break;
                case '*':
                    res = mult(num1, num2);
                    showMessageDialog(null, res);
                    break;
                case '/':
                    res = div(num1, num2);
                    showMessageDialog(null, res);
                    break;
                default:
                    showMessageDialog(null, "Opcao invalida");
                    break;
            }

        }
    }

    private static int div(int num1, int num2) {
        return num1 / num2;
    }

    private static int mult(int num1, int num2) {
        return num1 * num2;
    }

    private static int sub(int num1, int num2) {
        return num1 - num2;
    }

    private static int soma(int num1, int num2) {
        return num1 + num2;
    }
}
