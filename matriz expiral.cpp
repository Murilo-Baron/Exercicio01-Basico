#include <iostream>

using namespace std;

int main() {

  int N;
  
  cout << "Digite o tamanho da matriz: ";

  cin >> N;

  int matriz[N][N];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      matriz[i][j] = 0;
    }
  }

  int contador = 1;
  for (int i = 0; i < N / 2; i++) {
    for (int j = i; j < N - i; j++) {
      matriz[i][j] = contador;
      contador++;
    }
    for (int j = N - i - 1; j >= i; j--) {
      matriz[j][N - i - 1] = contador;
      contador++;
    }
    for (int j = N - i - 2; j > i; j--) {
      matriz[N - i - 1][j] = contador;
      contador++;
    }
    for (int j = i + 1; j <= N - i - 1; j++) {
      matriz[j][i] = contador;
      contador++;
    }
  }

  int vetor_espiral[N * N];

  
  int k = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (matriz[i][j] != 0) {
        vetor_espiral[k] = matriz[i][j];
        k++;
      }
    }
  }
 
  for (int i = 0; i < N * N; i++) {
    cout << vetor_espiral[i] << " ";
  }

  return 0;
}
