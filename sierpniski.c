#include <stdio.h>
#include <stdlib.h>

#define t 32
#define x 65

void nextrows(char sierpinski[t][x]); //Funkcja iterująca kolejne rzędy

int main()
{

  char sierpinski[t][x];

  //Pierwszy rząd
  for (int col = 1; col < x; col++)
  {

    if (col == 32)
    {
      sierpinski[0][col] = 1;
    }
    else
    {
      sierpinski[0][col] = 0;
    }
  }

  nextrows(sierpinski);

  //Drukowanie trójkąta
  for (int row = 0; row < t; row++)
  {
    for (int col = 0; col < x; col++)
    {
      if (sierpinski[row][col] == 1)
      {
        sierpinski[row][col] = '#';
        printf("%c", sierpinski[row][col]);
      }
      else
      {
        sierpinski[row][col] = ' ';
        printf("%c", sierpinski[row][col]);
      }
    }
    printf("\n");
  }

  return 0;
}

void nextrows(char array[t][x])
{

  for (int row = 1; row < t; row++)
  {

    array[row][0] = 0;

    for (int col = 1; col < x; col++)
    {
      if (array[row - 1][col - 1] == 0 && array[row - 1][col] == 0 && array[row - 1][col + 1] == 1)
      {

        array[row][col] = 1;
      }
      else if (array[row - 1][col - 1] == 1 && array[row - 1][col] == 0 && array[row - 1][col + 1] == 0)
      {

        array[row][col] = 1;
      }
      else
      {

        array[row][col] = 0;
      }
    }
  }
}
