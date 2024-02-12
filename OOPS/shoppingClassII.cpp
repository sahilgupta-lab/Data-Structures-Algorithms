#include<iostream>
using namespace std;


class Shop{
    int itemId;
    int c1;
    int c2;

    public:
    int price;

    Shop(){c1=1; c2=1;};

    
    void getDetail(){
        cout<<"\nEnter the item id of the object "<<c1<<" : ";
        cin>>itemId;
        cout<<"Enter the price of the object "<<c1<<" : ";
        cin>>price;
        c1++;
    }

    void display(){
        cout<<"The item id of object "<<c2<<" is "<<itemId<<" and its price is "<<price<<endl;
    }

};


int main(){
    int n;
    cout<<"Enter the number of objects you want to buy: ";
    cin>>n;

    Shop obj[n];
    
    for(int i=0; i<n; i++){
        obj[i].getDetail();
    }

    cout<<endl;

    for(int i=0; i<n; i++){
        obj[i].display();
    }

    int total=0;
    for(int i=0; i<n; i++){
        total+=obj[i].price;
    }

    cout<<"\nGrand Total: "<<total;





    

    

}