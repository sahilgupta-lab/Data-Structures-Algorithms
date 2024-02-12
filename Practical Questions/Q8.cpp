#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Matrix{
    int m;
    int n;
    vector<vector<int>> v;

    public:
    Matrix(int m,int n){
        this->m=m;
        this->n=n;

        cout<<endl;
        for(int i=0; i<m; i++){
            vector<int> temp;
            for(int j=0; j<n; j++){
                int t;
                cout<<"Enter the value of element at location "<<i<<" "<<j<<": ";
                cin>>t;
                temp.push_back(t);
            }
            v.push_back(temp);
        }
    }

    void sum(Matrix);
    void product(Matrix);
    void transpose();

};

void Matrix :: sum(Matrix a){
    if(m!=a.m || n!=a.n){
        cout<<"Since the order of the two matrices is not the same, hence addition is not possible"<<endl;
    }
    else{
        int arr[m][n]={0};
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                arr[i][j]=v[i][j]+a.v[i][j];
            }
        }

        cout<<endl<<"The sum of the two matrices is: "<<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

void Matrix :: product(Matrix a){
    if(n!=a.m){
        cout<<"Multiplication is not possible"<<endl;
    }
    else{
        int arr[m][a.n];
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                arr[i][j]=0;
                for(int k=0; k<n; k++){
                    arr[i][j]+=v[i][k]*a.v[k][j];
                }
            }
        }

        cout<<endl<<"The product of the two matrices is:"<<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<a.n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

void Matrix :: transpose(){
    int arr[m][n]={0};

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr[i][j]=v[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<i; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout<<endl<<"The transpose of the matrix is: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    Matrix m1(2,4);
    Matrix m2(4,2);

    // m1.sum(m2);
    m1.product(m2);
    // m1.transpose();
    // m2.transpose();


}