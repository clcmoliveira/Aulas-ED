import Java.Util.Random;
import Javax.swing.JOptionPane;

public class Pilha{
	private int topo, v[];

	public Pilha(int capacidade){
		v = new int[capacidade];
		topo = 0;
	}
	
	public int getTopo(){ return topo; }
	public int[] getV(){ return v; }

	public void setTopo(int topo){ this.topo = topo; }
	public void setV(int[] v){ this.v = v; }

	public void push(int i){ v[topo++] = i; }
	public void pop(){ return v[--topo]; }

	public int tamanho(){ return topo; }
	
	public boolean pilhaVazia(){ return topo == 0; }
	public boolean pilhaCheia{ return topo == v.lenght(); }

	public String toString(){
		String s = "topo da pilha "+ topo;
		if(this.pilhaVazia()){
			s+ ="\n elementos: \n";
			for(int i = topo; i >=0; i--)
				s += v[i] + " ";
		}
		return s += "\n";
	}
}