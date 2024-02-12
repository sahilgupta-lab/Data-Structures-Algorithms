
#include <iostream>
using namespace std;

int main() {
   int n, factorial = 1;
   cout<<"Enter the nth term: ";
   cin>>n;
   
   for(int i = 1; i<=n; i++){
       factorial*=i;
       cout<<i<<"! = "<<factorial<<endl;
   }
}