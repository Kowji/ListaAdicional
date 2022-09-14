/*
Exemplo: 1,2,3.
Entrada: Indice de poluicao.
Processamento: Identicar o indice de poluicao e enviar uma mensagem para os grupos.
Saída: "Grupo 1 noticado", "Grupo 2 notificado", "Grupo 1,2,3 notificados".
*/


#include <stdio.h>

char aviso (int p)
{
    switch(p){

    case 1:
    printf("Grupo 1 notificado");
    break;

    case 2:
    printf("Grupo 2 notificado");
    break;

    case 3:
    printf("Grupo 1,2,3 notificados");
    break;
    }
}


main()
{
    int indicePoluicao;

    printf("Digite o indice de poluicao: \n 1 - 0.3 \n 2 - 0.4 \n 3 - 0.5\n");
    scanf("%i", &indicePoluicao);

    aviso(indicePoluicao);

}
