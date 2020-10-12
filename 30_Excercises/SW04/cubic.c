#include <stdio.h>
#include <stdlib.h>


long computeCubic(long x)
{

long xCubed = 0;
xCubed = x * x * x;

return xCubed;

}
// return x*x*x; // zulässig;




int main(int argc, char* argv[])
{
long input = atoi(argv[1]);
long xCubed = 0;
printf("Input Value: %ld\n", input);

xCubed = computeCubic(input);

printf("Cubic Value: %ld\n", xCubed);


return 0;
}
