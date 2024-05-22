contador = int(input("Bem vindo ao programa das operacoes matematicas, digite [1] para realizar a soma de dois numeros, [2] para realizar a subtracao de dois numeros, [3] para realizar a multiplicacao de 2 numeros, [4] para realizar a divisao de 2 numeros e [5] para saber o fatorial de um numero: "))

if contador > 5 or contador < 1:
    print("Favor digite uma dos numeros validos (1-5)")
else:
    match contador:

        case 1:

            numero1 = float(input("Digite o valor do primeiro numero: "))
            numero2 = float(input("Digite o valor do segundo numero: "))

            resultado = numero1 + numero2

            print(f"a soma de {numero1} com {numero2} tem como resultado o numero: {resultado}")
        case 2:
            numero1 = float(input("Digite o valor do primeiro numero: "))
            numero2 = float(input("Digite o valor do segundo numero: "))

            resultado = numero1 - numero2

            print(f"a subtracao de {numero1} com {numero2} tem como resultado o numero: {resultado}")
        case 3:
            numero1 = float(input("Digite o valor do primeiro numero: "))
            numero2 = float(input("Digite o valor do segundo numero: "))

            resultado = numero1 * numero2

            print(f"a multiplicacao de {numero1} com {numero2} tem como resultado o numero: {resultado}")
        case 4:
            numero1 = float(input("Digite o valor do primeiro numero: "))
            numero2 = float(input("Digite o valor do segundo numero: "))

            resultado = numero1 / numero2

            if numero2 == 0:
                print(f"Nao eh possivel realizar divisao por 0, eh uma indeterminacao")
            else:
                print(f"a divisao de {numero1} com {numero2} tem como resultado o numero: {resultado}")
        case 5:
            numeroFatorial = int(input("Digite o valor do numero desejado: "))

            numeroArmazenado = numeroFatorial

            fatorial = 1

            for numeroFatorial in range(numeroFatorial, 1, -1):
                fatorial *= numeroFatorial

            print(f"o fatorial de {numeroArmazenado} tem como fatorial o numero: {fatorial}")
        case default:
            print(f"A operacao escolhida eh invalida. ")
