#include <cs50.h>
#include <stdio.h>

void bricks(int n);

int main(void) 
{
      // bricks(get_int("Brick tower size: "));
      int i = get_int("What size tower do you want? ");
      bricks(i);
}

void bricks(int n)
{
	int i = 0;
	while(i < n)
	{
		printf("#");
		printf("  ");
		printf("#");
	  	i++;	
	}
	printf("#");
}

//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("#");
//	}
//	printf("\n");
//}
