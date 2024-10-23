#include <stdio.h>
#define tam 50

int posicaoNulo (char teste[])
{

    for ( int i=0; i < tam ; i++ )
    {
        if ( teste[i] == '\0')
            return i;
    }
    printf("\nErro, nao foi possivel encontrar o final do vetor");
    return -1;
}

void mostrarVetorPartes (char teste[])
{
    for (int i = 0; i < tam; i++)
    {
        if (teste[i] == '\0')
            break;
        printf("\nteste[%d] = %c",i, teste[i]);
    }
    printf("\n");
}
void concatenar(char destino[], char nome1[], char nome2[])
{
    int i = 0, j = 0, cont = 0;
    i = posicaoNulo (nome1);
    j = posicaoNulo (nome2);

    for ( cont = 0 ; cont < i ; cont++)
    {
        destino[cont] = nome1[cont];
    }
    destino[cont] = ' ';
    for ( cont = 0 ; cont < j ; cont++)
    {
    
        destino[cont + i + 1] = nome2[cont];
    }
    destino[i+j+1] = '\0';
    mostrarVetorPartes (destino);
}

int main()
{
    char linha1[tam];
    char linha2[tam];
    char destino[tam+tam];

    printf("Insira um nome para a primeira variável: \n");
    scanf("%[^\n]",linha1);
    getchar();
    printf("\nInsira o segundo nome para ser concatenado: \n");
    scanf("%[^\n]",linha2);
    getchar();
    printf("%s",linha2);
    concatenar(destino, linha1, linha2);
    printf("%s",destino);

}