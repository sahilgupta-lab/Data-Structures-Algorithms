#include<iostream>
using namespace std;

template<class T>
T findMax(int n, T arr[]){
    T max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max)  max=arr[i];
    }
    return max;
}

int main(){
    int array1[] = {1,2,3,4,5};
    cout<<findMax<int>(5, array1);
    cout<<endl;
    float array2[] = {1.0,2.0,3.0,4.0,8.3};
    cout<<findMax(5,array2);

}
