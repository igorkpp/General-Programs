#include "mes.h"

Mes::Mes(string nome, int dias) : nome(nome), dias(dias) {}

Mes::~Mes () {}

void Mes::setNome(string nome) {
    this->nome = nome;
}

string Mes::getNome() {
    return nome;
}

void Mes::setDias(int dias) {
    this->dias = dias;
}

int Mes::getDias() {
    return dias;
}