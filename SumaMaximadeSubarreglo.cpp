#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define valor 8
///Irene Stephany Ramirez Casas
///2020670155
using namespace std;
/// Programa para imprimir la maxima sumatoria del subarreglo

int maxSubArraySum(int a[], int size)
{
	int max_array = INT_MIN, max_finalsum = 0;

	for (int i = 0; i < size; i++)
	{
		max_finalsum = max_finalsum + a[i];
		if (max_array < max_finalsum)
			max_array = max_finalsum;

		if (max_finalsum < 0)
			max_finalsum = 0;
	}
	return max_array;
}

///Probando el subarreglo
int main()
{
    fastIO
    //int valores=0;
    //int a[valor];
    //cin>>a[valor];
	int a[] = {-1, 2, 4, -3, 5, 2, -5, 2};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a, n);
	cout<<"Ordenado"<<endl;
	for(int i=0;i<valor;i++){
		cout<<a[i]<<endl;
	}
	cout << "La suma maxima del subarreglo es: "<< max_sum;
	return 0;
}
