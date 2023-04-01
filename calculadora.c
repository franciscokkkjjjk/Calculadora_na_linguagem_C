# include <stdio.h>

float multiplacao(float a, float b)
{
    return a * b;
}
float adicao(float a, float b)
{
    return a + b;
}
float divisao(float a, float b)
{
    return a / b;
}
float subtracao(float a, float b)
{
    return a - b;
}

int main(void)
{
    int breackWhile;
    char exit[1];
    int operacao;
    float primeiroNumero;
    float segundoNumero;
    float resultado;
    printf("Calculadora de dois numeros\n\n");
    while (1)
    {
        printf("Operacoes:\n\nNumero da operacao - Operacao\n");
        printf("1 ----------- Multiplicacao\n");
        printf("2 ----------- Divisao\n");
        printf("3 ----------- Adicao\n");
        printf("4 ----------- Subtracao\n");
        
        printf("Digite o numero da operacao que deseja: ");
        scanf("%i", &operacao);
        printf("\nQual eh o primeiro numero? ");
        scanf("%e", &primeiroNumero);
        printf("\nQual eh o segundo numero? ");
        scanf("%e", &segundoNumero);

        if (operacao == 1)
        {
            resultado = multiplacao(primeiroNumero, segundoNumero);
        }
        if (operacao == 2)
        {
            resultado = divisao(primeiroNumero, segundoNumero);
        }
        if (operacao == 3)
        {
            resultado = adicao(primeiroNumero, segundoNumero);
        }
        if (operacao == 4)
        {
            resultado = subtracao(primeiroNumero, segundoNumero);
        }
        printf("\n\nResultado: %.2f ", resultado);
        while (1)
        {
            printf("\n\nDeseja sair? (S/N) ");
            scanf("%s", exit);
            if (exit[0] == 83 || exit[0] == 115)
            {
                breackWhile = 1;
                break;
            }
            else if (exit[0] == 78 || exit[0] == 110)
            {
                break;
            }
        }
        if (breackWhile == 1)
        {
            break;
        }
        
    }
    return 0;
}