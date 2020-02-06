//diretiva que contém definições de funcções de entradas e saídas de dados
//studio -> input e output

#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b)
{
    return a+b;

}
float produto(float c, float d)
{
    return c*d;
}


int main()
{

    int a=5;
    int b=15;
    float c=12.0;
    float d=7.0;

    printf("Arquivo de testes de comandos!\n\n");

    printf("Acessar para visualizar graficos de estruturas de dados:\n");
    printf("www.visualgo.com\n");
    printf("www.cursosdeprogramacao.com.br\n\n");
    printf("O somatorio das variaveis %d e %d declaradas e: %d\n\n",a,b,soma(a,b));
    printf("O produto das variaveis %.2f e %.2f declaradas e: %.2f\n\n",c,d,produto(c,d));

    printf("Preciso qualquer tecla para continuar!\n");
    system ("pause");

    int i;
    int n=20;

    printf("Segue listagem dos %d primeiros numeros inteiros:\n",n);

    for (i=0 ; i<n ; i++)
    {
        printf("%d\n",i);
    }



    return 0;

}
