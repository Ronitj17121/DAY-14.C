#include<stdio.h>
#include<conio.h>

main()

{
	int i,j,r,c;
	
	printf("Enter a row : ",r);
	scanf("%d",&r);
	printf("Enter a colum : ",c);
	scanf("%d",&c);
	
	int a[r][c];
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf(" the lenth of arrey is %d ",r*c);
				
}
