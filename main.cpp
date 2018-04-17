#include <iostream>

using namespace std;

void swapValue (int&, int&, int&);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  swapValue(red,green,blue);


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

void swapValue ( int& red, int& green, int& blue)
{
  int tempR = 0;
  int tempB = 0;
  int tempG = 0;
  
  tempR = red;
  tempG = green;
  tempB = blue;

  if ( red < green )
  {
    red = green;
    green = tempR;
  }
  if ( red < blue )
  {
    blue = red;
    red = tempB;
    
  }
  if ( green < blue )
  {
    tempG = green;
    green = blue;
    blue = tempG;
  }
}
