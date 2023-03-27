#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  int hour, minute, seconds;
  char colon;
  
  hour = 20;
  minute = 30;
  seconds = 34;
  colon = ':';

  int sec_per_min = 60;
  int sec_per_hour = 60 * sec_per_min;
  int sec_per_day = 24 * sec_per_hour;
  int sec_elapsed = (hour * sec_per_hour) + (minute * sec_per_min) + seconds;
  int sec_remain = sec_per_day - sec_elapsed;
  int percentage = (sec_elapsed * 100) / sec_per_day;

  printf ("The current time is ");
  printf ("%i", hour);
  printf ("%c", colon);
  printf ("%i", minute);
  printf("%c", colon);
  printf("%i", seconds);
  printf ("\n");
  
  printf ("The number of seconds since midnight is ");
  printf ("%i", sec_elapsed);
  printf ("\n");

  printf ("%i ", sec_remain);
  printf ("seconds remain in the day.");
  printf ("\n");

  printf ("%i ", percentage);
  printf ("percent of the day has passed.");
  printf ("\n");


  return (EXIT_SUCCESS);
}