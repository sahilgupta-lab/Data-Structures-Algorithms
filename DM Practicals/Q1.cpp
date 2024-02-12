#include <iostream>
using namespace std;
class Relation {
public:
  // Constructor
  Relation(int n) {
    this->n = n;
    relation = new bool[n][n];
  }
  // Destructor
  ~Relation() {
    delete[] relation;
  }
  // Check if the relation is reflexive
  bool isReflexive() {
    for (int i = 0; i < n; i++) {
      if (!relation[i][i]) {
        return false;
      }
    }
    return true;
  }
  // Check if the relation is symmetric
  bool isSymmetric() {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (relation[i][j] != relation[j][i]) {
          return false;
        }
      }
    }
    return true;
  }
  // Check if the relation is transitive
  bool isTransitive() {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
          if (relation[i][j] && relation[j][k] && !relation[i][k]) {
            return false;
          }
        }
      }
    }
    return true;
  }
  // Show whether the relation is Equivalence, partial ordering, or none
  void show() {
    if (isReflexive() && isSymmetric() && isTransitive()) {
      cout << "Equivalence" << endl;
    } else if (isReflexive() && isTransitive()) {
      cout << "Partial ordering" << endl;
    } else {
      cout << "None" << endl;