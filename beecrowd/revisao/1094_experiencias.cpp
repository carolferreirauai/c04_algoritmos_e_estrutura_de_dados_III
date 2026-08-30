/*
1094 - EXPERIÊNCIAS

MARIA ACABOU DE INICIAR SEU CURSO DE GRADUAÇÃO NA FACULDADE DE MEDICINA E PRECISA DE
SUA AJUDA PARA ORGANIZAR OS EXPERIMENTOS DE UM LABORATÓRIO O QUAL ELA É RESPONSÁVEL.
ELA QUER SABER NO FINAL DO ANO, QUANTAS COBAIAS FORAM UTILIZADAS NO LABORATÓRIO E O 
PORCENTUAL DE CADA TIPO DE COBAIA UTILIZADA.

ESTE LABORATÓRIO EM ESPECIAL UTILIZA TRÊS TIPOS DE COBAIAS: SAPOS, RATOS E COELHOS. PARA
OBTER ESTAS INFORMAÇÕES, ELA SABE EXATAMENTE O NÚMERO DE EXPERIMENTOS QUE FORAM
REALIZADOS, O TIPO DE COBAIA UTILIZADA E A QUANTIDADE DE COBAIAS UTILIZADAS EM CADA
EXPERIMENTO.

ENTRADA:A PRIMEIRA LINHA DE ENTRADA CONTÉM UM VALOR INTEIRO N QUE INDICA OS VÁRIOS CASOS DE
TESTE QUE VEM A SEGUIR. CADA CASO DE TESTE CONTÉM UM INTEIRO QUANTIA (1 <= QUANTIA <= 
15) QUE REPRESENTA A QUANTIDADE DE COBAIAS UTILIZADAS E UM CARACTERE TIPO ('C', 'R' OU 
'S'), INDICANDO O TIPO DE COBAIA (R: RATOS S: SAPO C: COELHO).

SAÍDA: APRESENTE O TOTAL DE COBAIAS UTILIZADAS, O TOTAL DE CADA TIPO DE COBAIA UTILIZADA E O
PERCENTUAL DE CADA UMA EM RELAÇÃO AO TOTAL DE COBAIAS UTILIZADAS, SENDO QUE O
PERCENTUAL DEVE SER APRESENTADO COM DOÍS DÍGITOS APÓS O PONTO.
*/

//biblioteca
#include <iostream>
#include <iomanip>

using namespace std;

//função principal
int main()
{
    //declaração de dados
    int n; //varios casos de teste
    int quantia;
    char tipo; //tipo cobaia
    
    //inicializar com zero
    int total_cobaias = 0, total_coelhos = 0, total_ratos = 0, total_sapos = 0;

    //calculos do percentuais
    float percentual_coelhos = 0.0, percentual_ratos = 0.0, percentual_sapos = 0.0;

    //entrada de dados
    //ler o casos de teste
    cin >> n;

    //ler os casos
    for (int i = 0; i < n; i++)
    {
        //ler a quantia e o tipo
        cin >> quantia >> tipo;

        //desenvolvimento
        //acumula no total
        total_cobaias += quantia;

        //verifica o tipo da cobaia e acumular
        if (tipo == 'C')
        {
            total_coelhos += quantia;
        }
        else if (tipo == 'R')
        {
            total_ratos += quantia;
        }
        else if (tipo == 'S')
        {
            total_sapos += quantia;
        }

    }

    //desenvolvimento
    //verificar a divisão
    if (total_cobaias > 0)
    {
        //float - para uma divisão inteira, que resulta em zero.
        percentual_coelhos = (float)total_coelhos / total_cobaias * 100.0;
        percentual_ratos = (float)total_ratos / total_cobaias * 100.0;
        percentual_sapos = (float)total_sapos / total_cobaias * 100.0;
    }

    //saída de dados
    cout << "Total: " << total_cobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << total_coelhos << endl;
    cout << "Total de ratos: " << total_ratos << endl;
    cout << "Total de sapos: " << total_sapos << endl;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << percentual_coelhos << " %" << endl;
    cout << "Percentual de ratos: " << percentual_ratos << " %" << endl;
    cout << "Percentual de sapos: " << percentual_sapos << " %" << endl;

    return 0;
}
