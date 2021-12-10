#include <random>

using namespace std;

double rnd(){

  double r;
  
  std::random_device rd;
  std::default_random_engine eng(rd());
  std::uniform_real_distribution<double> distr(0, 1);

  r=distr(eng);


  return r;

}
