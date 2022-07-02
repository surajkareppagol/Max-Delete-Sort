/*
 * AUTHOR : SHADOWW
 * LAST MODIFIED : 2 / 07 / 2022
 */

#include <stdio.h>
#define MAX 60

int n, i, l, j, x, temp, tempElement, indexNumber, elementList[MAX];

int main()
{
  printf("--------------------\n");
  printf("|  MAX DELETE SORT |\n");
  printf("--------------------\n");
  printf("\nENTER THE NUMBER OF ELEMENTS: ");
  scanf("%d", &n);
  printf("\nENTER THE ELEMENTS: ");
  for (i = 0; i < n; i++)
    scanf("%d", &elementList[i]);
  l = n - 1;
  indexNumber = n;

  for (j = 0; j < n; j++)
  {
    temp = elementList[0];
    x = 0;
    for (i = 1; i < indexNumber; i++)
    {
      if (temp < elementList[i])
      {
        temp = elementList[i];
        x = i;
      }
    }
    if (x == 0)
    {
      tempElement = elementList[l];
      elementList[l] = elementList[0];
      elementList[0] = tempElement;
      l -= 1;
    }
    else
    {
      tempElement = elementList[l];
      elementList[l] = elementList[x];
      elementList[x] = tempElement;
      l -= 1;
    }
    indexNumber -= 1;
  }

  printf("\nELEMENTS SORTED SUCCESSFULLY: ");
  for (i = 0; i < n; i++)
    printf("%d ", elementList[i]);
  printf("\n");
  return 0;
}