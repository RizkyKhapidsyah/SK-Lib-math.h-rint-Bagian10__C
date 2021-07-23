
#include <math.h>
#include <stdio.h>
#include <conio.h>

/*	Source by Microsoft
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main() {
	double x = 2.499999;
	float y = 2.8f;
	long double z = 2.5;

	printf("rint(%f) is %.0f\n", x, rint(x));
	printf("rint(%f) is %.0f\n", -x, rint(-x));
	printf("rintf(%f) is %.0f\n", y, rintf(y));
	printf("rintf(%f) is %.0f\n", -y, rintf(-y));
	printf("rintl(%Lf) is %.0Lf\n", z, rintl(z));
	printf("rintl(%Lf) is %.0Lf\n", -z, rintl(-z));

	_getch();
	return 0;
}