#include <iostream>
using namespace std;

class Cricketer{
    string name;
    int age;
    int numOfMatches;
    int avgRuns;

    public:

    Cricketer(){};
    Cricketer(string name, int age, int num, int avg){
        this->name=name;
        this->age=age;
        numOfMatches = num;
        avgRuns=avg;
    }

    void showName(){
        cout<<"\nName of Cricketer: "<<name<<endl;
    }

    void showAge(){
        cout<<"\nAge of Cricketer: "<<age<<endl;
    }

    void showNumOfMatches(){
        cout<<"\nNumber of matches of Cricketer: "<<numOfMatches<<endl;
    }

    void showAverage(){
        cout<<"\nAverage of Cricketer: "<<avgRuns<<endl;
    }

    
};

int main(){
    Cricketer c[5];
    c[0]=Cricketer("Sahil Gupta",19,50,100);
    c[1]=Cricketer("Aryan Gupta",19,20,80);
    c[2]=Cricketer("Sujal Chandak",19,30,40);
    c[3]=Cricketer("Adarsh Gupta",19,50,100);
    c[4]=Cricketer("Yash Chandak",17,37,36);

    int e;

    do{
        int n;
        cout<<"\nEnter the serial number of cricketer (from 1 to 5): ";
        cin>>n;

        int o;
        cout<<"\nYou can view the following details of the cricketer:"<<endl;
        cout<<"1. Name"<<endl;
        cout<<"2. Age"<<endl;
        cout<<"3. Number of matches"<<endl;
        cout<<"4. Average"<<endl;
        cout<<"What do you want to view: ";
        cin>>o;

        switch (o)
        {
            case(1):{
                c[n-1].showName();
                break;
            }

            case(2):{
                c[n-1].showAge();
                break;
            }

            case(3):{
                c[n-1].showNumOfMatches();
                break;
            }

            case(4):{
                c[n-1].showAverage();
                break;
            }

            default:{
                cout<<"\nInvalid Option"<<endl;
                break;
            }
            
        }

        cout<<"\nPress 8 if you want to exit and 9 if you want to continue"<<endl;
        cin>>e;
    }
    while(e!=8);
}