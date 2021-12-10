#include <iostream>

using namespace std;

int main(){

const int x=2,y=2;
 double m[x][y]={{2, 3},
		 {5, 6}};

for(int i=0; i<x; i++){
for(int j=0; j<y; j++){

  cout<<m[i][j]<<" ";
}
cout<<endl;
}

return 0;

}
