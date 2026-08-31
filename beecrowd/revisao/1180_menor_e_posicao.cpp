/*
1180 - MENOR E POSIÇÃO

FAÇA UM PROGRAMA QUE LEIA UM VELOR N. ESTE N SERÁ O TAMANHO DE UM VETOR X[N]. A
SEGUIR, LEIA CADA UM DOS VALORES DE X, ENCONTRE O MENOR ELEMENTO DESTE VALOR E A SUA
POSIÇÃO DENTRO DO VETOR, MOSTRANDO ESTA INFORMAÇÃO.

ENTRADA:
A PRIMEIRA LINHA DE ENTRADA CONTEM UM ÚNICO INTEIRO N (1 < N < 1000), INDICANDO O
NÚMERO DE ELEMENTOS QUE DEVERÃO SER LIDOS EM SEGUIDA PARA O VETOR X[N] DE INTEIROS.
A SEGUNDA LINHA CONTÉM CADA UM DOS N VALORES, SEPARADOS PPOR UM ESPAÇO. VALE
LEMBRAR QUE NENHUMA ENTRADA HAVERÁ NÚMEROS REPETIDOS.

SAÍDA:
A PRIMEIRA LINHA APRESENTA A MENSAGEM "MENOR VALOR:" SEGUIDA DE UM ESPAÇO E DO
MENOR VALOR LIDO NA ENTRADA. A SEGUNDA LINHA APRESENTA A MENSAGEM "POSICAO:"
SEGUIDO DE UM ESPAÇO E DA POSIÇÃO DO VETOR NA QUAL SE ENCONTRA O MENOR VALOR LIDO,
LEMBRANDO QUE O VETOR INICIA NA POSIÇÃO ZERO.
*/

//biblioteca
#include <iostream>

using namespace std;

//função principal
int main()
{
    //declaração de variáveis
    int n;
    int vetor[1000]; //vetor com tamanho
    int menor;
    int posicao = 0;

    //entrada de dados
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    //desenvolvimento
    menor = vetor[0];

    //varre o vetor
    for(int i = 1; i < n; i++)
    {
        if(vetor[i] < menor)
        {
            menor = vetor[i];
            posicao = i;
        }
    }

    //saida de dados
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}