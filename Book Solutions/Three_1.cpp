#include <iostream>
using namespace std;

void swapNum(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;

    return;
}

int main(){
    int a = 5, b = 3;
    swapNum(a,b);
    cout<<a<<" "<<b;

}