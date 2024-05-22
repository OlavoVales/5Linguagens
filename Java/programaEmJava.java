import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        int contador, fatorial, numeroArmazenado, numeroFatorial;
        float numero1, numero2, resultado;
        Scanner entrada = new Scanner(System.in);

        System.out.print("Bem vindo ao programa das operacoes matematicas, digite [1] para realizar a soma de dois numeros, [2] para realizar a subtracao de dois numeros\n");
        System.out.print("[3] para realizar a multiplicacao de 2 numeros, [4] para realizar a divisao de 2 numeros e [5] para saber o fatorial de um numero: ");
        contador = entrada.nextInt();

        if (contador > 5 || contador < 1) {

            System.out.print("Favor digite uma dos numeros validos (1-5)");

        }else{

            switch(contador){

                case 1:
                    System.out.print("Digite o valor do primeiro numero: ");
                    numero1 = entrada.nextFloat();
                    System.out.print("Digite o valor do segundo numero: ");
                    numero2 = entrada.nextFloat();
                    resultado = numero1 + numero2;
                    System.out.print("a soma de " + numero1 + " com " + numero2 + " tem como resultado o numero: " + resultado);
                break;

                case 2:
                    System.out.print("Digite o valor do primeiro numero: ");
                    numero1 = entrada.nextFloat();
                    System.out.print("Digite o valor do segundo numero: ");
                    numero2 = entrada.nextFloat();
                    resultado = numero1 - numero2;
                    System.out.print("a subtracao de " + numero1 + " por " + numero2 + " tem como resultado o numero: " + resultado);
                break;

                case 3:
                    System.out.print("Digite o valor do primeiro numero: ");
                    numero1 = entrada.nextFloat();
                    System.out.print("Digite o valor do segundo numero: ");
                    numero2 = entrada.nextFloat();
                    resultado = numero1 * numero2;
                    System.out.print("a multiplicacao de " + numero1 + " por " + numero2 + " tem como resultado o numero: " + resultado);
                break;

                case 4:
                    System.out.print("Digite o valor do primeiro numero: ");
                    numero1 = entrada.nextFloat();
                    System.out.print("Digite o valor do segundo numero: ");
                    numero2 = entrada.nextFloat();

                    if (numero2 == 0) {
                    System.out.print("Nao eh possivel realizar divisao por 0, eh uma indeterminacao");
                    } else {

                    resultado = numero1 / numero2;

                    System.out.print("a divisao de " + numero1 + " por " + numero2 + " tem como resultado o numero: " + resultado);
                    }
                break;

                case 5:

                    System.out.print("Digite o valor do numero desejado: ");
                    numeroFatorial = entrada.nextInt();

                    numeroArmazenado = numeroFatorial;

                    for (fatorial = 1; numeroFatorial > 1; numeroFatorial--) {
                    fatorial = fatorial * numeroFatorial;
                    }

                    System.out.print("o fatorial de " + numeroArmazenado + " tem como resultado o numero: " + fatorial);
                break;

                default:
                    System.out.print("A operacao escolhida eh invalida. ");
                break;

            }
        }
        entrada.close();
    } 
}