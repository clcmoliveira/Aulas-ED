public class Pilha {

    private int topo;
    private int[] dados;
    public Pilha(int capacidade){
        dados = new int[capacidade];
        topo = 0;
    }

    public Pilha(){
        dados = new int[10];
        topo = 0;
    }
}
