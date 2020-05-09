//programa que le a opcao de operacao, executa a operacao desejada e le o resultado

import static javax.swing.JOptionPane.showInputDialog;

public class Calculadora {

    static char menu(){
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
        while (opcao != 's'&& opcao != 'S'){
            switch (opcao){
                
            }
        }
    }
}
