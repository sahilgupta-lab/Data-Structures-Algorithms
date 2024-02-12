
#include <iostream>
using namespace std;

int main() {
    int cubes = 1, ld;
    int armstrong = 0;
        
   for(int i = 1; i<=500; i++){
       int num = i;
       armstrong = 0;
       while(num>0){
           ld = num%10;
           num/=10;
           cubes=ld*ld*ld;
           armstrong+=cubes;
       }
       if (i==armstrong) cout<<i<<endl;
   }
   
}