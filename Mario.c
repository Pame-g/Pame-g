#include <stdio.h>
#include <cs50.h>

int main (void)
{
	int height =0;
	
	do 
	{
	height = get_int("Height: ");
	}
	while(height <= 1 || height >8);
	
  for(int i=1; i<= height; i++)
  {
  printf(i)
  }

}
