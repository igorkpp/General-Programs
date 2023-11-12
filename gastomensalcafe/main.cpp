#include "Mes.h"
#include "CafeCapsula.h"

int main() {
    int quantidadeDePessoas = 4;
    int quantidadeDeXicarasPorPessoaPorDia = 1;
    int quantidadeDeXicarasPorMes = 0;
    double gasto = 0;

    Mes* janeiro = new Mes("Janeiro", 31);
    Mes* fevereiro = new Mes("Fevereiro", 28);
    Mes* março = new Mes("Março", 31);
    Mes* abril = new Mes("Abril", 30);
    Mes* maio = new Mes("Maio", 31);    
    Mes* junho = new Mes("Junho", 30);
    Mes* julho = new Mes("Julho", 31);
    Mes* agosto = new Mes("Agosto", 31);
    Mes* setembro = new Mes("Setembro", 30);
    Mes* outubro = new Mes("Outubro", 31);
    Mes* novembro = new Mes("Novembro", 30);
    Mes* dezembro = new Mes("Dezembro", 31);

    Cafe* melitaTradicional = new Cafe("Melita Tradicionao", 18.49, 500);
    CafeCapsula* starbucksBlonde = new CafeCapsula("Starbucks Blonde", 20.24, 0, 10);

    quantidadeDeXicarasPorMes = quantidadeDePessoas*quantidadeDeXicarasPorPessoaPorDia*outubro->getDias();
    cout << quantidadeDeXicarasPorMes << endl;



}