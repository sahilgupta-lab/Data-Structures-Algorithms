
#include <iostream>
using namespace std;

int main() {
   int n, a = 1, b = 1, sum;
   cout<<"Enter the nth term: ";
   cin>>n;
   cout<<a<<" "<<b<<" ";
   
   for(int i = 1; i<=n-2; i++){
       sum = a + b;
       a = b;
       b = sum;
       cout<<sum<<" ";
   }
}