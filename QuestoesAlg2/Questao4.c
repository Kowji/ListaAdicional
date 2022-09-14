/*
Exemplos: Nota: 5, Nota: 11, Nota: -99, Nota: 0.9.
Entrada: Um valor inteiro sendo ele a nota do aluno.
Processamento: Avaliar atraves da nota do aluno se ela esta aprovado ou reprovado.
Saída: "Reprovado", "Aprovado".
*/




#include <stdio.h>

char mediaNota(int n)
{
    if (n < 6)
    {
        return(printf("Reprovado"));
    }

    if (n >= 6)
    {
        return(printf("Aprovado"));
    }

}



main()
{
    int nota;

    printf("Digite sua nota: ");
    scanf("%i", &nota);


    mediaNota(nota);
}
