#include <stdio.h>
//Daniela Arias
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
main()
{
float fahr, celsius;
float lower, upper, step;
lower = 0;
upper = 300;
step = 20;
/* lower limit of temperatuire scale */
/* upper limit */
/* step size */
celsius = upper;
printf("Celsius Fahr \n");
while (celsius >= lower) {
fahr = (9.0*celsius)/5.0 + 32.0 ;
printf("%3.0f %6.1f\n", celsius, fahr);
celsius = celsius - step;
}
}
