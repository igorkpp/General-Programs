
Cafe::Cafe(string nome, double preco, double gramas) : nome(nome), preco(preco), gramas(gramas) {}

Cafe::~Cafe () {}

void Cafe::setNome(string nome) {
    this->nome = nome;
}

string Cafe::getNome() {
    return nome;
}

void Cafe::setPreço(double preco) {
    this->preco = preco;
}

double Cafe::getPreco() {
    return preco;
}

void Cafe::setGramas(double gramas) {
    this->gramas = gramas;
}

double Cafe::getGramas() {
    return gramas;
}