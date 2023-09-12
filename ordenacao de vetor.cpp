#include <iostream>

using namespace std;

int main() {

  
  int vetor[5] = {7, 3, 9, 1, 5};

 
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4 - i; j++) {
      if (vetor[j] > vetor[j + 1]) {
       
        int temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    }
  }


  for (int i = 0; i < 5; i++) {
    cout << vetor[i] << " ";
  }
  cout << endl;

  return 0;
}
