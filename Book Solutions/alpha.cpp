#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n = 20;
    cout<<setw(n/2)<<""<<setw(n)<<left<<"Player's name"<<setw(n)<<left<<"Runs"<<setw(n)<<left<<"Innings"<<setw(n)<<left<<"Times not out"<<endl;
    cout<<setw(n)<<left<<"Sachin"<<setw(n)<<left<<8430<<setw(n)<<left<<230<<setw(n)<<left<<19<<endl;
    cout<<setw(n)<<left<<"Saurav"<<setw(n)<<left<<4200<<setw(n)<<left<<130<<setw(n)<<left<<9<<endl;
    cout<<setw(n)<<left<<"Rahul"<<setw(n)<<left<<3350<<setw(n)<<left<<105<<setw(n)<<left<<11<<endl;
}
