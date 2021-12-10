#include <iostream>

using namespace std;

int main(){

  double a,b,sum,sott,div,prod;
  string c;

  cout<<"Inserire a"<<endl;
  cin>>a;
  cout<<"Quale operazione vuoi svolgere"<<endl;
  cin>>c;
  cout<<"Inserire il secondo valore"<<endl;
  cin>>b;

   
  if(c=="+"){

    sum=a+b;

    cout<<"La somma vale"<<sum<<endl;

  }

  else if(c=="-"){

    sott=a-b;

    cout<<"La differenza vale:"<<sott<<endl;

  }

  else if(c=="*"){

    prod=a*b;

    cout<<"Il prodotto vale:"<<prod<<endl;

  }
  
  else if(c=="/"){

    div=a/b;


    cout<<"La divisione vale:"<<div<<endl;

  }
    
