#include <iostream>
void upper_triangle(int rows);
void lower_triangle(int rows);
using namespace std;
 main() {
  int rows;
  cout <<"Enter the number of rows: ";
  cin >>rows;

  upper_triangle(rows);
  lower_triangle(rows);
}

void upper_triangle(int rows) {
  for (int i = 1; i <= rows/2; i++) {
    for (int j = 1; j <= rows/2 - i; j++) {
      cout <<" ";
    }
    for (int k = 1; k <= i; k++) {
      cout <<"*";
    }
    cout <<endl;
  }
}
void lower_triangle(int rows) {
  for (int i = rows/2; i >= 1; i--) {
    for (int j = 1; j <= rows/2 - i; j++) {
      cout <<" ";
    }
    for (int k = 1; k <= i; k++) {
      cout <<"*";
    }
    cout <<endl;
  }
}