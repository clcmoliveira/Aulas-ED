//criando laço para esvaziar a pilha
import Java.Util.Random;
import Javax.swing.JOptionPane;

public class TestePilha {
	public static void main (String [] args) {
		Pilha p = new Pilha(10);
		Random r = new Random();
		do {
			//int i = r.nextInt(2);
			//if(i == 0) { //empilhar
			if(r.nextInt(2) == 0){ //empilhar
				if(!p.pilhaCheia()){
					p.push(r.nextInt(10));
					//int n = r.nextInt(10);
					//p.push(n);
				}
			}
			else { //desempilhar
				if(!p.pilhaVazia())
					int n = p.pop();
			}
			JOptionPane.showMessageDialog(null,p);
		} while (!p.pilhaVazia());
	}
}