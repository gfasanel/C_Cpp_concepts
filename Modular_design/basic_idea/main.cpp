#include<iostream>
#include"myfunc.h"
// main.cpp
int main() {

  int a=6;
  int b=3;
  
  std::cout<<"a="<<a<<", b="<<b<<'\n';
  std::cout<<"a/b="<<div(a,b)<<'\n';
  std::cout<<"a*b="<<mul(a,b)<<'\n';

  return 0; 
}


//compile this with

//g++ -lm -Wall -g -o prova main.cpp myfunc.cpp

//Si noti che il file myfunc.h non appare nella riga di comando, verra' incluso dal gcc in fase di precompilazione
