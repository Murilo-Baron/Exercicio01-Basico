#include <iostream>

using namespace std;

int main() {

 
  int vetor[5] = {25, 12, 8, 36, 42};

  
  int valor_alvo = 8;

  
  int posicao = -1;

  
  for (int i = 0; i < 5; i++) {
    if (vetor[i] == valor_alvo) {
      posicao = i;
      break;
    }
  }

  
  if (posicao != -1) {
    cout << "Valor " << valor_alvo << " encontrado na posicao " << posicao << endl;
  } else {
    cout << "Valor " << valor_alvo << " não encontrado." << endl;
  }

  return 0;
}
