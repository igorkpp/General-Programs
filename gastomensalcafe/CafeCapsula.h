#include "Cafe.h"

class CafeCapsula : public Cafe {
private:
int quantidadeCapsulas;
public:
CafeCapsula(string nome, double preco, double gramas, int quantidadeCapsulas);
virtual ~CafeCapsula() {}
};