#ifndef CAFE_H
#define CAFE_H

#include <iostream>
#include <string>

using namespace std;

class Cafe {
protected:

string nome;
double preco;
double gramas;

public:

Cafe(string nome, double preço, double gramas);
virtual~Cafe();

void setNome(string nome);
string getNome();

void setGramas(int gramas);
double getGramas();

void setPreco(double preço);
double getPreco();

void setGramas(double gramas);
double getGramas();
};

#endif

