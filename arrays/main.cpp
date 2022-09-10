#include <iostream>

using namespace std;

void ArrayRotation();

int main(){
  int problem;
  cout << "Choose a problem\n";
  cout << "1. array rotation\n";

  cin >> problem;
  switch (problem)
  {
  case 1:
    ArrayRotation();
    break;
  
  default:
    break;
  }
}

void ArrayRotation(){
    cout << "array rotation";
}