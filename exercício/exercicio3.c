/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A formula de conversao e: ´ F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius.
*/

#include <stdio.h>

int main(void){
    
    float c;
    float f;
    printf("Digite uma temperatura em grau Celsius:/n ");
    scanf("%f",&c);

 f = c *(9.0/5.0 )+32.0;
 printf("f = %f",f);

 return 0;

}