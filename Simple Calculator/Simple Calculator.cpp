/* CSE115LAssigment : This is a program for a simple calculation. */

#include "stdafx.h"

void Add() {
	double s = 0, a[100];
	int i;
	printf("Enter numbers to get their summation, enter 0 to see the sum : ");
	for (i = 0; i < 100; i++) {
		scanf("%lf", &a[i]);
		s = s + a[i];
		if (a[i] == 0) break;
	}
	printf("The answer is %.2lf", s);
}
void Subtraction() {
	double a, b, d;
	printf("Enter two numbers to see their difference: ");
	scanf("%lf %lf", &a, &b);
	if (a > b) d = a - b;
	else d = b - a;
	printf("The difference between %.2lf and %.2lf is %.2lf", a, b, d);
}
void Division() {
	double a, b, d;
	printf("Enter the Divisor and Dividend: ");
	scanf("%lf %lf", &a, &b);
	d = a / b;
	printf("The Quotient is %.2lf", d);
}
void Multiplication() {
	double s = 1, a[100];
	int i;
	printf("Enter numbers to get their multiplication, enter 1 to see the result : ");
	for (i = 0; i < 100; i++) {
		scanf("%lf", &a[i]);
		s = s * a[i];
		if (a[i] == 1) break;
	}
	printf("The answer is %.2lf", s);
}
void Reminder() {
	int a, b, r;
	printf("Enter the Divisor and Dividend: ");
	scanf("%d %d", &a, &b);
	r = a % b;
	printf("The Reminder is %d", r);
}
void Factorial() {
	int n, i, f = 1;
	printf("Enter the number to see it's factorial: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		f = f * i;
	}
	printf("The factorial of %d is %d", n, f);
}
int Logarithm() {
	double l, n;
	printf("Enter the number to see it's natural logarithm (base-e): ");
	scanf("%lf", &n);
	l = log(n);
	printf("The result is %lf", l);
	return 0;
}
void Exponent() {
	int y;
	double x, ex;
	printf("Enter the base and exponent: ");
	scanf("%lf %d", &x, &y);
	ex = pow(x, y);
	printf("The result is %lf", ex);
}
void SquareRoot() {
	double st, n;
	printf("Enter the number to see it's square root: ");
	scanf("%lf", &n);
	st = sqrt(n);
	printf("The square root is %.2f", st);
}
void CubeRoot() {
	double cube, n;
	printf("Enter the number to see it's cube root: ");
	scanf("%lf", &n);
	cube = cbrt(n);
	printf("The cube root is %.2f", cube);
}
void Sine() {
	double n, sine;
	char a;
	printf("Enter the angle (in degree): ");
	scanf("%lf", &n);
	n = n * pi / 180;
	sine = sin(n);
	printf("The sine value is %.3lf", sine);
}
void Cosine() {
	double n, cosin;
	char a;
	printf("Enter the angle (in degree): ");
	scanf("%lf", &n);
	n = n * pi / 180;
	cosin = cos(n);
	printf("The cosine value is %.3lf", cosin);
}
void Tangent() {
	double n, t;
	printf("Enter the angle (in degree): ");
	scanf("%lf", &n);
	n = n * pi / 180;
	t = tan(n);
	printf("The tangent value of %.3lf", t);
}
void Sine_Inverse() {
	double n, sine_inverse;
	printf("Enter the value: ");
	scanf("%lf", &n);
	sine_inverse = asin(n);
	printf("The inverse sine angle is %.3lf", sine_inverse * 180 / pi);
}
void Cosine_Inverse() {
	double n, cosin_inverse;
	printf("Enter the value: ");
	scanf("%lf", &n);
	cosin_inverse = acos(n);
	printf("The inverse cosine angle is %.3lf", cosin_inverse * 180 / pi);
}
void Tangent_Inverse() {
	double n, t_inverse;
	printf("Enter the value:");
	scanf("%lf", &n);
	t_inverse = atan(n);
	printf("The inverse tangent angle is %.3lf", t_inverse * 180 / pi);
}

int main()
{
	int n;
x:
	printf("This is a simple calculator. You need to  input the numbers down below to perform afore mentioned functions.\n1. Add				9. Square Root\n2. Subtract			10. Cube Root\n3. Multiplication		11. Sine Function\n4. Division			12. Cosine Function\n5. Reminder			13. Tangential Function\n6. Factorial			14. Inverse Sine Function\n7. Natural Logarithm		15. Inverse Cosine Function\n8. Exponent			16. Inverse Tangential Function\nEnter the function you want to proceed to: ");

	scanf("%d", &n);
	switch (n)
	{
	case 1: Add(); break;
	case 2: Subtraction(); break;
	case 3: Multiplication(); break;
	case 4: Division(); break;
	case 5: Reminder(); break;
	case 6: Factorial(); break;
	case 7: Logarithm(); break;
	case 8: Exponent(); break;
	case 9: SquareRoot(); break;
	case 10: CubeRoot(); break;
	case 11: Sine(); break;
	case 12: Cosine(); break;
	case 13: Tangent(); break;
	case 14: Sine_Inverse(); break;
	case 15: Cosine_Inverse(); break;
	case 16: Tangent_Inverse(); break;
	default: printf("Invalid Input. Try again. \n"); goto x; break;
	}
	printf("\nThank you for using my simple calculator program. \nIf you find any bug, kindly email the case at contact@sakibsadmanshajib.com.\n");
	return 0;
}
