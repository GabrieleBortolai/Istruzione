#include <iostream>
#include <fstream>

using namespace std;

int main(){

  int n;
  double d,k;

  ifstream ifile;

  ifile.open("dati1.dat");

  double* x=new double [n];
  double* y=new double [n];

  n=0;
    
  while(ifile>>d>>k){

    n++;

  }

  
  ifile.clear();
  ifile.seekg(ios::beg);
   
  for(int i=0;i<n;i++){

    ifile>>x[i]>>y[i];

    cout<<x[i]<<" "<<y[i]<<endl;
  }

  ifile.close();

  return 0;

}
