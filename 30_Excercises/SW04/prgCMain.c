#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef enum {
	MAIN_MENU = 1,
	NUMSTAT,
	CUBIC,
	FACTORIAL,
	NCHOOSEK,
	PRINTBINARY,
	EXIT = 99
} MenuItem;


// function declarations
MenuItem PrintMainMenu( void );

long int ComputeCubic( long int x );
long int Factorial (long int x );
int NumStat (int x1, int x2);
int nChooseK (int x1, int x2);



int main( int argc, char* argv[] )
{

	MenuItem menuSelected = MAIN_MENU;
	int run = 1;
	long int input = 0;
	int value1=0;
	int value2=0;
	
	
	while(run)
	{
		switch(menuSelected){
			case MAIN_MENU:
				menuSelected = PrintMainMenu();
				break;
	
			case NUMSTAT:
				printf("\n");
				printf("**Numstate**\n");
				printf("\n");
				
				printf("Enter Value 1 => ");
				scanf("%d", &value1);
				printf("Enter Value 2 => ");
				scanf("%d", &value2);
				printf("\n");
				
				printf("NumStat(value1, value2)");
				
				menuSelected=MAIN_MENU;
				
				break;

			case CUBIC:
				printf("\n");
				printf("**CUBIC**");
				printf("\n");
				
				printf("Enter a 'long int' number: ");
				scanf("%ld", &input);
				printf("%ld cubed is %ld\n\n", input, ComputeCubic(input));
				
				menuSelected = MAIN_MENU;
				
				break;
			
			case FACTORIAL:
				printf("\n");
				printf("**FACTORIAL**");
				printf("\n");
				
				printf("=>");
				scanf("%d", (int*)&input);
				
				printf("Factorial of %ld is %ld\n", input, Factorial(input));
				printf("\n");
				
				menuSelected = MAIN_MENU;
				
				break;
			
			case NCHOOSEK:
				printf("\n");
				printf("**NCHOOSEK**");
				printf("\n");
				
				printf("Enter n => ");
				scanf("%d", &value1);
				printf("Enter k => ");
				scanf("%d", &value2);
				printf("%d choose %d is %d\n", value1, value2, nChooseK(value1, value2));
				printf("\n");
				
				menuSelected = MAIN_MENU;
				
				break;

			case PRINTBINARY:
				printf("\n");
				printf("**PRINTBINARY");
				printf("\n");
				
				//PrintBinary();
				
				menuSelected = MAIN_MENU;
				
				break;

			case EXIT:
				printf("\n");
				printf("**EXIT**");
				printf("\n");
					
				run = 0;
				break;

			default:		
				printf("invalid menu selection\n");
				
				menuSelected = MAIN_MENU;
				
				break;
		}
	}

 	return 0;
}


// function implementations:

MenuItem PrintMainMenu( void )
{
	MenuItem selection = MAIN_MENU;
	printf("***********************************\n");
	printf("Main Menu\n");
	printf("***********************************\n\n");
	printf("Select from the following options:\n");
	printf("%d - NumStat\n", NUMSTAT);
	printf("%d - Cubic\n", CUBIC);
	printf("%d - Factorial\n", FACTORIAL);
	printf("%d - n choose k\n", NCHOOSEK);
	printf("%d - Binary Converter k\n", PRINTBINARY);
	printf("%d - Exit\n", EXIT);
	printf("=> ");
	scanf("%d", (int*)&selection);
	return selection;
}	


long int ComputeCubic( long int x )
{
	return x*x*x;
}

long int Factorial(int long x)
{
	long int result=0;
	
	if (x>=1)
	{
	result=x*Factorial(x-1);
	}
	else
	{
	result=1;
	}
	return result;
}

int NumStat(int x1, int x2)
{
	float value1=0, value2=0;
	float maxValue = 0, minValue = 0;
	
	value1= x1;
	value2= x2;
	
	if(value1>value2)
		{
		maxValue=value1;
		minValue=value2;
		}
	else
		{
		maxValue=value2;
		minValue=value1;
		}
		
		printf("MinValue: %f\nMaxValue: %f\n", minValue, maxValue);
		
		printf("Sum: %f\n", value1+value2);
		
		printf("Absolute Difference: %f\n", fabs(maxValue-minValue));
		
		printf("Product: %f\n", value1*value2);
		
		printf("Ratio: %f\n", value2/value1);	
		
		printf("\n");	
		
	return 0;
}

int nChooseK (int n, int k)
{
	long int nf=Factorial(n);
	long int kf=Factorial(k);
	long int nkf=Factorial(n-k);
	
	return (nf/(kf*nkf));
}

int PrintBinary (void)
{
	printf("\n");
	printf("** Binary **\n");
	printf("\n");
	
	int input=0;
	long binary=0;
	int rem=0;
	int i=1;
	
	printf("%ld\n",binary);
	
	printf("Enter Number => ");
	scanf("%d", &input);
	
	int n=input;
	
	while (n !=0){
		rem=n%2;
		n= n/2;
		binary= binary+rem*i;
		i=i*10;
	}
	
	printf("%d in binary is 0b%ld\n", input, binary);

	MenuItem selection = MAIN_MENU;
	
	return selection;		
}


