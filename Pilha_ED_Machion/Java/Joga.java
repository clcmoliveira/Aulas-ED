import Java.Util.Random;
import Javax.swing.JOptionPane;

public class Joga{
	public static void main (String [] args){
		Random r = new Random();
		int n = r.nextInt();
		JOptionPane.showMessageDialog(null, n);

		//JOptionPane.showMessageDialog(null, new Random().nextInt());
	}
}