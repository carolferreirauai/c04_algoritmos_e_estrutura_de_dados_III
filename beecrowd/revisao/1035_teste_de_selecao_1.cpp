/*
1035 - TESTE DE SELEÇÃO 1

LEIA 4 VALORES INTEIROS A, B, C E D. A SEGUIR, SE B FOR MAIOR DO QUE C E SE D FOR MAIOR DO
QUE A, E A SOMA DE C COM D FOR MAIOR QUE A SOMA DE A E B E SE C E D, AMBOS FOREM
POSITIVOS E SE A VARIÁVEL A FOR PAR ESCREVER A MENSAGEM "VALORES ACEITOS", SENÃO
ESCREVER "VALORES NAO ACEITOS".

ENTRADA: QUATROS NÚMEROS INTEIROS A, B, C E D.

SAÍDA: MOSTRE A RESPECTIVA MENSAGEM APÓS A VALIDAÇÃO DOS VALORES.
*/
//biblioteca
#include <iostream>

using namespace std;

//função principal
int main()
{
    //declaração de váriaveis
    int A, B, C, D;

    //entrada de dados
    cin >> A >> B >> C >> D;

    //desenvolvimento
    //B for maior do que C
    //D for maior do que A
    //soma C + D for maior que A + B
    //C e D ambos forem positivo e A for par, valores aceitos
    if ((B > C) && (D > A) && (C + D > A + B) && ((C > 0) && (D > 0)) && (A % 2 == 0))
    {
        cout << "Valores aceitos" << endl;
    }
    else
    {
        cout << "Valores nao aceitos" << endl;
    }
    return 0;
}