//c�digo para o n�mero de visitantes

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int visitantes; //declara��o de vari�vel

    printf("Qual foi o n�mero de visitantes de hoje? ");
    scanf("%d", &visitantes);

    printf("O n�emro de visitantes foi de %d", visitantes);

    return 0;//n�o esquecer de identar
}
