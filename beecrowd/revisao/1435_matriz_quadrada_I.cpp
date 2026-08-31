/*
1435 - MATRIZ QUADRADA I

ESCREVA UM ALGORTIMO QUE LEIA UM INTEIRO N (0 <= N <= 100), CORREPONDENTE A ORDEM DE 
UMA MATRIZ M DE INTEIROS, E CONSTRUA A MATRIZ DE ACORDO COM O EXEMPLO ABAIXO.

ENTRADA:
A ENTRADA CONSISTE DE VÁRIOS INTEIROS, UM VALOR POR LINHA, CORRESPONDENTE AS ORDENS 
DAS MATRIZES A SEREM CONSTRUIDAS. O FINAL DA ENTRADA É MARCADO POR UM VALOR DE
ORDEM IGUAL A ZERO(0).

SAÍDA:
PARA CADA INTEIRO DA ENTRADA IMPRIMA A MATRIZ CORRESPONDENTE, DE ACORDO COM O
EXEMPLOS. OS VALORES DAS MATRIZES DEVEM SER FORMATADOS EM UM CAMPO DE TAMANHO 3
JUSTIFICADOS À DIREITA E SEPARADOS POR ESPAÇO. APÓS A IMPRESSÃO DE CADA MATRIZ DEVE 
SER DEIXADA UMA LINHA EM BRANCO.
*/

//biblioteca
#include <iostream>
#include <iomanip> //necessario para usar setw

using namespace std;

//função principal
int main()
{
    //declaração de variáveis
    int numeros;
    int cima;
    int baixo;
    int esquerda;
    int direta;
    int menor;
    int valor;

    //entrada de dados
    //ler o numeros e ser diferente de 0
    while(cin >> numeros && numeros != 0)
    {
        //desenvolvimento
        //percorrer as linhas
        for(int i = 0; i < numeros; i++)
        {
            //percorrer as colunas
            for(int j = 0; j < numeros; j++)
            {
                //calcular a distâncias das bordas
                cima = i;
                baixo = numeros - 1 - i;
                esquerda = j;
                direta = numeros - 1 - j;

                //encontrar a menor distância
                menor = cima;

                if(baixo < menor)
                {
                    menor = baixo;
                }
                if(esquerda < menor)
                {
                    menor = esquerda;
                }
                if(direta < menor)
                {
                    menor = direta;
                }

                //valor final é a menor distância encontrada + 1
                valor = menor + 1;

                //saida de dados
                //reserva exatamente 3 espaços
                cout << setw(3) << valor;
                
                if(j < numeros - 1)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}