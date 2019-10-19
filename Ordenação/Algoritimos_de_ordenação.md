# Algoritimos de ordenação elementares
- São 3 os AOE baseados em comparação (bubble, insertion e selection sort)
- São chamados de elementares porque usam técnicas básicas: comparaçõ e laço!
- Funcionamento:

-----

3 4 5 1 2
	1 5
	  2|5
___________

 1 4
   2|4
___________

1 3
  2|3
___________
1 2 3 4 5


Logo, a ideia do bubble sort é:

<pre><code>
	for (i = 1; i < n; i++){
		for(j = 0; j < n-i; j++){
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}
	}
</code></pre>
-----

Custo:
No exemplo: 
- 4 comparações na primeira linha
- 3 comparações na segunda linha
- 2 comparações na terceira linha
- 1 comparação na quarta linha

Total de comparações: 10

Considerando tamanho n:
- 1ª vez: n-1
- 2ª vez: n-2
...
- (n-2)vez: 2
- (n-1)vez: 1

soma: 1 + 2 + 3 + ... + (n-3) + (n-2) + (n-1)

S = (1+100) 100/2 = 5050

<pre><code>S = (1 + n-1)(n-1)/2 = n(n-1)/2 </code></pre>

-----
n = 5		n² = 25		f(x) = x
n = 10		n² = 100	f'(x) = 1
n = 10(6)	n = 10(12)	f(x) = x²	f'(x) = 2x

-----

## Recursão

A recursão acontece quando uma subrotina realiza uma ou mais chamadas para ela mesma.
As repetições podem ser causadas por laço ou recursão.

### Fibonacci
f(n) = 	{	1, n = 0, n=1
			n * f(n-1), n > 1
		}
Passos:
1. definir o caso base;
2. escrever a recursaão, diminuindo o tamanho da entrada.