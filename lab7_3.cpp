#include<iostream>

using namespace std;

int adiff(int A, int B){
  int result;
  while(A >= 360){
    A = A - 360;
  }
  while(A <= -360){
    A = A + 360;
  }
  while(B >= 360){
    B = B - 360;
  }
  while(B <= -360){
    B = B + 360;
  }
  if(A > B){
    result = A - B;
  }
  else{
    result = B - A;
  }
  if(result > 180){
    result = 360 - result;
  }
  return result;
}


int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
