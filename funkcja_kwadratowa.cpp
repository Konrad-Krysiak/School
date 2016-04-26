#include <iostream>
#include <math.h>
using namespace std;
float quadratic, x1, x2, delta;

int quadratic_funcion(int a, int b, int c){
  delta = pow(b, 2) - (4*a*c);
  cout << delta << endl;
  if(delta > 0){
    x1=(-b-sqrt(delta)) /(2*a);
    x2=(-b+sqrt(delta)) /(2*a);
    cout << "Miejsca zerowe funkcji to: " << x1 << " i " << x2 << " ." << endl;
  }
  else if(delta == 0){
    x1=(-b-sqrt(delta)) /(2*a);
    cout << "Miejsce zerowe funkcji to: " << x1 << " ." << endl;
  }
  else if(delta < 0){
    cout << "Brak miejsc zerowych." << endl;
  }
}

int main(){
  int a, b, c, x;
  cout << "----Funkcja kwadratowa----"<<endl;
  cout << "Podaj a: " << endl;
  cin >> a;
  cout << "Podaj b: " << endl;
  cin >> b;
  cout << "Podaj c: " << endl;
  cin >> c;
  quadratic_funcion(a, b, c);

}
