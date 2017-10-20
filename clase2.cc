#include <iostream>
//Programa para calcular el valor factorial de un nùmero
 using namespace std;
int main()
{
//Pide un nùmero entero
  int N=0;cout<<"Dame un numero entero"<<endl;cin>>N;
  //Los valores iniciales de M y F
  int M=1;int F=1;
  //Se busca que a M se le sume 1 hasta alcanzar el valor dado N
  while(M!=N){M=M+1;F=F*M;}
  //Realiza F=F*M hasta que M=N, siendo N el valor que nosotros le demos cuando nos lo pide
  cout<<"Valor final" << F <<endl; return 0;
}
