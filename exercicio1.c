//1. SISTEMA DE PONTUAÇÃO DE JOGO
#include <stdio.h>

int main (){
    int pontosI, pontosF;

    printf("\n=== SISTEMA DE PONTUACAO DE JOGO ===\n");

    //Validar entrada
    do {
        //Entrada: pontuação inicial
        printf("Digite a pontuacao inicial do jogador: ");
        scanf("%d", &pontosI);

        if(pontosI < 0){
            printf("INVALIDO! Digite um valor positivo.\n"); //Exibe uma mensagem de erro caso o valor de entrada seja negativo
        }

    } while (pontosI < 0);

    pontosF = pontosI; //Atribui a pontuação inicial para a variavel que sera modificada

    //Ganhou uma fase: +50 pontos
    pontosF += 50;
    printf("\nJogador ganhou uma fase! + 50 pontos\n");
    printf("Pontuacao atual: %d\n", pontosF);

    //Coletou item especial: *2 (multiplicador)
    pontosF *= 2;
    printf("\nJogador coletou um item especial! pontuacao dobrada\n");
    printf("Pontuacao atual: %d\n", pontosF);

    //Perdeu uma vida: -30 pontos
    pontosF -= 30;
    printf("\nJogador perdeu uma vida! -30 pontos\n");
    printf("Pontuacao atual: %d\n", pontosF);

    //Bonus de tempo: +15 pontos
    pontosF += 15;
    printf("\nBonus de tempo! +15 pontos\n");
    printf("Pontuacao atual: %d\n", pontosF);

    //Penalidade por dificuldade: /3 (divisão inteira)
    pontosF /= 3;
    printf("\nPenalidade por dificuldade! pontuacao dividida por 3\n");
    printf("Pontuacao atual: %d\n", pontosF);

    //Bonus final: +100 pontos
    pontosF += 100;
    printf("\nBonus final! +100 pontos\n");
    printf("Pontuacao atual: %d\n", pontosF);

    //Resultado
    printf("\n=== RESULTADO ===\n");
    printf("Pontuacao inicial: %d\n", pontosI); //Exibir pontuação inicial
    printf("Pontuacao final: %d\n", pontosF); //Exibir pontuação final
    printf("Diferenca: %d - %d = %d\n", pontosF, pontosI, pontosF - pontosI);  //Calcular e mostrar a diferença entre a pontuação inicial e final

    //Retorno
    return 0;
}