#include<iostream>
#include<conio.h>
using namespace std;

int factorial(int n);
double power(double a, int n);
void fibonacci(int n, int a = 0, int b = 1);

//#define FACTORIAL
//#define POWER
//#define FIBONACCI


void main()
{
	setlocale(LC_ALL, "");

#ifdef FACTORIAL
	int n;
	cout << "¬ведите число: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL


#ifdef POWER
	int a, n;
	cout << "¬ведите основание степени: "; cin >> a;
	cout << "¬ведите показатель степени: "; cin >> n;
	cout << power(a, n) << endl;
#endif // POWER
	
#ifdef FIBONACCI
	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	fibonacci(n);
#endif // FIBONACCI


	int n;
	cout << "¬ведите количество чисел: "; cin >> n;
	fibonacci(n);


}


#ifdef FACTORIAL

	int factorial(int n)
	{
	
	return n == 0 ? 1 : n * factorial(n - 1);
	}	
#endif // FACTORIAL
 

#ifdef POWER

   double power(double a, int n)
   {

	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / a * power(a, n + 1);
   }
#endif // POWER


#ifdef FIBONACCI
   void fibonacci(int n, int a, int b)
   {
	   if (a > n)return;
	   cout << a << "\t";
	   fibonacci(n, b, a + b);
   }
#endif // FIBONACCI


   void fibonacci(int n, int a, int b)
   {
	   if (n == 0)
	   {
		   cout << endl; return;
	   }
	   cout << a << "\t";
	   fibonacci(n - 1, b, a + b);
   }


