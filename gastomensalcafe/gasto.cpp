#include <iostream>

using namespace std;

int main() {
    double gramasPorDia = 65;
    double precoPorGrama = 16.0/500; // 18.59 reais por 500g Melita tradicional
    double precoPorCapsula = 22.0/10; // 20.24 reais por 10 capsulas Starbucks Blonde
    int quantidadeDePessoas = 4;
    int quantidadeDeXicarasPorPessoaPorDia = 1;
    int quantidadeDeCapsulasPorPessoaPorDia = 1;
    int quantidadeDeXicarasPorMes;
    int quantidadeDeCapsulasPorMes;
    double precoCafeCoadoMensal;
    double precoCafeCapsulaMensal;

    quantidadeDeCapsulasPorMes = 30*quantidadeDePessoas*quantidadeDeCapsulasPorPessoaPorDia;
    precoCafeCapsulaMensal = quantidadeDeCapsulasPorMes*precoPorCapsula;
    cout << "Quantidade de capsulas por mes: " << quantidadeDeCapsulasPorMes << endl << "Gasto mensal cafe starbucks blonde: R$" 
    << precoCafeCapsulaMensal << endl;

    precoCafeCoadoMensal = 30*gramasPorDia*precoPorGrama;
    cout << "Gasto mensal cafe melita tradicional R$" << precoCafeCoadoMensal << endl;
    cout << "Gasto a mais por mes: R$" << precoCafeCapsulaMensal - precoCafeCoadoMensal << endl
    << "Gasto a mais por ano: R$" << (precoCafeCapsulaMensal - precoCafeCoadoMensal)*12 << endl
    << "Aumento percental: " << (precoCafeCapsulaMensal - precoCafeCoadoMensal)/precoCafeCoadoMensal*100 << "%" << endl
    << "Razao entre precos: " << precoCafeCapsulaMensal/precoCafeCoadoMensal << endl;
}