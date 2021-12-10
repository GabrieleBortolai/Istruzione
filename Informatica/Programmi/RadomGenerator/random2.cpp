#include <random>
#include <iostream>

using namespace std;

double rnd();

int main(){
  //Per generare numeri random usare rnd()
  

  return 0;
}

double rnd(){

  std::random_device rd;
  std::default_random_engine eng(rd());
  std::uniform_real_distribution<double>distr(0,1);

  return distr(eng);
}
