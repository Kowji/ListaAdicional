/*
Exemplos: Idade: 15, Idade: 30 , Idade: 0, Idade: -50.
Entrada: Um valor inteiro sendo este a idade.
Processamento: Ler a idade em anos e transformar em meses e dias.
Saída: Idade em dias.
*/



#include <stdio.h>

float converterIdade(int idadeA)
{

    float idadeAnoMes;

    idadeAnoMes = idadeA * 12;

    float idadeAnoDia;

    idadeAnoDia = idadeA * 365;

    return(idadeAnoDia);

}


main()
{
    int idadeAnos;

    printf("Digite sua idade: \n");
    scanf("%i", &idadeAnos);



    printf("Sua idade em dias sera de: %f", converterIdade(idadeAnos));


}
