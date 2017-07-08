#include <iostream>
using namespace std;

int main(){

  float f,c;

  cout << "\n Enter temprature in fahrenhit: ";
  cin>>f;
  c = (f-32)*5/9;   /*T(°C) = (T(°F) - 32) × 5/9*/

  cout <<"temperature in celcuis is: "<<c;
    return 0;
}
