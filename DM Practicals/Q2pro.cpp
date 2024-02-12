#include <iostream>
#include<vector>
using namespace std;

class Relation{
    int n;
    vector<vector<int>> v;

    public:
    bool isReflexive();
    bool isSymmetric();
    bool isAntiSymmetric();
    bool isTransitive();
    void show();

    Relation(int n){
        this->n=n;
        v = vector<vector<int>> (n, vector<int>(n));
        cout<<"Enter the zero one matrix: "<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)  cin>>v[i][j];
        }
    }

    Relation(){};
};

bool Relation :: isReflexive(){
    bool flag = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                if(v[i][j]!=1){
                    flag=0;
                    break;
                }
            }
        }
    }
    return flag;    
}

bool Relation :: isSymmetric(){
    bool flag=1;
    for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(v[i][j]==1 && v[j][i]==1){
                    flag=0;
                    break;
            }
        }
    }
        return flag;
}

bool Relation :: isAntiSymmetric(){
    bool flag=0;
    if(!isSymmetric())  flag=1;
    return flag;
}

bool Relation :: isTransitive(){
    bool flag = 1;
    for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int k=0; k<n; k++){
                    if(v[i][j]==1 && v[j][k]==1 && v[i][k]!=1){
                        flag=0;
                        break;
                    }
                }
            }
        }
        return flag;
}

void Relation :: show(){
    if(isReflexive() && isSymmetric() && isTransitive()){
        cout<<"The relation is equivalence"<<endl;
    }    
    else if(isReflexive() && isAntiSymmetric() && isTransitive()){
        cout<<"The relation is partial ordering"<<endl;
    }  
    else{
        cout<<"The relation is neither equivalence nor partial ordering"<<endl;
    }    
}

int main(){
    int n;
    cout<<"Enter the size of the zero one matrix: ";
    cin>>n;

    Relation r(n);
    r.isReflexive();
    r.isSymmetric();
    r.isAntiSymmetric();
    r.isTransitive();
    r.show();
}