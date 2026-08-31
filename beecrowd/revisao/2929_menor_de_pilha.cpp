/*
2929 - MENOR DA PILHA

TODO NATAL O BOM VELHINHO CONSEGUE IR EM TODAS AS CASAS DO MUNDO E DEIXAR
PRESENTES PARA AS CRIANÇAS QUE FORAM BOAZINHAS AO LONGO DO ANO, MAS ISSO SÓ É
POSSÍVEL POR CAUSA DO SEU SACO MÁGICO DE PRESENTES. SERIA IMPOSSÍVEL PARA O PAPAI
NOEL LEVAR TODOS OS PRESENTES NO SEU SACO, O VOLUME E PESO DE TODOS ELES TORNA ISSO
OBVIAMNETE INVIÁVEL. O QUE ACONTECE NA VERDAE É QUE SEU SACO É UMA ESPÉCIE DE
PORTAL MÁGICO PARA SUA FÁBRICA DE PRESENTES NO POLO NORTE. ONDE OS PRESENTES SÃO
EMPILHADOS PELOS SEUS ELFOS E O NOEL TIRA SEMPRE O PRESENTE DO TOPO DESSA PILHA
QUANDO ACESSA SUA SACOLA MÁGICA.

OS PRESENTES POSSUEM UMA MEDIÇÃO NUMÉRICA DO GRAU DE DIVERSÃO QUE PODEM
PROPORCIONAR ÁS CRIANÇAS E O PAPAI NOEL TEM SEMPRE A PREOCUPAÇÃO DE SABER QUAL O
PRESENTE MENOS DIVERTIDO QUE ELE IRÁ ENTREGAR AO LONGO DA NOITE PORQUE ELE NÃO QUER
QUE NENHUMA CRIANÇA SE SINTA MAL COM O QUE RECEBER. PORÉM, ISSO NÃO É POSSIVEL DE
SER FEITO ANTECIPAMENTE PORQUE AO LONGO DA NOITE ENQUANTO O BOM VELHINHO RETIRA
PRESENTES DA PILHA PARA ENTREGAR, AINDA ESTÃO SENDO FEITOS OUTROS E COLCOADOS NA
PILHA. ENTÃO O MÁXIMO QUE ELE PODE SABER É O VALOR DO PRESENTE MENOS DIVERTIDO NA
PILHA ATÉ AQUELE MOMENTO.

SUA TAREFAS É, DADO A SEQUÊNCIA DE OPERAÇÕES FEITAS SOBRE A PILHA DE PRESENTES,
RESPONDER AS CONSULTAS DO PAPAI NOEL SOBRE O VALOR DO PRESENTE MENOS DIVERTIDO NA
PILHA ATÉ O MOMENTO.

ENTRADA:
A PRIMEIRA LINHA DA ENTRADA CONTÉM UM INTEIRO N(1 <= N <= 10^6) CORRESPONDEDENDO AO
NÚMERO DE OPERAÇÕES FEITAS SOBRE PILHA DE PRESENTES. AS OPERAÇÕES PODEM SER DE
TRÊS TIPOS: "PUSHV" ONDE V(1 <= V <= 10^9) É UM INTEIRO QUE REPRESENTA O GRAU DE
DIVERSÃO DO PRESENTE SENDO COLCOADO NA PILHA; "POP" QUE REPRESENTA QUE O PAPAI
NOEL ESTÁ TIRANDO UM PRESENTE DA PILHA PARA ENTREGAR E "MIN" QUE REPRESENTA UMA
CONSULTA DO NOEL PARA SABER O MENOR VALOR DE PRESENTE NA PILHA.

SAÍDA:
A SAÍDA CONSISTE EM UMA LINHA CONTENDO UM INTEIRO COM O MENOR VALOR DE PRESENTE NA
PILHA PARA AS CONSULTAS DO TIPO "MIN" OU MENSAGEM "EMPTY" PARA OPERAÇÕES
"MIN" E "POP" QUNADO A PILHA ESTIVER VAZIA.
*/

//biblioteca
#include <iostream>
#include <cstring>

using namespace std;

int pilha[1000005];
int minimos[1000005];
int topo = -1;

//função principal
int main()
{
    //declaração de váriaveis
    int n;
    string operacao;
    int valor;

    //entrada de dados
    cin >> n;

    //desenvolvimento
    for(int i = 0; i < n; i++)
    {
        cin >> operacao;

        if(operacao == "PUSH")
        {
            cin >> valor;
            topo++; //sobe o topo
            pilha[topo] = valor; //guardar o valor

            //primeiro elemento da pilha
            if(topo == 0)
            {
                minimos[topo] = valor;
            }
            else
            {
                //guarda menor valor
                if(valor < minimos[topo - 1])
                {
                    minimos[topo] = valor;
                }
                else
                {
                    minimos[topo] = minimos[topo - 1];
                }
            }
        }
        else if(operacao == "POP")
        {
            if(topo == -1)
            {
                cout << "EMPTY" << endl;
            }
            else
            {
                topo--; //desce um topo
            }
        }
        else if(operacao == "MIN")
        {
            if(topo == -1)
            {
                cout << "EMPTY" << endl;
            }
            else
            {
                cout << minimos[topo] << endl;
            }
        }
    }

    return 0;
}