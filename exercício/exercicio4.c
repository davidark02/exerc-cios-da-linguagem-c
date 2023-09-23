/*	Faça	um	programa	em	C	que	mostre	a	 tabuada	do	número	5.	 (considerar	
tabuada	do		número	1	ao	10 */

#include <stdio.h>

int main() {
    int numero = 5;
    
    printf("Tabuada do %d:\n", numero);
    
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    
    return 0;
}

