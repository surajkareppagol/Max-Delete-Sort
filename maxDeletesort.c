/*
 * AUTHOR : SHADOWW
 * LAST MODIFIED : 5 / 07 / 2022
 */

#include <stdio.h>
#define MAX 60

int n, i, l, j, x, tempElement, indexNumber, elementList[MAX];

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
    tempElement = elementList[0];
    x = 0;
    for (i = 1; i < indexNumber; i++)
    {
      if (tempElement < elementList[i])
      {
        tempElement = elementList[i];
        x = i;
      }
    }
    tempElement = elementList[l];
    elementList[l] = elementList[x];
    elementList[x] = tempElement; // SWAP THE ELEMENTS
    l -= 1;
    indexNumber -= 1;
  }

  printf("\nELEMENTS SORTED SUCCESSFULLY: ");
  for (i = 0; i < n; i++)
    printf("%d ", elementList[i]);
  printf("\n");
  return 0;
}