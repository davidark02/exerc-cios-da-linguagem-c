/*Faça	 um	 programa	em	 C	 (com	a	estrutura	 do...while)	 que	leia	 20	 valores	
inteiros	e:	
–	Encontre	e	mostre	o	maior	valor;	
–	Encontre	e	mostre	o	menor	valor;	
–	Calcule	e	mostre	a	média	dos	números	lidos;*/
#include <stdio.h>

int main() {
    int contador = 0;
    int valor;
    int maior, menor;
    long long soma = 0;

    do {
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor);

        if (contador == 0) {
            maior = menor = valor;
        } else {
            if (valor > maior) {
                maior = valor;
            }
            if (valor < menor) {
                menor = valor;
            }
        }

        soma += valor;
        contador++;
    } while (contador < 20);

    double media = (double)soma / 20;

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2lf\n", media);

    return 0;
}
