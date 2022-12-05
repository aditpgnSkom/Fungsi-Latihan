#include <iostream>
using namespace std;

float square(float); //prototype function

int main() {
  cout << square(1) << " " << square(2) << " " << square(3);
}

float square(float x){
  return x * x;
}