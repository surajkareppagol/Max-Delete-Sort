/*
 * AUTHOR : SHADOWW
 * LAST MODIFIED : 17 / 11 / 2022
 */

#include <stdio.h>
#define MAX 60

int numberOfElements, i, j, l, positionOfElement, tempElement, elementList[MAX];

int main()
{
  printf("--------------------\n");
  printf("|  MAX DELETE SORT |\n");
  printf("--------------------\n");
  printf("How many numbers 🔢 do you wanna sort ? : ");
  scanf("%d", &numberOfElements);
  printf("Ok, got it now please enter the numbers 👇,\n> ");
  for (i = 0; i < numberOfElements; i++)
    scanf("%d", &elementList[i]);
  l = numberOfElements - 1;
  for (j = 0; j < numberOfElements; j++)
  {
    tempElement = elementList[0];
    positionOfElement = 0;
    for (i = 1; i < l + 1; i++)
      if (tempElement < elementList[i])
      {
        tempElement = elementList[i];
        positionOfElement = i;
      }
    tempElement = elementList[l];
    elementList[l] = elementList[positionOfElement];
    elementList[positionOfElement] = tempElement;
    l -= 1;
  }
  printf("\nHere are the sorted numbers 👇,\n> ");
  for (i = 0; i < numberOfElements; i++)
    printf("%d ", elementList[i]);
  printf("\n");
  return 0;
}