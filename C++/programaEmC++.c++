#include <iostream>

using namespace std;

int main(){

    int contador = 0, fatorial = 0, numeroArmazenado = 0;
    float numero1 = 0.0, numero2 = 0.0, resultado = 0.0;

    cout << "Bem vindo ao programa das operacoes matematicas, digite [1] para realizar a soma de dois numeros, [2] para realizar a subtracao de dois numeros,\n" ;
    cout << "[3] para realizar a multiplicacao de 2 numeros, [4] para realizar a divisao de 2 numeros e [5] para saber o fatorial de um numero: ";
    cin >> contador;

    if (contador > 5 || contador < 1) {
        
        cout << "Favor digite uma dos numeros validos (1-5)";

    }else{

        switch (contador){

            case 1:
                cout << "Digite o valor do primeiro numero: ";
                cin >> numero1;
                cout << "Digite o valor do segundo numero: ";
                cin >> numero2;
                resultado = numero1 + numero2;
                cout << "A soma de " << numero1 << " com " << numero2 << " tem como resultado o numero: " << resultado;
            break;

            case 2:
                cout << "Digite o valor do primeiro numero: ";
                cin >> numero1;
                cout << "Digite o valor do segundo numero: ";
                cin >> numero2;
                resultado = numero1 - numero2;

                cout << "A subtracao de " << numero1 << " por " << numero2 << " tem como resultado o numero: " << resultado;
            break;

            case 3:
                cout << "Digite o valor do primeiro numero: ";
                cin >> numero1;
                cout << "Digite o valor do segundo numero: ";
                cin >> numero2;

                resultado = numero1 * numero2;

                cout << "A multiplicacao de " << numero1 << " por " << numero2 << " tem como resultado o numero: " << resultado;
            break;

            case 4:
                cout << "Digite o valor do primeiro numero: ";
                cin >> numero1;
                cout << "Digite o valor do segundo numero: ";
                cin >> numero2;

                if (numero2 == 0) {
                cout << "Nao eh possivel realizar divisao por 0, eh uma indeterminacao";
                } else {

                resultado = numero1 / numero2;

                cout << "A divisao de  " << numero1 << " por " << numero2 << " tem como resultado o numero: " << resultado;
                }
            break;

            case 5:
                cout << "Digite o valor do numero desejado: ";
                cin >> numero1;

                numeroArmazenado = numero1;

                for (fatorial = 1; numero1 > 1; numero1--) {
                fatorial = fatorial * numero1;
                }

                cout << "O fatorial de " << numeroArmazenado << " tem como resultado o numero: " << fatorial;
            break;

            default:
                cout << "A operacao escolhida eh invalida. ";
        }
    }
  return 0;
}