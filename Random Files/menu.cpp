#include <iostream>
using namespace std;

class Menu{

    string dish;
    int serialNumber;
    int price;
    static int count;

    public:

    Menu(){count++;}

    static void getCount(){
        cout<<"The number of orders made are "<<count<<endl;
    }
};

int Menu :: count;

int main(){

    Menu obj1;
    Menu obj2;
    Menu obj3;
    Menu obj4[5];
    Menu :: getCount();

    
}