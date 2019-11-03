#include <stdio.h>
#include <stdlib.h>

int fat(int f)
{
	int molt=1;
	
	if(f==0)
	{
		return 1;
	}
	
	for(;f>=1;f--)
	{
		molt=molt*f;
	}
	
	return molt;
}

main()
{
	int riga,i,j,n,k,x,val;
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
			n=fat(i);
			k=fat(j);
			x=fat(i-j);
			val=n/(k*x);
			printf("%4d",val);
		}
		printf("\n");
	}
	printf("\n\n");
	system("pause");
}
