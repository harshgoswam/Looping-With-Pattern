#include<stdio.h>

main()
{
	int r,c;
	
    for(r=5;r>=1;r--)
	{
		for(c=r;c>=1;c--)
		
		if(c%2==1)
		{
			printf("1");
		}else
		{
		printf("0");

		}
		printf("\n");
	}
}
