#include <cmath>
#include <iostream>

using namespace std;

double pot(int, int);

int main(){

  cout<<"La potenza vale: "<<pot(2,2)<<endl;

  return 0;

}

double pot(int a, int b){

  double r=pow(a,b);

  return r;

}
