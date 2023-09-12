#include <iostream>

using namespace std;

int main() {

  
  int vetor[5] = {1, 2, 3, 4, 5};

  
  int rotacao = 3;


  for (int i = 0; i < rotacao; i++) {
    int temp = vetor[4];
    for (int j = 4; j > 0; j--) {
      vetor[j] = vetor[j - 1];
    }
    vetor[0] = temp;
  }


  for (int i = 0; i < 5; i++) {
    cout << vetor[i] << " ";
  }

  cout << endl;

  return 0;
}
