#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void MMQ(int quantia, float x[], float y[])
{
	float somaX = 0, somaY = 0, somaX2 = 0, somaXY = 0, somaXnew = 0, somaXYnew = 0;
	double a = 0, b = 0;
	for (int i = 0; i < quantia; i++){
		somaX += x[i];
		somaY += y[i];
		somaX2 += pow(x[i], 2);
		somaXY += x[i] * y[i];
	}
	printf("somaX: %f somaY: %f somaX2: %f somaXY: %f \n\n\n", somaX, somaY, somaX2, somaXY);
	
	a = (((somaX*somaY) - quantia*somaXY) / ((somaX*somaX) - quantia*somaX2));
	b = ((somaXY*somaX) - (somaX2*somaY)) / ((pow(somaX, 2) - quantia*somaX2));

	system("cls");

	printf("f(x) = %fx + (%f)\n\n\n", a, b);
	
	printf("Novos valores:\n");
	for (int i = 0; i < quantia; i++){
		y[i] = (a*x[i]) + b;
		printf("\nx: %f y: %f", x[i], y[i]);
	}

	printf("\n\n");
	system("pause");

}

int main()
{
	float x[100];
	float y[100];
	int quantia;
	printf("quantos dados tem?");
	scanf("%d", &quantia);
	system("cls");

	/*dados usados no trabalho*/
	
		x[0]=2011;
		x[1]=2012;
		x[2]=2013;
		x[3]=2014;
		x[4]=2015;

		y[0]=31125;
		y[1]=33362;
		y[2]=35415;
		y[3]=37060;
		y[4]=38323;
	
	/*for (int i = 0; i < quantia; i++){
		printf("X[%d]= ",i+1);
		scanf("%f",& x[i]);
		printf("Y[%d]= ", i + 1);
		scanf("%f",& y[i]);
	}*/

		for (int i = 0; i < quantia; i++){
			printf("X[%d]= %f    y[%d]= %f\n",i, x[i], i, y[i]);
		}

	MMQ(quantia, x, y);
}