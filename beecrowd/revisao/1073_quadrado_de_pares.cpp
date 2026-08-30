/*
1073 - QUADRADO DE PARES

LEIA UM VALOR INTEIRO N. APRESENTE O QUADRADO DE CADA UM DOS VALORES PARES, DE 1 ATÉ
N, INCLUSIVE N, SE FOR O CASO.

ENTRADA: A ENTRADA CONTÉM UM VALOR INTEIRO N (5 < N < 2000).

SAÍDA: IMPRIMA O QUADRADO DE CADA UM DOS VALORES PARES, DE 1 ATÉ N, CONFORME O EXEMPLO
ABAIXO.

TOME CUIDADO! ALGUMAS LINGUAGENS TEM POR PADRÃO APRESENTAREM COMO SAÍDA 1E+006
AO INVÉS DE 1000000 O QUE OCASIONARÁ RESPOSTA ERRADA. NESTE CASO, CONFIGURE A 
PRECISÃO ADEQUADAMENTE PARA QUE ISSO NÃO OCORRA.
*/
//biblioteca
#include <iostream>

using namespace std;

//função principal
int main()
{
    //declaração de variaveis
    int N;
    int resultado;

    //entrada de dados
    cin >> N;

    //desenvolvimento e saída de dados
    for(int i = 2; i <= N; i += 2)
    {
        resultado = i * i;
        cout << i << "^2 = " << resultado << endl;
    }

    return 0;
}