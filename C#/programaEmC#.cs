using System;

class Program {
  public static void Main (string[] args) {
    
        int contador, fatorial, numeroArmazenado, numeroFatorial;
        float numero1, numero2, resultado;

        Console.Write("Bem vindo ao programa das operacoes matematicas, digite [1] para realizar a soma de dois numeros, [2] para realizar a subtracao de dois numeros\n");
        Console.Write("[3] para realizar a multiplicacao de 2 numeros, [4] para realizar a divisao de 2 numeros e [5] para saber o fatorial de um numero: ");
        contador = int.Parse(Console.ReadLine());

        if (contador > 5 || contador < 1) {

            Console.Write("Favor digite uma dos numeros validos (1-5)");

        }else{

            switch (contador){

                case 1:
                    Console.Write("Digite o valor do primeiro numero: ");
                    numero1 = float.Parse(Console.ReadLine());
                    Console.Write("Digite o valor do segundo numero: ");
                    numero2 = float.Parse(Console.ReadLine());
                    resultado = numero1 + numero2;
                    Console.Write("a soma de " + numero1 + " com " + numero2 + " tem como resultado o numero: " + resultado);
                break;

                case 2:
                    Console.Write("Digite o valor do primeiro numero: ");
                    numero1 = float.Parse(Console.ReadLine());
                    Console.Write("Digite o valor do segundo numero: ");
                    numero2 = float.Parse(Console.ReadLine());
                    resultado = numero1 - numero2;
                    Console.Write("a subtracao de " + numero1 + " por " + numero2 + " tem como resultado o numero: " + resultado);
                break;

                case 3:
                    Console.Write("Digite o valor do primeiro numero: ");
                    numero1 = float.Parse(Console.ReadLine());
                    Console.Write("Digite o valor do segundo numero: ");
                    numero2 = float.Parse(Console.ReadLine());
                    resultado = numero1 * numero2;
                    Console.Write("a multiplicacao de " + numero1 + " por " + numero2 + " tem como resultado o numero: " + resultado);
                break;

                case 4:
                    Console.Write("Digite o valor do primeiro numero: ");
                    numero1 = float.Parse(Console.ReadLine());
                    Console.Write("Digite o valor do segundo numero: ");
                    numero2 = float.Parse(Console.ReadLine());

                    if (numero2 == 0) {
                    Console.Write("Nao eh possivel realizar divisao por 0, eh uma indeterminacao");
                    } else {

                    resultado = numero1 / numero2;

                    Console.Write("a divisao de " + numero1 + " por " + numero2 + " tem como resultado o numero: " + resultado);
                    }
                break;

                case 5:

                    Console.Write("Digite o valor do numero desejado: ");
                    numeroFatorial = int.Parse(Console.ReadLine());

                    numeroArmazenado = numeroFatorial;

                    for (fatorial = 1; numeroFatorial > 1; numeroFatorial--) {
                    fatorial = fatorial * numeroFatorial;
                    }

                    Console.Write("o fatorial de " + numeroArmazenado + " tem como resultado o numero: " + fatorial);
                break;

                default:
                    Console.Write("A operacao escolhida eh invalida. ");
                break;
            }
        }
    }
}