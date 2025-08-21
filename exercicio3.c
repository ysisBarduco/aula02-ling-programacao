//3. SIMULADOR DE CAIXA ELETRONICO
#include <stdio.h>

//Variaveis globais
double saldo = 1000.00; //Saldo inicial: R$ 1000,00

int main(){
    int opcao;

    do{
        printf("\n=== CAIXA ELETRONICO ===\n");
        printf("1. Consultar saldo atual\n");
        printf("2. Realizar depositos\n");
        printf("3. Realizar saques\n");
        printf("4. Transferencia entre contas\n");
        printf("5. Sair do sistema\n");

        //Entrada: Opção do menu (1-5)
        printf("Selecione a opcao desejada: ");
        scanf("%d", &opcao);

        if ((opcao < 1) || (opcao > 5)){
            printf("\nOPCAO INVALIDA!\n");
        }

        //1. Consultar saldo atual
       if(opcao == 1){
            consultarSaldo();
       }     
        //2. Realizar depósitos
       else if(opcao == 2){
            realizarDeposito();
       } 

         //3. Realizar saques
       else if(opcao == 3){
           realizarSaque();
        } 

        //4. Transferência entre contas
        else if(opcao == 4){
            transferirValor();
        }
   
    } while(opcao =! 5);

    return 0;
}

void consultarSaldo(void){
    printf("\n=== CONSULTAR SALDO ATUAL ===\n");
    printf("Saldo: %.2f\n", saldo);
    main();
}

void realizarDeposito(void){
    double deposito;

    printf("\n=== REALIZAR DEPOSITO ===\n");

    //Entrada: valor monetário
    printf("Digite o valor do deposito (minimo R$0.01): ");
    scanf("%lf", &deposito);

    if(deposito >= 0.01){
        saldo += deposito;
        printf("\nDeposito de R$%.2f realizado com sucesso!\n", deposito);
        printf("Saldo atual: %.2f\n", saldo);
        main();
    }
    else{
        printf("\nVALOR INVALIDO!\n");
        main();
    }

}

void realizarSaque(void){
    double saque;

    printf("\n=== REALIZAR SAQUE ===\n");

    //Entrada: valor monetário
    printf("Digite o valor que deseja sacar(máximo R$500.00): ");
    scanf("%fl", &saque);

    //Valor maximo para saque por operação: R$500,00
    if(saque > 500.00){
        printf("\nSAQUE INVALIDO! Valor limite para saque ultrapassado.\n");
    }
    //Não permitir saque maior que saldo disponivel
    else if(saque > saldo){
        printf("\nSAQUE INVALIDO! Saldo insuficiente.\n");
    }
    else{
        saldo -= saque;
        printf("\nSaque de %.2f realizado com sucesso!\n", saque);
        printf("Saldo atual: %.2f\n", saldo);
    }
}

void transferirValor(void){
    int conta;
    double transferir, taxa;

    printf("\n=== TRANFERENCIA ENTRE CONTAS ===\n");
    
    //Entrada: valor monetário
    printf("Digite o valor que deseja tranferir: ");
    scanf("%fl", &transferir);

    taxa = transferir * 1/100;
    //Taxa de transferencia: 1% do valor (minimo R$2,00)

}
