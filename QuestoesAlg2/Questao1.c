/*
Exemplo: 20,0,30,154
Entrada: Valor do automovel
Processamento: Calcular o preco do automovel somando o imposto e a taxa do revendedor
Saída: Valot total do automovel


*/




#include <stdio.h>

float calcularPreco(float precoA)
{
    float precoTotal,precoI,precoR;

    precoI = precoA * 0.28;
    precoR = precoA * 0.45;
    precoTotal = precoI + precoR;

    return (printf("Preco total: %f", precoTotal));

}



main()
{

    float precoAuto;
    printf("Digite o preco do automovel: \n");
    scanf("%f", &precoAuto);

    calcularPreco(precoAuto);


}
