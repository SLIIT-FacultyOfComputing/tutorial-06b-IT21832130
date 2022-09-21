#include <iostream>
using namespace std;
#include "Box.h"

int main() {
  
  Box box1;
   // 1. Create a Box type object called box1
  
  
   // ======= DO NOT CHANGE THE INPUT ===========
   int height, length, width;
   cout << "Enter the Height of the Box : ";
   cin >> height;
   cout << "Enter the Length of the Box : ";
   cin >> length;
   cout << "Enter the width of the Box : ";
   cin >> width;
   // ===========================================
  
   // 2. Use setters assign height, length, width throw
  
   // === DO NOT CHANGE THE OUTPUT =============
   cout << "Box Height " << box1.getHeight() << endl;
   cout << "Box Length " << box1.getLength() << endl;
   cout << "Box Width " << box1.getWidth() << endl;
   cout << "Volume of Box is " << box1.calcVolume() << endl;
   // ==========================================

   box1.setLength(length);
   box1.setWidth(width);
   box1.setHeight(height);

   return 0;
}
#include <iostream>
#include "Box.h"
using namespace std;

int main()
{
    Box box1;
    int length, width, height;

    cout<< "Enter Length of box : ";
    cin >> length;
    cout << "Enter width of box : ";
    cin >> width;
    cout << "Enter Height of box : ";
    cin >> height;

    box1.setLength(length);
    box1.setWidth(width);
    box1.setHeight(height);

 
}

