#include <stdio.h>
#include <stdlib.h>

main()
{
	int riga,i,j,molt=1;
	do{
		printf("Inserisci la riga: ");
		scanf("%d",&riga);
	}while(riga<1);
	for(i=0;i<=riga;i++)
	{
		for(j=0;j<riga-i;j++)
		{
			printf("  ");
		}
		for(j=0;j<=i;j++)
		{
			if(j==0)
				molt=1;
			else
				molt=molt*(i-j+1)/j;
			printf("%4d",molt);
		}
		printf("\n");
	}
}
