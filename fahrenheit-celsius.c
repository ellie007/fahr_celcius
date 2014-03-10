#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

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
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
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
