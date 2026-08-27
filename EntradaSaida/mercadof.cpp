#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double capital;
    double taxa;
    int tempo;

    cin >> capital >> taxa >> tempo;

    double montante;
    double lucro;

    montante = capital * pow(1 + (taxa / 100), tempo);

    lucro = montante - capital;

    cout << fixed << setprecision(2);

    cout << "LUCRO = " << lucro << endl;

    return 0;
}

/*O atual sistema financeiro utiliza o regime de juros compostos, pois ele
oferece uma maior rentabilidade se comparado com o regime de juros simples, em
que o valor dos rendimentos torna-se fixo. O juro composto incide mês a mês de
acordo com o somatório acumulativo do capital com o rendimento mensal, isto é,
prática do juro sobre juro. As modalidades de investimentos e financiamentos são
calculadas de acordo com esse modelo de investimento, pois ele oferece um maior
rendimento, originando mais lucro.

Uma expressão matemática utilizada no cálculo dos juros compostos é a seguinte:

M = C * (1 + i)t

M: montante
C: capital
i: taxa de juros
t: tempo de aplicação

Um exemplo
Qual o montante produzido por um capital de R$ 7.000,00 aplicados a uma taxa de
juros mensais de 1,5% durante um ano?

C: R$ 7.000,00
i: 1,5% ao mês = 1,5/100 = 0,015
t: 1 ano = 12 meses

M = C * (1 + i)t
M = 7000 * (1 + 0,015)12
M = 7000 * (1,015)12
M = 7000 * 1,195618
M = 8369,33

O montante é de R$ 8.369,33.

Entrada
O arquivo de entrada contém 2 números reais, que correspondem ao capital inicial
e à taxa de juros (em % ao mês), respectivamente, e um inteiro, que corresponde
ao tempo de aplicação, em meses

Saída
A saída deve mostrar o lucro obtido sobre o capital. Este valor deve ser
mostrado com 2 casas decimais.

IMPORTANTE: não se esqueça de colocar o endl ao final da saída, para não receber
"Presentation Error". Exemplos
>> 7000.0 1.5 12

<< LUCRO = 1369.33

-------------------------------

>> 12000.0 1.35 10

<< LUCRO = 1722.04*/