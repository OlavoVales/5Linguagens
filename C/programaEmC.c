#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int escolha = 0, fatorial = 0, numeroBase = 0;
    float numero1 = 0.0, numero2 = 0.0, resultado = 0.0;

    printf("Bem vindo ao programa das operacoes matematicas, digite [1] para realizar a soma de dois numeros, [2] para realizar a subtracao de dois numeros,\n");
    printf("[3] para realizar a multiplicacao de 2 numeros, [4] para realizar a divisao de 2 numeros e [5] para saber o fatorial de um numero: ");
    scanf("%d", &escolha);

    if (escolha > 5 || escolha < 1){

        printf("Favor digite um numero dentre os validos (1-5).");

    }else{

        switch (escolha){

        case 1:
            printf("digite o primeiro numero desejado: ");
            scanf("%f", &numero1);
            printf("digite o segundo numero desejado: ");
            scanf("%f", &numero2);

            resultado = numero1 + numero2;

            printf("o resultado da soma de %f e %f eh aproximadamente: %.2f.", numero1, numero2, resultado);
            break;
        case 2:
            printf("digite o primeiro numero desejado: ");
            scanf("%f", &numero1);
            printf("digite o segundo numero desejado: ");
            scanf("%f", &numero2);

            resultado = numero1 - numero2;

            printf("o resultado da subtracao de %f e %f eh aproximadamente : %.2f.", numero1, numero2, resultado);
            break;
        case 3:
            printf("digite o primeiro numero desejado: ");
            scanf("%f", &numero1);
            printf("digite o segundo numero desejado: ");
            scanf("%f", &numero2);

            resultado = numero1 * numero2;

            printf("o resultado da multiplicacao de %f e %f eh aproximadamente: %.2f", numero1, numero2, resultado);
            break;
        case 4:
            printf("digite o primeiro numero desejado: ");
            scanf("%f", &numero1);
            printf("digite o segundo numero desejado: ");
            scanf("%f", &numero2);

            if (numero2 == 0){
                printf("Nao eh possível realizar a divisao por zero.");
            }else{
                resultado = numero1 / numero2;
                printf("o resultado da divisao de %f por %f eh aproxidamente: %.2f", numero1, numero2, resultado);
            }
            break;
        case 5:

            printf("digite o numero desejado: ");
            scanf("%f", &numero1);

            numeroBase = numero1;

            for (fatorial = 1; numero1 > 1; numero1 = numero1 - 1){
                fatorial = fatorial * numero1;
            }

            printf("o resultado do fatorial do numero %d eh: %d", numeroBase, fatorial);
            break;
        default:
            printf("a operacao escolhida nao eh válida. ");
        }
    }

    return 0;
}