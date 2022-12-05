#include <iostream>
#define PI 3.14159
using namespace std;

float radian(float); //Prototype
int main() {
  float derajat;
  cout << "Masukkan besar sudut dlm derajat : ";
  cin >> derajat;
  cout << derajat << " derajat = " << radian(derajat);
}

float radian(float x) {//The function
  return x / 180.0 * PI;
}