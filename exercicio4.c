//4. CALCULADORA IMC AVANcADA
#include <stdio.h>
#include <ctype.h>

int main(){
    double peso, altura, IMC;
    int idade;
    char sexo;

    printf("\n=== CALCULADORA IMC AVANCADA ===\n");

    do{
        //Entrada: peso em quilogramas
        printf("Digite o peso em kg: ");
        scanf("%lf", &peso);

        if(peso <= 0){
            printf("\nPESO INVALIDO! Digite um valor maior que 0\n");
        }

    } while (peso <= 0);

    do{
        //Entrada: altura em metros
        printf("Digite a altura em metros: ");
        scanf("%lf", &altura);

        if(altura <= 0){
            printf("\nALTURA INVALIDA! Digite um valor maior que 0\n");
        }
    } while (altura <= 0);

    do{
        //Entrada: idade em anos
        printf("Digite a idade em anos: ");
        scanf("%d", &idade);

        if (idade <= 0){
            printf("\nIDADE INVALIDA! Digite um valor maior que 0\n");
        }
    } while (idade <= 0);

    do{
        //Entrada: Sexo
        printf("Digite o sexo (M ou F): ");
        scanf(" %c", &sexo);
        sexo = toupper(sexo); //Conveter sexo para maiusculo

        if ((sexo != 'M') && (sexo != 'F')){
            printf("\nSEXO INFORMADO INVALIDO!\n");
        }
    }while((sexo != 'M') && (sexo != 'F'));

    //Calcular IMC
    IMC = peso / (altura * altura);

    //Mostrar IMC
    printf("\n=== RESULTADO ===\n");
    printf("IMC: %.2f\n", IMC);

    //Classificar e fazer recomendacões personalizadas
    //Abaixo do peso
    if (IMC < 18.5){
        printf("Classificacao: Abaixo do peso\n");

        if (idade >= 60){
            printf("Recomendacao: Consultar geriatra\n");
        }
    }

    //Peso normal
    else if((18.5 <= IMC) && (IMC < 25.0)){
        printf("Classificacao: Peso normal\n");
    }

    //Sobrepeso
    else if((25.0 <= IMC) && (IMC < 30.0)){
        printf("Classificacao: Sobrepeso\n");

        if (sexo == 'M'){
            printf("Recomendacao: Praticar exercicios de forca\n");
        }
        else if (sexo == 'F'){
            printf("Recomendacao: Praticar exercicios aerobicos\n");
        }
    }

    //Obesidade grau I
    else if((30.0 <= IMC) && ( IMC < 35.0)){
        printf("Classificacao: Obesidade grau I\n");
        
        if ((sexo == 'M') && (idade <= 25)){
            printf("Recomendacao: Praticar exercicios de forca e procurar nutricionista\n");
        }
        else if ((sexo == 'F') && (idade <= 25)){
            printf("Recomendacao: Praticar exercicios aerobicos e procurar nutricionista\n");
        }
        else if (sexo == 'M'){
            printf("Recomendacao: Praticar exercicios de forca\n");
        }
        else{
            printf("Recomendacao: Praticar exercicios aerobicos\n");
        }
    }

    //Obesidade grau II
    else if((35.0 <= IMC) && (IMC < 40.0)){
        printf("Classificacao: Obesidadade grau II\n");
        
        if ((sexo == 'M') && (idade <= 25)){
            printf("Recomendacao: Praticar exercicios de forca e procurar nutricionista\n");
        }
        else if ((sexo == 'F') && (idade <= 25)){
            printf("Recomendacao: Praticar exercicios aerobicos e procurar nutricionista\n");
        }
        else if (sexo == 'M'){
            printf("Recomendacao: Praticar exercicios de forca\n");
        }
        else{
            printf("Recomendacao: Praticar exercicios aerobicos\n");
        }
        
    }
    
    //Obesidade grau III
    else if (IMC >= 40.0){
        printf("Classificacao: Obesidade grau III\n");
        
        if ((sexo == 'M') && (idade <= 25)){
            printf("Recomendacao: Praticar exercicios de forca e procurar nutricionista\n");
        }
        else if ((sexo == 'F') && (idade <= 25)){
            printf("Recomendacao: Praticar exercicios aerobicos e procurar nutricionista\n");
        }
        else if (sexo == 'M'){
            printf("Recomendacao: Praticar exercicios de forca\n");
        }
        else{
            printf("Recomendacao: Praticar exercicios aerobicos\n");
        }
    }
    
}
