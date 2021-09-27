#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int i, N;
	double S;
	cout << "N= "; cin >> N;
	S = 0;
	i = 1;
	while (i <= N) 
	{
		S += ((1 / i) + sqrt(1+sin(i)*sin(i))); i++;
	}
	cout << S << endl;

	// Другий блок програми

	S = 0;
	i = 1;

	do 
		{
			S += ((1 / i) + sqrt(1 + sin(i) * sin(i))); i++;
	}

	while (i <= N);

	cout << S << endl;
	// Третій блок програми
	S = 0;
	for (int i = 1; i <= N; i++)
	{
		S += ((1 / i) + sqrt(1 + sin(i) * sin(i)));
	}
	cout << S << endl;
	// Четвертий блок програми

	S = 0;
		for (int i = N; i >= 1; i--) {
			S += ((1 / i) + sqrt(1 + sin(i) * sin(i)));
	}
		cout << S << endl;
}

