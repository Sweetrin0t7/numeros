#include <stdio.h>

int main() {
    char unidade[][10] = {"um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
    char dezena[][10] = {"vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta"};
    int num, x, y, i;

    printf("Digite um numero menor que 86: ");
    scanf("%d", &num);

    if (num <= 9) {
        printf("%s", unidade[num-1]);
        return 0;
    }

    x = num / 10; // dezena
    y = num % 10; // unidade

    if (num > 85) {
        printf("OPCAO INVALIDA. REPETINDO OPCOES");
    } else {
        for (i = 0; i < 7; i++) {
            if (x == i + 2) {
                printf("%s", dezena[i]);
                if (y > 0) {
                    printf(" e ");
                }
            }
        }
        if (y > 0 && x != 1) {
            printf("%s", unidade[y-1]);
        } else if (y > 0 && x == 1) {
            printf("%s", unidade[(x*10)+y-1]);
        }
    }

    return 0;
}

