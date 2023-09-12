#include <iostream>

using namespace std;

int main() {

  s
  int vetor[5];

  
  cout << "Digite os valores do vetor: ";

  
  for (int i = 0; i < 5; i++) {
    cin >> vetor[i];
  }

  
  int soma = 0;

  
  for (int i = 0; i < 5; i++) {
    soma += vetor[i];
  }

  
  float media = (float)soma / 5;

 
  cout << "media: " << media << endl;

  return 0;
}
