/*
1176 - FIBONACCI EM VETOR

FAÇA UM PROGRAMA QUE LEIA UM VALOR E APRESENTE O NÚMERO DE FIBONACCI
CORREPONDENTE A ESTE VALOR LIDO. LEMBRE QUE OS 2 PRIMEIROS ELEMENTOS DA SÉRIE DE
FIBONACCI SÃO 0 E 1 E CADA PRÓXIMO TERMO É A SOMA DOS 2 ANTERIORES A ELE. TODOS OS 
VALORES DE FIBONACCI CALCULADOS NESTE PROBLEMA DEVEM CABER EM UM INTEIRO DE 64 BITS
SEM SINAL.

ENTRADA:
A PRIMEIRA LINHA DA ENTRADA CONTÉM UM INTEIRO T, INDICANDO O NÚMERO DE CASOS DE
TESTE. CADA CASO DE TESTE CONTÉM UM PUNICO INTEIRO N (0 <= N <= 60), CORRESPONDENTE AO
N-ESIMO TERMO DA SÉRIE DE FIBONACCI.

SAÍDA:
PARA CADA CASO DE TESTE DA ENTREDA, IMPRIMA A MENSAGEM "FIB(N) = X", ONDE X É O N-ÉSIMO
TERMO DA SÉRIE DE FIBONACCI.
*/

//biblioteca
#include <iostream>

using namespace std;

int main()
{
    //declaração de variáveis
    long long fibonacci[61];
    int t, n;

    //entrada de dados
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i <= 60; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n;

        //saida de dados
        cout << "Fib(" << n << ") = " << fibonacci[n] << endl;
    }

    return 0;
}