//2. CALCULADORA DE NOTAS E CONCEITOS
#include <stdio.h>

int main(){
    double nota1, nota2, nota3, frequencia, media;
    char conceito;

    printf("\n=== CALCULADORA DE NOTAS E CONCEITOS ===\n");

    //Valida se as notas digitadas são valores decimais entre 0 e 10
    do{
        //Entrada: Três notas
        printf("Digite as tres notas obtidas pelo aluno: ");
        scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

        if((nota1>10) || (nota1<0) || (nota2>10) || (nota2<0) || (nota3>10) || (nota3<0)){
            printf("\nNOTA INVALIDA! Digite um valor entre 0 e 10.\n"); //Exibe uma mensagem de erro caso as notas não estejam dentro das condições
        }

    }while ((nota1 > 10) || (nota1 < 0) || (nota2 > 10) || (nota2 < 0) || (nota3 > 10) || (nota3 < 0));

    //Valida se a frequência é um valor decimal entre 0 e 100
    do{
        //Entrada: Frequência em percentual (valor decimal entre 0 e 100)
        printf("Digite o percentual de frequencia do aluno: ");
        scanf("%lf", &frequencia);

        if ((frequencia < 0) || (frequencia > 100)){
            printf("\nFREQUENCIA INVALIDA! Digite um valor entre 0 e 100.\n"); //Exibe uma mensagem de erro caso o percentual de frequencia não esteja dentro das condições
        }
    }while ((frequencia < 0) || (frequencia > 100));

    //Calcular a média aritmética das três notas
    media = (nota1 + nota2 + nota3)/3;
    
    //Definir o conceito
    if ((9.0 <= media) & (media <= 10)){
        //A: 9,0 ≤ média ≤ 10,0
        conceito = 'A';
    }
    else if((7.0 <= media) & (media < 9.0)){
        //B: 7,0 ≤ média < 9,0
        conceito = 'B';
    }
    else if((5.0 <= media) & (media < 7.0)){
        //C: 5,0 ≤ média < 7,0
        conceito = 'C';
    }
    else{
        //D: média < 5,0
        conceito = 'D';
    }
    
    //Saida
    printf("\n=== RESULTADO ===\n");
    printf("Media: %.2f\n", media);
    printf("Conceito: %c\n", conceito);
    
    if((media >= 5.0) && (frequencia >= 75)){ //Caso a media seja acima de 5.0 e a frequencia acima 75%
        printf("Status: Aprovado\n");
    }
    else if((media < 5.0) && (frequencia < 75)){ //Caso tanto a media for abaixo de 5,0 e o percentual de frequencia abaixo de 75%
        printf("Status: Reprovado por nota e falta\n");
    }
    else if(frequencia < 75){ //Caso o percentual de frequencia seja abaixo de 75%
        printf("Status: Reprovado por falta\n");
    }
    else{ //Caso a media seja abaixo de 5,0 
        printf("Status: Reprovado por nota\n");
    }

    return 0;
}