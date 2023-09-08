/* Escreva	 um	 programa	 que	 verifique	 a	 validade	 de	 uma	 senha	 fornecida	
pelo	 usuário.	 A	 senha	 válida	 é	 o	 número	 1234.	Devem	 ser	impressas	 as	
seguintes	mensagens:	
ACESSO	PERMITIDO	caso	a	senha	seja	válida.	
ACESSO	NEGADO	caso	a	senha	seja	inválida */
#include <stdio.h>

int main(){

    int senha;

    printf("digite sua senha para entra no sistema\n ");
    scanf("%i",&senha);
    
    if( senha == 1234){
        printf("ACESSO	PERMITIDO\n");
    } else{
        printf(" ACESSO	NEGADO\n");

    }
    return 0; 
}