#include<iostream>
#include<iomanip>
using namespace std;

void printSet(int arr[], int n);
int constructSet(int arr[]);
void setUnion(int A[], int B[], int res[]);
void setIntersection(int A[], int B[], int res[]);
int n;

int main(){
    cout << "Enter the largest element in the set: ";
    cin >> n;
    n = n+1; 
    int setP[n] ={0};
    int setQ[n] ={0};
    int unionOfPQ[n] ={0};
    int intersectionOfPQ[n] = {0};

    cout << setw(50) << "First set"<<endl;
    constructSet(setP);
    printSet(setP , n);
    cout << setw(50) << "Second set"<<endl;
    constructSet(setQ);
    printSet(setQ , n);
    setUnion(setP, setQ, unionOfPQ);
    setIntersection(setP, setQ, intersectionOfPQ);
    cout << "Union of firstt set and second set is: ";
    printSet(unionOfPQ,n);
    cout << "Intersection of first set and second set is: ";
    printSet(intersectionOfPQ, n);
    return 0;
}

int constructSet(int arr[]){
    cout << "Enter the number of elements in the set: ";
    int sizeOfSet = 0;
    cin >> sizeOfSet;
    cout << "Enter the elements of the set: ";
    
    for(int i=0; i < sizeOfSet; i++){
        int index ;
        cin >> index;
        if (index>=0)
            arr[index] = 1;
    }
    return 0;
}

void printSet(int arr[], int n){
    string set = "";
    string comma = ", " ;
    for(int i=0; i <= n; i++){
        if (arr[i] == 1){
            set += to_string(i);
            set += comma;
        }

    }
    cout << set;
    return; 
}

void setUnion(int A[], int B[], int res[]){
    for(int i=0; i<=n ; i++){
        if ((A[i]|B[i]) == 1) res[i] = 1;
    };
    
}

void setIntersection(int A[], int B[], int res[]){
    for(int i=0; i<=n ; i++){
        if ((A[i]&B[i]) == 1) res[i] = 1;
    };
    
}
