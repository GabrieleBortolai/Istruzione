#include <iostream>

using namespace std;

int main(){

for( int i=0; i<4; i++){

if( i==2) continue;
if( i==4) break;

cout<<i<<endl;

}

return 0;
}
