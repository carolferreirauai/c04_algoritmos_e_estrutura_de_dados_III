/*
1548 - FILA DE RECREIO

NA ESCOLA AONDE VOCÊ ESTUDA, A HORA DO RECREIO É A MAIS AGARDADA PELA GRANDE
MAIORIA DOS ALUNOS. NÃO SÓ PORQUE AS VEZES AS AULAS SÃO CANSATIVAS, MAS SIM PORQUE A
MERENDA SERVIDA É MUITO BOA, PREPARADA POR UM CHEFE ITALIANO MUITO CAPRICHOSO.

QUANDO BATE O SINAL PARA A HORA DO RECREIO, TODOS OS ALUNOS SAEM CORRENDO DA SUA
SALA PARA CHEGAR O MAIS CEDO POSSÍVEL NA CANTINA, TANTA É A VONTADE DE COMER. UM DE
SEUS PROFESSORES NOTOU, PORÉM, QUE HAVIA ALI UMA OPORTUNIDADE.

UTILIZANDO UM SISTEMA DE RECOMPENSA, SEU PROFESSOR DE MATEMÁTICA DISSE QUE A
ORDEM DA FILA PARA SE SERVIR SERÁ DADA NÃO PELA ORDEM DE CHEGADA, MAS SIM PELA SOMA 
DAS NOTAS OBTIDAS EM SALA DE AULA. ASSIM, AQUELES COM AMAIOR NOTA PODERÃO SE SERVIR 
ANTES DAQUELES QUE TEM MENOR NOTA.

SUA TAREFA É SIMPLES: DADA A ORDEM DE CHEGADA DOS ALUNOS NA CANTINA, E AS SUAS
RESPECTIVAS NOTAS NA MATÉRIA DE MATEMÁTICA, REORDENE A FILA DE ACORDO COM AS NOTAS
DE MATEMÁTICA, E DIGA QUANTOS ALUNOS NÃO PRECISARAM TROCAR DE LUGAR NESSA REORDENAÇÃO

ENTRADA:
A PRIMEIRA LINHA CONTÉM UM INTEIRO N, INDICANDO O NÚMERO DE CASOS DE TESTE A SEGUIR.

CADA CASO DE TESTE INCIA COM UM INTEIRO M(1 <= M <= 1000), INDICANDO O NÚMERO DE
ALUNOS. EM SEGUIDA HAVERÁ M INTEIROS DISTINTOS P_I(1<= P_I <= 1000), ONDE O I-ÉSIMO
INTEIRO INDICA A NOTA DO I-ÉSIMO ALUNO.

OS INTEIROS ACIMA SÃO DADOS EM ORDEM DE CHEGADA, OU SEJA, O PRIMEIRO INTEIRO DIZ
RESPEITO AO PRIMEIRO ALUNO A CHEGAR NA FILA, O SEGUNDO INTEIRO DIZ RESPEITO AO SEGUNDO
ALUNO, E ASSIM SUCESSIVAMENTE.

SAÍDA:
PARA CADA CASO DE TESTE IMPRIMA UMA LINHA, CONTENDO UM INTEIRO, INDICANDO O NÚMERO
DE ALUNOS QUE NÃO PRECISARAM TROCAR DE LUGAR MESMO APÓS A FILA SER REORDENADA.
*/

//biblioteca
#include <iostream>

using namespace std;

//função ordenação
void bubblesort(int vetor[], int tamanho)
{
    for(int i = 0; i < tamanho - 1; i++)
    {
        for(int j = 0; j < tamanho - 1 - i; j++)
        {
            //< - descrescente
            if(vetor[j] < vetor[j + 1])
            {
                int auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }
}

//função principal
int main()
{
    //declaração de variaveis
    int n; //números de casos de teste
    int m; //número de aluno.
    int original[1000]; //notas do i-ésimo aluno.
    int ordenado[1000]; 

    //entrada de dados
    //ler o numeros de casos de teste
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        //ler os números de alunos
        cin >> m;

        int nao_mudou = 0;

        //ler as notas
        for(int j = 0; j < m; j++)
        {
            cin >> original[j];
            ordenado[j] = original[j];
        }

        //desenvolvimento
        //chamar a função
        bubblesort(ordenado, m);

        //comparar as filas original == ordenada
        for(int j = 0; j < m; j++)
        {
            if(original[j] == ordenado[j])
            {
                nao_mudou++; //conta o aluno que permanecer na posição
            }
        }

        //saida de dados
        cout << nao_mudou << endl;
    }

    return 0;
}