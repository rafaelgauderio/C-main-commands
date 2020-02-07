//studio -> input e output
//diretiva que contém definições de funcções de entradas e saídas de dados
//visual.com -> animações para visualizar estruturas de dados
//compilar um problema no cmd
// na pasta onde está o projeto cmd gcc main.c /depois exucutasr a.exe
// gcc main.c -o nome_do_programa / depois executar nome_do_programa
//Não é possível usar função como argumento de outra função em C

//bibliotecas declaradas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//definições de variáveis globais
int numero=10;
char letra_d='d';
short int numero_pequeno=35;
long int numero_grande=4545956;
long long int numero_muito_grande= 894545566959956;


int somar(int a, int b)
{
    int soma = a+ b;
    return soma;

}
float produto(float c, float d)
{
    return c*d;
}

//função principal e ser executada
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
    printf("O somatorio das variaveis %d e %d declaradas e: %d\n\n",a,b,somar(a,b));
    printf("O produto das variaveis %.2f e %.2f declaradas e: %.2f\n\n",c,d,produto(c,d));

    //É possível usar uma função como argumentod e uma variável
    int result = somar(15,90);
    printf("Somatorio entre 15 e 90 e: %d\n",result);

    float phi=3.1415;
    printf("O valor da constante Pi e: %.2f\n",phi);

    printf("\nO valor da constante global numero e: %d\n",numero);

    printf("\nA quarta letra do alfabeto e: %c\n",letra_d);

    printf("\nUm numero de 2 bytes: %hd\n",numero_pequeno);

    printf("\nUm numero de 4 bytes: %ld\n",numero_grande);

    printf("\nUm numero de 8 bytes: %lld\n",numero_muito_grande);

    system ("PAUSE");

    int i;
    int n=20;

    printf("\nSegue listagem dos %d primeiros numeros inteiros:\n",n);

    for (i=1 ; i<=n ; i++)
    {
        printf("%d\n",i);
    }
    system("PAUSE");
    printf("\nSegue Listagem dos 15 primeiros numeros inteiros em ordem decrescente:\n",n);
    for(i=15; i>0; i--)
    {
        printf("%d\n",i);
    }


    //Operador condicional
    int number;
    printf("\nInforme um numero inteiro:\n");
    scanf("%i",&number);
    if (number !=15)
    {
        printf("O numero informado é diferente de 15\n");
    }
    else
    {
        printf("O numero informado é igual a 15\n");
    }

    system("PAUSE");
    int idade;
    printf("\nInforme a sua idade:\n");
    scanf("%i",&idade);


    if (idade<50 && idade>=18)
    {
        printf("Tu é adulto e está em idade boa!\n");
    }
    else if (idade<18)
    {
        printf("Tu ainda e moleque\n");
    }

    else
    {
        printf("Tu já está meio velho!\n");
    }

    //sizeof -> resulta no número de bytes de um determinado tipo

    printf("tamando do int: %d\n", sizeof(int));
    printf("tamanho do float %lf\n",sizeof(float));
    printf("tamanho do short int %hd\n",sizeof(short));
    printf("tamanho do log int %ld\n",sizeof(long));
    printf("tamanho do double: %le\n",sizeof(double));

    return 0;
}
