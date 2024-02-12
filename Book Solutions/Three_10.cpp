#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    cout<<"Enter the name of the user: ";
    getline(cin,name);

    int n;
    cout<<"Enter the units consumed by "<<name<<": ";
    cin>>n;

    float charges = 50;

    if(n<=100) charges = 50 + n*0.6;
    else if(n<=300) charges = 110 + (n-100)*0.8;
    else charges = 270 + (n-300)*0.9;

    if (charges>300){
        float surcharge = 0.15 * charges;
        charges+=surcharge;
    }

    cout<<"The monthly electricity charges of "<<name<<" is "<<charges<<endl;

    

    
}