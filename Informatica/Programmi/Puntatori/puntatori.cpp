#include <iostream>

using namespace std;

int main(){

int n=5;
int *p;

p=&n;

 cout<<"Indirizzo puntatore: "<<&p<<"Valore del puntatore: "<<*p<<"Indirzzo variabile puntata: "<<p<<endl;  //&p indirizzo del puntatore, *p valore della variabile puntata, p indirizzo della variabile puntata.

 const int k=3;
 int v[k]={1,2,3};

 cout<<"Vettore valore componte: "<<*(v+2)<<"Indirizzo array: "<<v<<"Indirizzo pointer: "<<&v<<endl; //il nome dell'array é il puntatore alla locazione di memoria contenete il valore, *v restituisce il valore della prima componente.
 
return 0;

}
