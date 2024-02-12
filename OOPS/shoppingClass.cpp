#include<iostream>
using namespace std;


class Shop{
    int counter;
    int n;
    int itemId[100];
    int price[100];
    int total;

    public:

    Shop(){
        counter=0;
        total=0;
    }

    void getNumOfObjects(){
        cout<<"Enter the number of objects you want to buy: ";
        cin>>n;
    }

    int getN(){
        return n;
    }
    
    void getDetail(){
        cout<<"\nEnter the item id of the object "<<counter+1<<" : ";
        cin>>itemId[counter];
        cout<<"Enter the price of the object "<<counter+1<<" : ";
        cin>>price[counter];
        counter++;
    }

    void display(){
        cout<<endl;
        for(int i=0; i<n; i++){
            cout<<"The item id of object "<<i+1<<" is "<<itemId[i]<<" and its price is "<<price[i]<<endl;
        }
    }

    void showTotal(){
        for(int i=0; i<n; i++){
            total+=price[i];
        }

        cout<<"\nYour total is: "<<total<<endl;
    }
};

int main(){

    Shop obj;
    obj.getNumOfObjects();

    int m = obj.getN();
    for(int i=0; i<m; i++){
        obj.getDetail();
    }

    obj.display();

    obj.showTotal();

    

}