#include <iostream>
#include <string>

using namespace std;

void print_set(int arr[], int n);
int construct_set(int arr[]);
void set_union(int A[], int B[], int res[]);
void set_intersection(int A[], int B[], int res[]);
int n;

int main() {
    cout << "Enter the largest element in the set: ";
    cin >> n;
    n = n + 1;
    int set_p[n] = { 0 };
    int set_q[n] = { 0 };
    int union_of_pq[n] = { 0 };
    int intersection_of_pq[n] = { 0 };

    cout << "First set\n";
    construct_set(set_p);
    print_set(set_p, n);
    cout << "Second set\n";
    construct_set(set_q);
    print_set(set_q, n);
    set_union(set_p, set_q, union_of_pq);
    set_intersection(set_p, set_q, intersection_of_pq);
    cout << "\nUnion of first set and second set is: ";
    print_set(union_of_pq, n);
    cout << "\nIntersection of first set and second set is: ";
    print_set(intersection_of_pq, n);
    return 0;
}

int construct_set(int arr[]) {
    cout << "Enter the number of elements of the set: ";
    int size_of_set = 0;
    cin >> size_of_set;
    cout << "Enter the elements of the set:\n";
    for (int i = 0; i < size_of_set; i++) {
        int index;
        cout << "Element: ";
        cin >> index;
        if (index >= 0) {
            cout << "Multiplicity: ";
            cin >> arr[index];
        }
    }
    return 0;
}

void print_set(int arr[], int n) {
    string set = "";
    string multiplicity = "";
    string comma = "\t";
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 1) {
            set += to_string(i) + comma;
            multiplicity += to_string(arr[i]) + comma;
        }

    }
    cout << set << "\n" << multiplicity;
    return;
}

void set_union(int A[], int B[], int res[]) {
    for (int i = 0; i < n; i++) {
        if (A[i] >= B[i]) {
            res[i] = A[i];
        }
        else {
            res[i] = B[i];
        }
    };
    return;
}

void set_intersection(int A[], int B[], int res[]) {
    for (int i = 0; i < n; i++) {
        if (A[i] <= B[i]) {
            res[i] = A[i];
        }
        else {
            res[i] = B[i];
        }
    }
    return;
}
