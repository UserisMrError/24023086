#include <stdio.h>

int main() {
    //ao setar a linguagem o c�digo buga, n�o mexe
    float r, d, s;

    // Faz o usu�rio dar os valores de input
    printf("Digite o valor da receita: ");
    scanf("%f", &r);

    printf("Digite o valor da despesa: ");
    scanf("%f", &d);

    // O c�lculo do saldo atualizado
    s = r - d;

    // Exibe o saldo atualizado
    printf("Saldo atualizado: R$ %.3f\n", s);//deicar as devidas casas decimais

    return 0;
}
