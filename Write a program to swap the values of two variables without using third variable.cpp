#include <iostream>
using namespace std;

int main(){
int a,b;
  cout<<"\n Enter two numbers: ";
  cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
  cout<<"\n after swapping numbers one: ";
  cout<<a<<" "<<b;

  return 0;
}
