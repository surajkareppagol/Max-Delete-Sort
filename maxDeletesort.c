/*
 * AUTHOR : SHADOWW
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define MAX 20 // Change the value of MAX

int n, beforesort[MAX], aftersort[MAX], temp, i, l, x, j;
char condition = 'y';

int main()
{
  printf("--------------------\n");
  printf("|  MAX DELETE SORT |\n");
  printf("--------------------\n");
  while (tolower(condition) == 'y')
  {
    printf("\nENTER THE NUMBER OF ELEMENTS: ");
    scanf("%d", &n);
    printf("\nENTER THE ELEMENTS: ");
    for (i = 0; i < n; i++)
      scanf("%d", &beforesort[i]);
    l = n - 1;

    for (j = 0; j < n; j++)
    {
      temp = beforesort[0];
      x = 0;
      for (i = 1; i < n; i++)
      {
        if (temp < beforesort[i])
        {
          temp = beforesort[i];
          x = i;
        }
      }
      if (x == 0)
      {
        aftersort[l] = temp;
        beforesort[0] = 0;
        l -= 1;
      }
      else
      {
        aftersort[l] = temp;
        beforesort[x] = 0;
        l -= 1;
      }
    }

    printf("\nELEMENTS SORTED SUCCESSFULLY: ");
    for (i = 0; i < n; i++)
      printf("%d ", aftersort[i]);
    printf("\n\nRUN AGAIN?(Y/N) : ");
    scanf("%s", &condition);
    if (tolower(condition) == 'y')
    {
      for (j = 0; j < n; j++)
      {
        beforesort[j] = 0;
        aftersort[j] = 0;
      }
    }
  }
  return 0;
}