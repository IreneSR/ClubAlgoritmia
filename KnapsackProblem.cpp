#include <bits/stdc++.h>
using namespace std;
///Irene Stephany Ramirez Casas
int max(int temp1, int temp2)
 {
     if(temp1 > temp2)
     return temp1;
     return temp2;
 }
int KS(int C, int P[],int Valor[],int N)
{
    ///N=Esta es la posicion de nuestro puntero o la cantidad de elementos que considera
    ///C=Es la cantidad de Capacidad que nos queda
    ///P=Es el peso de nuestros articulos.
    ///Valor=valores que estan en nuestra canasta

    if (N==0 || C==0)
        return 0;
    else  if (P[N-1] > C)
        return KS(C,P,Valor,N-1);
    else
        return max(
            Valor[N - 1]+ KS(C - P[N - 1],P, Valor, N - 1),KS(C, P, Valor, N - 1));
}

int main()
{
    int Valor[] = { 60, 100, 120 };
    int P[] = { 10, 20, 30 };
    int C = 50;
    int N = sizeof(Valor) / sizeof(Valor[0]);
    cout << KS(C, P, Valor, N);
    return 0;
}
