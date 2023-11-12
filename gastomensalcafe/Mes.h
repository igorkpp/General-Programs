#ifndef MES_H
#define MES_H

#include <iostream>
#include <string>

using namespace std;

class Mes {
private:

string nome;
int dias;

public:

Mes(string nome, int dias);
virtual~Mes();

void setNome(string nome);
string getNome();

void setDias(int dias);
int getDias();
};

#endif