/*
Exemplos: Idade em dias: 50, Idade em dias: 685, Idade em dias: 9004;
Entrada: Um valor real sendo ele a idade em dias;
Processamento: Receber a idade de dias em converte-la em anos e meses.
Saída: Idade em anos,meses e dias.
*/


#include <stdio.h>

float converterIdadeDiaAno(float idadeD)
{
    float idadeDiaAno;

    idadeDiaAno = idadeD / 365;

    return(idadeDiaAno);
}


float converterIdadeDiaMeses (float idadeD)
{
    float idadeDiaMes;

    idadeDiaMes = idadeD / 30;

    return(idadeDiaMes);


}


main()
{
    int idadeAnos;
    float idadeDias,idadeMeses;

    printf("Digite sua idade em dias: \n");
    scanf("%f", &idadeDias);

    printf("Sua idade em anos sera de:  %f \n",converterIdadeDiaAno(idadeDias));

    printf("Sua idade em meses sera de: %f \n",converterIdadeDiaMeses(idadeDias));

    printf("Sua idade em dias sera de: %f \n", idadeDias);

}
