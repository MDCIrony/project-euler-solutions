#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int top_range = 1000;
  int count = 0;
  for (int i = 1; i < top_range; i++)
  {
    if ((i%3 == 0) || (i%5 == 0))
    {
      count += i;
    }
  }

  printf("Final count value: %d\n", count);
}