#include <iostream>

using namespace std;

int main() {

 
  int vetorA[3] = {2, 3, 4};
  int vetorB[3] = {5, 6, 7};

  
  int produto_escalar = 0;


  for (int i = 0; i < 3; i++) {
    produto_escalar += vetorA[i] * vetorB[i];
  }


  cout << "Produto Escalar: " << produto_escalar << endl;

  return 0;
}
