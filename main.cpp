#include "shape.h"

int main() {
  int sel;
  double r, w, h;
  
  /*TODO4-1: write your code*/

  cout << "Enter the shape [0 for circle or 1 for rectangle]: ";
  cin >> sel;

  if (sel == 0) {
    cout << "Enter the radius of a circle: ";
    cin >> r;
    /*TODO4-2: write your code*/
  } else {
    cout << "Enter the width and height of a rectangle: ";
    cin >> w >> h;
    /*TODO4-2: write your code*/
  }

  /*TODO4-3: write your code*/

  /*TODO4-4: write your code*/

  return 0;
}
