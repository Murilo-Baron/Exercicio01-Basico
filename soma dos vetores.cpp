#include <iostream>

using namespace std;

int main() {

  
  int vetorA[3];
  int vetorB[3];

 
  cout << "Digite os valores do vetor A: ";

  
  for (int i = 0; i < 3; i++) {
    cin >> vetorA[i];
  }

 
  cout << "Digite os valores do vetor B: ";

  
  for (int i = 0; i < 3; i++) {
    cin >> vetorB[i];
  }

 
  int vetorSoma[3];

  
  for (int i = 0; i < 3; i++) {
    vetorSoma[i] = vetorA[i] + vetorB[i];
  }

  
  for (int i = 0; i < 3; i++) {
    cout << vetorSoma[i] << " ";
  }
  cout << endl;

  return 0;

  }

