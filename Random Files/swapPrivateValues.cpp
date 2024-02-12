// #include<iostream>
// using namespace std;

// class Item{
//     int value;

//     public:

//     void setValue(int v){value=v;}
//     void getValue(){cout<<value<<endl;}

//     friend void swapValue(Item i1, Item i2);
// };

// void swapValue(Item *i1, Item *i2){
//     int temp = (*i1).value;
//     (*i1).value = (*i2).value;
//     (*i2).value = temp;
    
// }

// int main(){

//     Item obj1, obj2;

//     obj1.setValue(10);
//     obj2.setValue(20);

//     cout<<"Value before swap: \n";
//     obj1.getValue();
//     obj2.getValue();

//     swapValue(&obj1,&obj2);

//     cout<<"Value after swap: \n";
//     obj1.getValue();
//     obj2.getValue();

// }
#include<iostream>
using namespace std;

class Item {
    int value;

public:
    void setValue(int v) { value = v; }
    void getValue() { cout << value << endl; }

    friend void swapValue(Item* i1, Item* i2);  // Updated declaration
};

void swapValue(Item* i1, Item* i2) {  // Updated definition
    int temp = (*i1).value;
    (*i1).value = (*i2).value;
    (*i2).value = temp;
}

int main() {
    Item obj1, obj2;

    obj1.setValue(10);
    obj2.setValue(20);

    cout << "Value before swap: \n";
    obj1.getValue();
    obj2.getValue();

    swapValue(&obj1, &obj2);  // Pass object addresses

    cout << "Value after swap: \n";
    obj1.getValue();
    obj2.getValue();

    return 0;
}
