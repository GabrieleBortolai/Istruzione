#include <iostream>
#include <fstream>

using namespace std;

int main(){

  const int n=3;
  
  double x[n]={1,2,3};
  double y[n]={3,6,9};

  ofstream ofile;
  
  ofile.open("risultati.dat");

  for(int i=0;i<n;i++){

    ofile<<x[i]<<" "<<y[i]<<endl;
    
  }


  ofile.close();

  return 0;

}
