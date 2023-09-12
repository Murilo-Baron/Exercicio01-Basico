#include <iostream>

using namespace std;

int main() {

  
  int vetor[5] = {3, 10, 2, 1, 20};

  
  int maior_subsequencia[5];

  int tamanho_maior_subsequencia = 0;

  for (int i = 0; i < 5; i++) {
    if (vetor[i] > maior_subsequencia[tamanho_maior_subsequencia - 1]) {
      maior_subsequencia[tamanho_maior_subsequencia] = vetor[i];
      tamanho_maior_subsequencia++;
    }
  }

  cout << "Maior Subsequência Crescente: ";
  for (int i = 0; i < tamanho_maior_subsequencia; i++) {
    cout << maior_subsequencia[i] << " ";
  }
  cout << endl;

  return 0;
}
