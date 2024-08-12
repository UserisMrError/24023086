//código para o número de visitantes

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int visitantes; //declaração de variável

    printf("Qual foi o número de visitantes de hoje? ");
    scanf("%d", &visitantes);

    printf("O núemro de visitantes foi de %d", visitantes);

    return 0;//não esquecer de identar
}
