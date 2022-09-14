/*
Exemplos: Nota 1: ,30 Nota 2: 30, Nota 3: 40; Nota 1: ,60 Nota 2: 60, Nota 3: 60; Nota 1: 55, Nota 2: 20, Nota 3: 42.
Entrada: Nota do estudande.
Processamento: Receber a nota e calcular a media de acordo com o tipo desejado.
Saída: "Sua media e : 60.00"
*/


#include <stdio.h>

float mediaNota (int tN, float nU, float nD, float nT)
{

    float media;

    switch (tN)
    {
        case 1:
        media = (nU + nD + nT) / 3;
        printf("Sua media e: %f", media);
        break;

        case 2:
        media = ((nU * 3) + (nD * 3) + (nT * 4)) / 10;
        printf("Sua media e: %f", media);
        break;

        case 3:
        media = 3 /  ((1 / nU ) + (1 / nD) + (1 / nT)) ;
        printf("Sua media e: %f", media);
        break;

    }
}



main()
{
    int tipoNota,notaUm,notaDois,notaTres;

    printf("Digite sua primeira nota : ");
    scanf("%i", &notaUm);

    printf("Digite sua segunda nota : ");
    scanf("%i", &notaDois);

    printf("Digite sua terceira nota : ");
    scanf("%i", &notaTres);

    printf("Escolha o tipo media desejada: \n 1 - Aritmetica \n 2 - Ponderada \n 3 - Harmonica \n");
    scanf("%i", &tipoNota);

    mediaNota(tipoNota,notaUm,notaDois,notaTres);

}
