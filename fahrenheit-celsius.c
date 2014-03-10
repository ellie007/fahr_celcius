#include <stdio.h>

void fToCGraphHeader(){

  char f = 'F';
  char c = 'C';

  printf("%c\t%c\n", f, c);
}

void cToFGraphHeader(){

  char ce = 'C';
  char fa = 'F';

  printf("%c\t%c\n", ce, fa);
}


/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
void fToCelcius()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;    /* lower limit of temperature scale */
  upper = 300;  /* upper limit */
  step = 20;    /* step size */

  fahr = lower;

  while (fahr <= upper) {
    celsius = 5.0/9.0 * (fahr - 32.0);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

void cToFarenheit()
{
  float farenheit, cels;
  int bottom, ceiling, forwarder;

  bottom = -20;
  ceiling = 160;
  forwarder = 20;

  cels = bottom;

  while (cels <= ceiling){
    farenheit = cels * 9.0/5.0 + 32.0;
    printf("%6.0f\t%3.0f\n", cels, farenheit);
    cels = cels + forwarder;
  }

}

int main(){
  fToCGraphHeader();
  fToCelcius();

  cToFGraphHeader();
  cToFarenheit();
}
